#include "complex.h"
#include <gtest/gtest.h>

TEST(Complex,DefaultConstructor) {
    Complex a1;
    EXPECT_EQ(0,a1.getreal());
    EXPECT_EQ(0,a1.getimag());


}




TEST(Complex,DisplayTest) {
    Complex a1(10,20);
    std::string ExpectedOut="10,20\n";
    testing::internal::CaptureStdout();
    a1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
