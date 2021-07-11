#include"/home/adi/LTTS/C++/Workbook4/include/complex.h"
#include<iostream>
#include<gtest/gtest.h>
TEST(a_int,b_int){
	Complex<int> p1(1,1);
	ASSERT_EQ(1, p1.real());
	ASSERT_EQ(1, p1.image());
	std::string ExpectedOut="1,1";
	testing::internal::CaptureStdout();
	p1.display();
	std::string ActualOut = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
TEST(a_float,b_float){
	Complex<float> p1(2.3,4.5);
	ASSERT_EQ(1, p1.real());
	ASSERT_EQ(1, p1.image());
	std::string ExpectedOut="2.3,4.5";
	testing::internal::CaptureStdout();
	p1.display();
	std::string ActualOut = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(a_0,b_0){
	Complex<int> p;
	ASSERT_EQ(0, p.real());
	ASSERT_EQ(0, p.image());
	std::string ExpectedOut="0,0";
	testing::internal::CaptureStdout();
	p.display();
	std::string ActualOut = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

int main(int argc, char **argv) 
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }
