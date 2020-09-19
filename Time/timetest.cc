#include "time.h"
#include <gtest/gtest.h>

TEST(Mytime,DisplayTest) {
    Mytime a1(10,20,30);
    std::string ExpectedOut=" Hours: 10Minutes: 20Seconds: 30";
    testing::internal::CaptureStdout();
    a1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
