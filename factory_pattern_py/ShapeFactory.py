from Circle import Circle
from Rectangle import Rectange
from Square import Square

class ShapeFactory(object):

    #use getShape method to get object of type shape 
    def getShape(self,shapeType):
        """ get the expected object type

        Args:
            shapeType ([type]): [description]

        Returns:
            [type]: [description]
        """
        if(shapeType == None):
            return None
        
        if shapeType.lower() == 'circle':
            return Circle()
        elif shapeType.lower() == 'rectangle':
            return Rectange()
        elif shapeType.lower() == 'square':
            return Square()
        
        return None 