
#include <gtest/gtest.h>
#include "/home/adi/LTTS/C++/Workbook1/include/Box.h"


TEST(Box, Default_Constructor){
    Box box1;
    EXPECT_EQ(0,box1.getlength());
    EXPECT_EQ(0,box1.getbreadth());
    EXPECT_EQ(0,box1.getheight());
    EXPECT_EQ(0,box1.volume());
    
}

TEST(Box, Passing_Parameters){
    Box box2(420,420,420);
    EXPECT_EQ(420,box2.getlength());
    EXPECT_EQ(420,box2.getbreadth());
    EXPECT_EQ(420,box2.getheight());
    EXPECT_EQ((74088000),box2.volume());
}

TEST (Box, Copyconstructor)
{
    Box box3(69,79,89);
    Box box4(box3);
    EXPECT_EQ(69, box4.getlength());
    EXPECT_EQ(79, box4.getbreadth());
    EXPECT_EQ(89, box4.getheight());
    EXPECT_EQ(485139,box4.volume());
}

TEST (Box, Volume_Compute)
{
     Box box5(30,30,30);
    EXPECT_EQ(27000, box5.volume());
}

TEST (Box, Display_test)
{
    Box box6(100000,100000,100000);
    std::string outputstring_expected = "100000,100000,100000\n";
    testing::internal::CaptureStdout();
    box6.display();
    std::string outputstring_actual = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(outputstring_expected.c_str(), outputstring_actual.c_str());
}


int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}

