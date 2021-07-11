#include "/home/adi/LTTS/C++/Workbook3/include/shape.h"
#include "/home/adi/LTTS/C++/Workbook3/include/polygon.h"
#include "/home/adi/LTTS/C++/Workbook3/include/circle.h"
#include "/home/adi/LTTS/C++/Workbook3/include/triangle.h"
#include "/home/adi/LTTS/C++/Workbook3/include/rectangle.h"

#include<gtest/gtest.h>



    TEST(Circle, area)
    {
        Circle circle(10);
        double area = circle.area();
        EXPECT_FLOAT_EQ(157.1428,area);
    }
    TEST(Circle, circumference)
    {
        Circle circle2(5);
        EXPECT_FLOAT_EQ(31.428572,circle2.circumference());
    }

    TEST(Triangle, area)
    {
        Triangle t(10,10,10);
        EXPECT_FLOAT_EQ(43.3012703,t.area());
    }
     TEST(Triangle, circumference)
    {
        Triangle triangle1(.0,5,6);
        EXPECT_FLOAT_EQ(15.0,triangle1.circumference());
    }

    TEST(Rectangle, area)
    {
        Rectangle rectangle0(3,5);
        EXPECT_FLOAT_EQ(15,rectangle0.area());
    }
    TEST(Rectangle, circumference)
    {
        Rectangle rectangle1(3,10);
        EXPECT_FLOAT_EQ(26,rectangle1.circumference());
    }

int main(int argc, char **argv) 
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }
