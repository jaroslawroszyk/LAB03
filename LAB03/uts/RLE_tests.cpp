#include <gtest/gtest.h>
#include "RLE.h"

class LabTests : public ::testing::Test
{
protected:

    LabTests() { };

    ~LabTests() override { };
};

TEST_F(LabTests, foo)
{
    foo sut;
    EXPECT_EQ(sut.sum(2,2),4);
}