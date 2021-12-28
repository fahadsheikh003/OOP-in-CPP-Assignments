#include "q1.cpp"
#include <gtest/gtest.h>

TEST(Question1, First) {
	char a1[25]="Hello World";
	ChangeLocation(a1, 9, 7);
	ASSERT_EQ(a1[0], 'H');
	ASSERT_EQ(a1[1], 'e');
	ASSERT_EQ(a1[2], 'l');
	ASSERT_EQ(a1[3], 'l');
	ASSERT_EQ(a1[4], 'o');
	ASSERT_EQ(a1[5], ' ');
	ASSERT_EQ(a1[6], 'r');
	ASSERT_EQ(a1[7], 'o');
	ASSERT_EQ(a1[8], 'W');
	ASSERT_EQ(a1[9], 'l');
	ASSERT_EQ(a1[10], 'd');
}

TEST(Question1, Second) {
	char a2[25]="Test String";
	ChangeLocation(a2,11, 2);
	ASSERT_STREQ(a2,"Tgst Strine");
}

TEST(Question1, Third) {
	char a3[25]="PAKISTAN";
	ChangeLocation(a3,3,7 );
	ASSERT_STREQ(a3, "PAAISTKN");
}

TEST(Question1, Fourth) {
	char a4[25]="Extra test";
	ChangeLocation(a4,6,7 );
	ASSERT_STREQ(a4, "Extrat est");
}

TEST(Question1, Fifth) {
	char a5[25]="Final";
	ChangeLocation(a5,3,3 );
	ASSERT_STREQ(a5, "Final");
}

int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
