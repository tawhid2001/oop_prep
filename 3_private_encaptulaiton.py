class MyClass:
    def __init__(self) -> None:
        self.__private_var = 42 # private variable

    def __private_method(self):  # private method
        print("This is a private method")

    def public_method(self):
        print("Accessing private method: ",self.__private_var)
        self.__private_method() # accessing private method within the class


obj = MyClass()
obj.public_method()

#trying to access private members from outside the class

try:
    print(obj.__private_var)
except AttributeError:
    print("Cannot access __private_var outside the class")

try:
    obj.__private_method()
except AttributeError:
    print("Cannot access __private_method outside the class")