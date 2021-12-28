#include "q3.cpp"
#include <gtest/gtest.h>

TEST(Question3, First) {
	char str1[25]="pathetic";
	char str2[25]="the";

	ASSERT_TRUE(CheckSubSequence(str1, str2, strlen(str1), strlen(str2)));
//---------------------------------------------------------------------------
	char _str1[25]="PATHETIC";
	char _str2[25]="THE";

	ASSERT_TRUE(CheckSubSequence(_str1, _str2, strlen(_str1), strlen(_str2)));
//---------------------------------------------------------------------------

	char __str1[25]="pathetic";
	char __str2[25]="The";

	ASSERT_FALSE(CheckSubSequence(__str1, __str2, strlen(__str1), strlen(__str2)));
}


TEST(Question3, Second) {
	char str1[25]="pack";
	char str2[25]="cap";

	ASSERT_FALSE(CheckSubSequence(str1, str2, strlen(str1), strlen(str2)));
//---------------------------------------------------------------------------
}

//###########################################################################
//----- I M P O R T A N T : Realize that we seek sub SEQUENCE, not substring
TEST(Question3, Third) {
	char str1[25]="this is a random string";
	char str2[25]="ssrmng";

	ASSERT_TRUE(CheckSubSequence(str1, str2, strlen(str1), strlen(str2)));
//---------------------------------------------------------------------------
	char _str1[25]="this is a random string";
	char _str2[25]="gnirts";

	ASSERT_FALSE(CheckSubSequence(_str1, _str2, strlen(_str1), strlen(_str2)));
//---------------------------------------------------------------------------
	char __str1[35]="this is not a random strin";
	char __str2[25]="thisg";

	ASSERT_FALSE(CheckSubSequence(__str1, __str2, strlen(__str1), strlen(__str2)));
}


TEST(Question3, Fourth) {
	char str1[25]="yet another test";
	char str2[25]="";

	ASSERT_TRUE(CheckSubSequence(str1, str2, strlen(str1), strlen(str2)));
}


TEST(Question3, Last) {
	char str1[25]="final check";
	char str2[25]="final check";

	ASSERT_TRUE(CheckSubSequence(str1, str2, strlen(str1), strlen(str2)));
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
