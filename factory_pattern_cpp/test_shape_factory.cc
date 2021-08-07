#include <gtest/gtest.h>
#include "ShapeFactory.h"
#include "Shape.h"

class ShapeFactoryTestCase: public ::testing::Test { 
  protected: 
   static void SetUpTestCase( ) { 
  
   } 
   static void TearDownTestCase( ) { 
      
   } 
    ShapeFactory shapeFactory;
};

class ShapeFactoryRectangleTestCase: public ShapeFactoryTestCase { 
protected: 
   void SetUp() override { 
     myShape = shapeFactory.getShape(ShapeFactory::ShapeType::Rectangle);
   }
   void TearDown() override { 
       delete myShape;
   }
    Shape * myShape;
};

class ShapeFactorySquareTestCase: public ShapeFactoryTestCase { 
protected: 
   void SetUp() override { 
     myShape = shapeFactory.getShape(ShapeFactory::ShapeType::Square);
   }
   void TearDown() override { 
       delete myShape;
   }
    Shape * myShape;
};

class ShapeFactoryCircleTestCase: public ShapeFactoryTestCase { 
protected: 
   void SetUp() override { 
     myShape = shapeFactory.getShape(ShapeFactory::ShapeType::Circle);
   }
   void TearDown() override { 
       delete myShape;
   }
    Shape * myShape;
};


TEST_F(ShapeFactoryRectangleTestCase, TEST_GET_AREA_DIM1) {
  double d[] = {10,20};
  myShape->setDim(d);
  EXPECT_EQ(2, myShape->d_size());
  EXPECT_EQ(200, myShape->getArea());
}

TEST_F(ShapeFactorySquareTestCase, TEST_GET_AREA_DIM1) { 
  double d[] = {20};
  myShape->setDim(d);
  EXPECT_EQ(1, myShape->d_size());
  EXPECT_EQ(400, myShape->getArea());
}

TEST_F(ShapeFactoryCircleTestCase, TEST_GET_AREA_DIM1) { 
  double d[] = {2};
  myShape->setDim(d);
  EXPECT_EQ(1, myShape->d_size());
  EXPECT_EQ(12.56, myShape->getArea());
}

TEST_F(ShapeFactoryCircleTestCase, TEST_GET_AREA_DIM2) { 
  double d[] = {1};
  myShape->setDim(d);
  EXPECT_EQ(1, myShape->d_size());
  EXPECT_EQ(3.14, myShape->getArea());
}