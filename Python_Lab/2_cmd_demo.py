#command line argumnett demo
from sys import argv
# print(f"Type of argv: {type(argv)}")
# print(f"First argumnet is:{argv[0]}")

# lst_numbers = [10,20,30,40] 
#list iteration
# sum = 0
# length = len(lst_numbers)
# for number in lst_numbers:
#     sum = sum + number
# print("sum is:",sum)    

# for i in range(0,length):
#     sum = sum + lst_numbers[i]  
# print("sum is:",sum)     
cmd_argument = argv[1:]
sum =0
for number in cmd_argument:
    sum = sum + int(number)
print(f"Sum of command line arguments is:{sum}")    