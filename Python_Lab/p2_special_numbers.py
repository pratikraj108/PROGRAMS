def check_prime_number(number):
    i = 2
    while i<=number/2:
        if number%i == 0:
            return False
        i = i+1
    return True

def print_all_prime():
    lst_prime_numbers = []
    for i in range(2,1001):
        if check_prime_number(i):
            lst_prime_numbers.append(i)
    print(f"All prime numbers between 2 and 1000 are:{lst_prime_numbers}")


def check_armstrong(number):
    count = 0
    original_number = number
    while number!=0:
        number = number // 10
        count = count + 1

    number = original_number
    number = str(number)
    sum = 0 
    for index,digit in enumerate(number):
        sum = sum + int(digit)**count
    
    return sum == original_number

def print_all_armstrong():
    lst_armstrong=[]
    for i in range(1,1001):
        if check_armstrong(i):
            lst_armstrong.append(i)
    print(f"All armstrong numbers between 1 and 1000 are:{lst_armstrong}")


# Print 1 to 1000 Disarium Numbers Eg: 135
# Explanation: 1^1 + 3^2 + 5^3 = 1 + 9 + 125 = 135
def is_disarium(num):   
    sum = 0
    num_str = str(num)
    for index, digit in enumerate(num_str):
        sum += int(digit) ** (index + 1)
    return sum == num

def print_disarium_numbers():
    disarium_numbers = []
    for number in range(1, 1001):
         if is_disarium(number):
             disarium_numbers.append(number)
    print(f"All disarium numbers between 1 and 1000 are: {disarium_numbers}")

#9^2 = 81  -> 8 + 1 = 9 (Neon Number)
def is_neon(num):
    square_num = num*num
    square_num = str(square_num)
    sum = 0
    for index,digit in enumerate(square_num):
        sum = sum + int(digit)
    if sum == num:
        return True  
    else:
        return False
def print_neon_numbers():
    lst_neon_numbers = []
    for i in range(0,10000):
        if is_neon(i):
            lst_neon_numbers.append(i)
    print(f"All neon numbers between 0 and 10000 are:{lst_neon_numbers}")

#123  -> 1 + 2 + 3 = 6 , 1 * 2 * 3 = 6   (Spy Number)
def check_spy_number(number):
    number = str(number)
    sum = 0
    product = 1
    for index,digit in enumerate(number):
        sum = sum + int(digit)
        product = product * int(digit)
    if sum == product:
        return True
    else:
        return False


def print_all_spy_numbers():
    lst_spy_numbers = []
    for i in range(1,1001):
        if check_spy_number(i):
            lst_spy_numbers.append(i)
    print(f"All spy numbers between 1 and 1000 are:{lst_spy_numbers}")










    

