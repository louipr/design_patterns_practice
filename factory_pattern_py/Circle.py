from Shape import Shape

class Circle(Shape):
    
    def __init__(self):
        self._d_size = 1

    def getArea(self):
        return 3.14*self.d[0]*self.d[0]

    def d_size(self):
        return self._d_size