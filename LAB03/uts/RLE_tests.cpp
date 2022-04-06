#include <gtest/gtest.h>
#include "RLE.h"
#include <vector>

using namespace Task2;
class RleTests : public ::testing::Test
{
protected:

    RleTests() = default;

    ~RleTests() override = default;
};

static Rle sut;
template <typename... Inputs>
auto print_inputs(Inputs const&... inputs) {
    for(auto const& input : {inputs...}) {
        for(auto const& el : input) std::cout << static_cast<int>(el);
    }
}

TEST_F(RleTests, TestsWithDiffrentInput)
{
    auto input1 = sut.RLE("!AB*");
    auto input2 = sut.RLE("!BA$69");
    auto input3 = sut.RLE("ABC");

    for(auto &el : input1)
    {
        std::cout << static_cast<int>(el);
    }
    std::cout << std::endl;
    for(auto &el : input2)
    {
        std::cout << static_cast<int>(el);
    }
    std::cout << std::endl;
    for(auto &el : input3)
    {
        std::cout << static_cast<int>(el);
    }
}