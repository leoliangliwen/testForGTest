#include "sample.h"
#include "gtest/gtest.h"

// need to add the following class into main
class FooEnvironment : public testing::Environment
{
    public:
        virtual void SetUp() {
            std::cout << "SetUP" << std::endl;
        }

        virtual void TearDown() {
            std::cout << "TearDown" << std::endl;
        }
};

class FooTest : public testing::Test {
    protected:
        static void SetUpTestCase() {
            std::cout << "SetUpTestCase" << std::endl;
        }

        static void TearDownTestCase() {
            std::cout << "TearDownTestCase" << std::endl;
        }

        virtual void SetUp() {
            std::cout << "SetUp" << std::endl;
        }

        virtual void TearDown() {
            std::cout << "TearDown" << std::endl;
        }
};

// Tests factorial of negative numbers.
TEST_F(FooTest, Negative) {
    EXPECT_EQ(1, Factorial(-5)) << "1";
    EXPECT_EQ(1, Factorial(-1)) << "2";
    EXPECT_GT(Factorial(-10), 0) << "3";
}

// Tests factorial of 0.
TEST_F(FooTest, Zero) {
    EXPECT_THROW(Factorial(0), int);
}

// Tests factorial of positive numbers.
TEST(FactorialTest, Positive) {
    EXPECT_EQ(1, Factorial(1));
    EXPECT_EQ(2, Factorial(2));
    EXPECT_EQ(6, Factorial(3));
    EXPECT_EQ(40320, Factorial(8));
}
