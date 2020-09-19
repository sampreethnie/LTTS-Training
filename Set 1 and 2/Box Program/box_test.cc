#include "box.h"
#include <gtest/gtest.h>

TEST(Box,DefaultConstructor) {
    Box a1;
    EXPECT_EQ(0,a1.getlength());
    EXPECT_EQ(0,a1.getbreadth());
    EXPECT_EQ(0,a1.getheight());
     EXPECT_EQ(0,a1.volume());

}
TEST(Box,ParameterizedConstructor) {
    Box a1(10,20,30);

    EXPECT_EQ(10,a1.getlength());
    EXPECT_EQ(20,a1.getbreadth());

    EXPECT_EQ(30,a1.getheight());


}
TEST(Box,CopyConstructor) {
    Box a1(10,20,30);
    Box a2(a1);
    EXPECT_EQ(10,a2.getlength());

    EXPECT_EQ(20,a2.getbreadth());
    EXPECT_EQ(30,a2.getheight());


}
TEST(Box,VolumeTest) {
    Box a1(10,20,30);

    EXPECT_EQ(6000.0,a1.volume());

}


TEST(Box,DisplayTest) {
    Box a1(10,20,30);
    std::string ExpectedOut="10,20,30\n";
    testing::internal::CaptureStdout();
    a1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}





