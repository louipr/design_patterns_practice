from Shape import Shape

class Square(Shape):
    
    def __init__(self):
        self._d_size = 1

    def getArea(self):
        return self.d[0]*self.d[0]

    def d_size(self):
        return self._d_size