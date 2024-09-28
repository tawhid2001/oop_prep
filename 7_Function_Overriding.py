



# Runtime Polymorphism -> Dynamic Binding | Overriding | Late Binding

# CompileTime Polymorphism-> Static Binding | Overloading | Early Binding


class Animal:
    def make_sound(self):
        print("Animal makes a sound")

class Dog(Animal):
    def make_sound(self):  # Overriding the method from the base class
        print("Dog barks")

# Creating objects
animal = Animal()
dog = Dog()

animal.make_sound()  # Outputs: Animal makes a sound
dog.make_sound()     # Outputs: Dog barks
