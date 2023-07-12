#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>
#include <stdlib.h>

void _tokenize_and_execute(char *lineptr, size_t n);
void _execute(char **argv, int size);
int args_count(char *lineptr);
char *_path_name(char **argv);

extern char **environ; /*this is for the environment variables*/

int main(void)
{
	char *prompt = ";) ";
	char *lineptr = NULL;
	size_t n = 0;
	int gotten_line;

	while (1)
	{
		if (isatty(STDIN_FILENO) == 1)
		{
			fflush(stdout);
			write(STDOUT_FILENO, prompt, strlen(prompt));
		}
		gotten_line = getline(&lineptr, &n, stdin);
		if (gotten_line == -1)
		{
			exit(0);
		}
		if (gotten_line != -1)
		{
			_tokenize_and_execute(lineptr, n);
		}
	}
	free(lineptr);
	return (0);
}

/* This function counts the number of arguments. I forgot why but I knnow that it's needed somewhere. 
 * I'll understand why as I read through the code*/
int args_count(char *lineptr)
{
	char *token = NULL;
	char *delim = " \n\t";
	int count = 0;

	token = strtok(lineptr, delim);
	if (token != NULL)
	{
		while (token != NULL)
		{
			count++;
			token = strtok(NULL, delim);
		}
	}
	return (count);
}

/* Instead of having a function that performs tokenizion and another that executes the commands. 
 * I just found it convenient to combine them*/
void _tokenize_and_execute(char *lineptr, size_t n)
{
	char **argv = NULL;
	int argc = 0;
	int i = 0;
	/*int j = 0;*/
	char *token = NULL;
	char *token1 = NULL;
	char *delim = " \n";
	char *str_copy;

	pid_t pid = fork();
	if (pid == -1)
	{
		perror("Error");
	}
	else if (pid == 0)
	{
		str_copy = malloc(sizeof(char *) * n);

		str_copy = strcpy(str_copy, lineptr);
		token = strtok(lineptr, delim);
		if (token != NULL)
		{
			while(token != NULL)
			{
				argc++;
				token = strtok(NULL, delim);
			}
		}
		argv = malloc(sizeof(char *) * argc);
		if(argv == NULL)
		{
			printf("argv memory allocation failed");
		}
		token1 = strtok(str_copy, delim);
		for (i = 0; i < argc; i++)
		{
			argv[i] = token1;
			token1 = strtok(NULL, delim);
		}
		argv[i] = NULL;
		/*while(argv[j] != NULL)
		{
			printf("%s\n", argv[j]);
			j++;
		}*/

		/* Now we execute. 
		 * I created a separate function to handle execution to prevent clutter and the 50 line limit*/
		_execute(argv, argc);

	}
	else
	{
		wait(NULL);
		free(argv);
	}
	/*return (*argv);*/
}

/* This funtion turns commands inputed by user into a path, example: ls --> /bin/ls.
 * It is mostly used in the execute()*/
char *_path_name(char **argv)
{
	int i = 0, j = 0;
	char *part_path = "/bin/";
	char *complete_path = NULL;

	char *command = strdup(argv[0]);
	complete_path = malloc((sizeof(command) + 1) + (sizeof(part_path) + 1));
	if (complete_path == NULL)
	{
		printf("memory allocation failed");
	}
	while (part_path[i] != '\0')
	{
		complete_path[i] = part_path[i];
		i++;
	}
	while (command[j] != '\0')
	{
		complete_path[i] = command[j];
		i++;
		j++;
	}
	return (complete_path);
}

/* This executes the command. This function is called in the tokenize_and_execute().
 * I hope this makes sense and I'm not confusing you*/
void _execute(char **argv, int size)
{
	char *path = NULL;
	int execute;
	/*int i = 0;*/
	/*char *args[3];*/
	pid_t pid;
	(void) size;

	if (*argv[0] == '/')
	{
		path = argv[0];
	}
	else
	{
		path = _path_name(argv);
	}
	if (path == NULL)
	{
		printf("path is empty\n");
	}
	/*args[0] = path;
	args[1] = argv[1];
	args[2] = NULL;*/

	pid = fork();
	if (pid == -1)
	{
		perror("fork");
	}
	if (pid == 0)
	{
		execute = execve(path, argv, environ);
		if (execute == -1)
		{
			perror("execute");
		}
	}
	else
	{
		wait(NULL);
		free(argv);
	}
}
