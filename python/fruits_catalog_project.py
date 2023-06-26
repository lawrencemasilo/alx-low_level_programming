numberOf_items = int(input("Good day, how many items are you purcharing today? "))
j = numberOf_items

combo = input("Do you want the combo(yes/no): ")

fruit_purchase_list = []

while j != 0:
  fruit_purchase_list.append(input("enter fruits to purchase: "))
  j -= 1

combo_list = ["combo-1", "combo-2"]
#lists of items sold and their prices
fruits_list = ["Apricot", "Dates", "Almond"]
fruits_pricelist = [25, 20, 35]

#calcates discount of total amount if combo is selected
def discount(fruit_1, fruit_2):
  deduct = ((fruit_1 + fruit_2) * 10) / 100
  discounted_amount = (fruit_1 + fruit_2) - deduct
  return discounted_amount
  
if fruit_purchase_list:
  def execute(fruit_purchase_list, numberOf_items, fruits_list, fruits_pricelist, combo_list):
    i = 0
    j = 0
    a = 0
    b = 0

    if numberOf_items == 2 or 3:
      if combo == "yes":
        if (fruit_purchase_list[0] == fruits_list[0]) and (fruit_purchase_list[1] == fruits_list[1]):
          price = discount(fruits_pricelist[0], fruits_pricelist[1])
        elif (fruit_purchase_list[1] == fruits_list[1]) and (fruit_purchase_list[2] == fruits_list[2]):
          price = discount(fruits_pricelist[1], fruits_pricelist[2])
        
    while i <= 25:
      print("-", end = " ")
      i += 1
      
    print(" ")
    print(" Shoprite Retailer")
    print(" 123, hafnium Ave,")
    print(" Neo Masilo: 4438197")
    
    while j <= 25:
      print("-", end = " ")
      j += 1
      
    print(" ")
    print("Product(s)   Price(per pack)")
    print(f"{fruit_purchase_list[0]}      {fruits_pricelist[0]}")
    print(f"{fruit_purchase_list[1]}        {fruits_pricelist[1]}")
    print(f"{fruit_purchase_list[2]}       {fruits_pricelist[2]}")
    
    if (numberOf_items == 2 or 3) and combo == "yes":
      print(f"{combo_list[0]}      {price}")
    if numberOf_items == 3 and combo == "yes":
      print(f"{combo_list[1]}      {price}")
      
    while a <= 25:
      print("*", end = " ")
      a += 1
      
    print(" ")
    print("For free delivery, contact 011-123-1234")
    
    while b <= 25:
      print("*", end = " ")
      b += 1
      
  execute(fruit_purchase_list, numberOf_items, fruits_list, fruits_pricelist, combo_list)
