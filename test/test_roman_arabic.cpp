#include "roman.h"

#include <gtest.h>

TEST(roman, can_create_roman)
{
	ASSERT_NO_THROW(roman num{ "III" });
}

TEST(roman, can_create_arabic)
{
	ASSERT_NO_THROW(arabic num{ 123 });
}



TEST(roman, toArabic_9)
{
	roman num1{ "IX" };
	converter conv;

	EXPECT_EQ(9, conv.toArabic(num1).value);
}

TEST(roman, toArabic_11)
{
	roman num1{ "XII" };
	converter conv;

	EXPECT_EQ(12, conv.toArabic(num1).value);
}

TEST(roman, toArabic_19)
{
	roman num1{ "XIX" };
	converter conv;

	EXPECT_EQ(19, conv.toArabic(num1).value);
}



TEST(roman, toRoman_3)
{
	arabic num{ 3 };
	converter conv;

	EXPECT_EQ("III", conv.toRoman(num).value);
}


TEST(roman, toRoman_2694)
{
	arabic num{ 2557 };
	converter conv;

	EXPECT_EQ("MMDLVII", conv.toRoman(num).value);
}

TEST(roman, check_true)
{
	roman num{ "VIII" };
	converter conv;

	EXPECT_EQ(true, conv.check(num));
}

TEST(roman, check_false)
{
	roman num{ "IIIIIII" };
	converter conv;

	EXPECT_EQ(false, conv.check(num));
	EXPECT_EQ("VII", num.value);
}
