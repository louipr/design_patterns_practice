from Shape import Shape

class Circle(Shape):
    
    def draw(self):
        msg = "Inside Circle::draw() method"
        print(msg)
        return msg