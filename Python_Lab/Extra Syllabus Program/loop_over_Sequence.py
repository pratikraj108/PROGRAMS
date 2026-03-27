# Program to demonstrate FOR LOOP over different sequences

# ===== 1. LOOP OVER A LIST =====
print("=== Loop over a List ===")
fruits = ["apple", "banana", "cherry", "date"]
for fruit in fruits:
    print("Fruit:", fruit)

# ===== 2. LOOP OVER A TUPLE =====
print("\n=== Loop over a Tuple ===")
colors = ("red", "green", "blue")
for color in colors:
    print("Color:", color)

# ===== 3. LOOP OVER A STRING =====
print("\n=== Loop over a String ===")
name = "PYTHON"
for char in name:
    print("Character:", char)

# ===== 4. LOOP OVER A RANGE =====
print("\n=== Loop over a Range ===")
for i in range(1, 6):
    print("Number:", i)

# ===== 5. LOOP OVER A DICTIONARY =====
print("\n=== Loop over a Dictionary ===")
student = {"name": "Alice", "age": 20, "grade": "A"}
for key, value in student.items():
    print(f"{key} : {value}")

# ===== 6. LOOP WITH INDEX (enumerate) =====
print("\n=== Loop with Index using enumerate ===")
animals = ["cat", "dog", "elephant"]
for index, animal in enumerate(animals):
    print(f"Index {index} : {animal}")

# ===== 7. LOOP WITH BREAK AND CONTINUE =====
print("\n=== Loop with break and continue ===")
for num in range(1, 11):
    if num == 5:
        print(f"Skipping {num} (continue)")
        continue
    if num == 8:
        print(f"Stopping at {num} (break)")
        break
    print("num:", num)