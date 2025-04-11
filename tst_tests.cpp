#include <gtest/gtest.h>

using namespace testing;

TEST(Tests, TestRepro)
{
    std::cout << "This is a message";
    EXPECT_EQ(1, 1);
}

TEST(Tests, TestNoRepro)
{
    std::cout << "This is a message\n";
    EXPECT_EQ(1, 1);
}
