import module_demo
print(f"The value of x is:{module_demo.x}")

import module_demo as md
print(f"The value of y is:{md.y}")


from module_demo import addition
print(f"sum of two number is:{addition(50,60)}")