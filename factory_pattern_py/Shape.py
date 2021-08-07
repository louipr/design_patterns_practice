
class Shape:

    def __init__(self):
        ### define a list containing shape dimensions
        #Example, for rectangle self.d -> (l,w) := (d[0],d[1])
        self.d = None

    def getArea(self):
        pass
    
    def d_size(self):
        pass
    
    def setDim(self,d):
        """Set shape d list. d_size() to be defined by child class
        Args:
            d (string): list of shape dimensions w x h , etc
        """
        self.d = [None]*self.d_size()
        for i in range(self.d_size()):
            self.d[i] = d[i]
