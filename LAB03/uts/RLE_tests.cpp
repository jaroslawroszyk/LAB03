#include <gtest/gtest.h>
#include "RLE.h"

class RleTests : public ::testing::Test
{
protected:

    RleTests() = default;

    ~RleTests() override = default;
};

TEST_F(RleTests, foo)
{

}

class RleTestsTestsParameterizedTestFixture : public ::testing::TestWithParam<std::tuple<std::string>>
{};

TEST_P(RleTestsTestsParameterizedTestFixture,IsCorrectConversionForCaesarCipher)
{
    auto str = std::get<0>(GetParam());
    auto key = std::get<1>(GetParam());
    auto output = std::get<2>(GetParam());
    EXPECT_EQ(output,sut.decodeChiper(str,key));
}

INSTANTIATE_TEST_SUITE_P(
        RleTestsTestsParameterizedTest,
        RleTestsTestsParameterizedTestFixture,
        ::testing::Values(
                std::make_tuple("PTE EP SSLP","PIES","ALA MA KOTA"),
                std::make_tuple("OWT VA KXMMEFXGF","SESJA","WSB MA STUDENTOW"),
                std::make_tuple("LTHVTB RGDIGPOXHVP","CPP","JESTEM PROGRAMISTA"),
                std::make_tuple("GMS","KURCZAK","WSB"),
                std::make_tuple("SF MDL KPEBP ACXE","PRO","DO YOU WANNA JOIN")));