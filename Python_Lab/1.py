'''i = 10
print(f"The value of i is:{i}")
print(f"The type of i is:{type(i)}")
print(f"The id of 10 is:{id(10)}")

i = 10.5
print(f"The value of i is:{i}")
print(f"The type of i is:{type(i)}")
print(f"The id of 10 is:{id(10)}")'''

####################
my_name = "Pratik Raj"
mid_term_1_marks = 25
mid_term_2_marks = 30
total_ques = 50
attempted_ques = 45

total_mid_marks = mid_term_1_marks + mid_term_2_marks
print(f"{my_name} score total marks = {total_mid_marks}")

#Total Leftover question
left_over_ques = total_ques - attempted_ques
print(f"Left Over Ques are:{left_over_ques}")

per_ques_marks = 2
max_marks = total_ques*per_ques_marks
print(f"Maximum marks in paper is:{max_marks}")

# ** is used for exponent 
a = 10
b = 5
exponent = a**b
print(f"Exponent is:{exponent}")

#input
number = input("Please enter a number:")
number
