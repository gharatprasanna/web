num = int(input("Enter a number: "))
if num % 2 == 0:
  print(num, "is divisible by 2")
if num % 3 == 0:
  print(num, "is divisible by 3")
if num % 5 == 0:
  print(num, "is divisible by 5")
if num % 2 != 0 and num % 3 != 0 and num % 5 != 0:
  print(num, "is not divisible by 2, 3, or 5")