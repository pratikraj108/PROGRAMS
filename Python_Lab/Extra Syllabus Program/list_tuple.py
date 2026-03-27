# Program to demonstrate List and Tuple in Python

# ===== LIST =====
print("=== LIST ===")
fruits = ["apple", "banana", "cherry"]
print("Original:", fruits)

fruits.append("date")          # Add at end
fruits.insert(1, "blueberry")  # Add at index
fruits.remove("cherry")        # Remove item
fruits[0] = "avocado"          # Modify item

print("Modified:", fruits)
print("Length:", len(fruits))
print("Sorted:", sorted(fruits))
print("Slice [1:3]:", fruits[1:3])

# ===== TUPLE =====
print("\n=== TUPLE ===")
colors = ("red", "green", "blue", "red")
print("Tuple:", colors)
print("Index of 'green':", colors.index("green"))
print("Count of 'red':", colors.count("red"))

# Unpacking
a, b, c, d = colors
print(f"Unpacked: a={a}, b={b}, c={c}, d={d}")

# Immutability check
try:
    colors[0] = "pink"
except TypeError:
    print("Tuples are IMMUTABLE - cannot modify!")

# ===== CONVERSION =====
print("\n=== CONVERSION ===")
print("Tuple to List:", list(colors))
print("List to Tuple:", tuple(fruits))
