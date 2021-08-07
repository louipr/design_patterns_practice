import unittest 
from ShapeFactory import ShapeFactory

class ShapeFactoryRectangleTestCase(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.shapeFactory = ShapeFactory()
        
    def setUp(self):
        self.myShape = self.shapeFactory.getShape('RECTANGLE')

    def test_get_area_dim1(self):
        self.myShape.setDim([10,20])
        self.assertEqual(2,self.myShape.d_size())
        self.assertEqual(200,self.myShape.getArea())

class ShapeFactorySquareTestCase(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.shapeFactory = ShapeFactory()

    def setUp(self):
        self.myShape = self.shapeFactory.getShape('SQUARE')

    def test_get_area_dim1(self):
        self.myShape.setDim([20])
        self.assertEqual(1,self.myShape.d_size())
        self.assertEqual(400,self.myShape.getArea())

class ShapeFactoryCircleTestCase(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.shapeFactory = ShapeFactory()
    def setUp(self):
        self.myShape = self.shapeFactory.getShape('CIRCLE')

    def test_get_area_dim1(self):
        self.myShape.setDim([2])
        self.assertEqual(1,self.myShape.d_size())
        self.assertEqual(12.56,self.myShape.getArea())

    def test_get_area_dim2(self):
        self.myShape.setDim([1])
        self.assertEqual(1,self.myShape.d_size())
        self.assertEqual(3.14,self.myShape.getArea())