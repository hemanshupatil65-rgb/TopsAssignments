a= int(input("Enter a number: "))
print(a)
b=int(input("Enter b number: "))
print(b)

choice = "yes"
while choice == "no":
    print("Enter your choice: ")
    print("1. Addition")
    print("2. Subtraction")
    print("3. Multiplication")
    print("4. Division")
choice = input("Enter your choice: ")
if choice == "add":
    print("Addition is: ", a+b)
elif choice == "sub":
    print("Subtraction is: ", a-b)
elif choice == "mul":
    print("Multiplication is: ", a*b)
elif choice == "div":
    print("Division is: ", a/b)
else:    print("Invalid choice")

choice = input("Do you want to continue? (yes/no): ")
