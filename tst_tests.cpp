#include <gtest/gtest.h>

using namespace testing;

TEST(Tests, TestReproCout)
{
    std::cout << "This is a message not ending in newline";
    EXPECT_EQ(1, 1);
}

TEST(Tests, TestNoReproCoutNewline)
{
    std::cout << "This is a message ending in newline\n";
    EXPECT_EQ(1, 1);
}

TEST(Tests, TestNoReproCerr)
{
    std::cerr << "This is a message not ending in newline to cerr";
    EXPECT_EQ(1, 1);
}
