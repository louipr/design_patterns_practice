from Shape import Shape

class Rectange(Shape):
    
    def __init__(self):
        self._d_size = 2

    def getArea(self):
        return self.d[0]*self.d[1]

    def d_size(self):
        return self._d_size