# Base class
class A:
    def __init__(self, value_a):
        self.value_a = value_a

    def display_A(self):
        print(f"Value from class A: {self.value_a}")

# Derived class from A
class B(A):
    def __init__(self, value_a, value_b):
        super().__init__(value_a)  # Initialize the base class
        self.value_b = value_b

    def display_B(self):
        print(f"Value from class B: {self.value_b}")

# Further derived class from B
class C(B):
    def __init__(self, value_a, value_b, value_c):
        super().__init__(value_a, value_b)  # Initialize the intermediate class
        self.value_c = value_c

    def display_C(self):
        print(f"Value from class C: {self.value_c}")

# Creating an object of class C and passing values
value_a = 1
value_b = 2
value_c = 3

obj = C(value_a, value_b, value_c)
obj.display_A()  # Inherited from A
obj.display_B()  # Inherited from B
obj.display_C()  # Defined in C
