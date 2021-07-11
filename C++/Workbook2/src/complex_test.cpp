#include "/home/adi/LTTS/C++/Workbook2/include/complex.h"
#include <gtest/gtest.h>

TEST(Complex,DefaultConstructor) {
    Complex complex1;
    EXPECT_EQ(0,complex1.getreal());
    EXPECT_EQ(0,complex1.getimag());
}


TEST(Complex,DefaultConstructor_REAL) {
    Complex complex2(1);
    EXPECT_EQ(1,complex2.getreal());
 //   EXPECT_EQ(0,complex2.getimag());
}

TEST(Complex, Constructor_parameters)
{
    Complex complex3(4,4);
    EXPECT_EQ(4,complex3.getreal());
    EXPECT_EQ(4, complex3.getimag());
}


TEST(Complex, OpOverload_plus)
{
    Complex complex1(2,2);
    Complex complex2(5,5);
    Complex complex3 =complex1+complex2;
    EXPECT_EQ(7, complex3.getreal());
    EXPECT_EQ(7, complex3.getimag());
}

TEST(Complex, OpOverload_minus)
{
    Complex complex1(5,5);
    Complex complex2(2,2);
    complex1 =complex1-complex2;
    EXPECT_EQ(3, complex1.getreal());
    EXPECT_EQ(3, complex1.getimag());
}

TEST(Complex, OpOverload_multiply)
{
    Complex complex1(2,2);
    Complex complex2(5,5);
    complex1= complex1*complex2;
    EXPECT_EQ(10, complex1.getreal());
    EXPECT_EQ(10, complex1.getimag());
}

TEST(Complex, OpOverload_plusplus)
{
    Complex complex1(5,5);
    complex1++;
    EXPECT_EQ(6, complex1.getreal());
    EXPECT_EQ(6, complex1.getimag());
}

TEST(Complex, OpOverload_equalequal)
{
    Complex complex1(2,2);
    Complex complex2(5,5);
    complex1==complex2;
    EXPECT_EQ(5, complex1.getreal());
    EXPECT_EQ(5, complex1.getimag());
}

TEST(Complex,DisplayTest) {
    Complex complex10(10,20);
    std::string ExpectedOut="10,20\n";
    testing::internal::CaptureStdout();
    complex10.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}
