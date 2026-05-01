# number=15
# flag=0
# for i in range(2,number):
#     if number%i==0:
#         flag=1
#         break

# if flag==0:
#     print("prime number")
# else:
#     print("not prime")

# only prime number:
# number=int(input("enter a number:"))
# for j in range(3,100):
#     number=j
#     flag=0
#     for i in range(2,number):
#         if number%i==0:
#          flag=1
#          break
#     if flag==0:
#         print(f"{number}prime number")
#     else:
#         pass

# total prime numer sum:
count = 0
for num in range(3, 101):
    for i in range(2, int(num*0.5 + 1)):
        if num % i == 0:
            break
    else:
        count += 1
print("Total prime numbers:", count)

