#include "q4.cpp"
#include <gtest/gtest.h>

/*	================ I M P O R T A N T ================	 */

// For the test cases to succeed, your function must return
//		a list of occurrences sorted in descending order.

/*	===================================================	 */


TEST(Question4, First) {
	int a[5]={1,2,3,4,5};
	int *b=FindOccurances(a, 5);
	ASSERT_EQ(b[0], 1);
	ASSERT_EQ(b[1], 1);
	ASSERT_EQ(b[2], 1);
	ASSERT_EQ(b[3], 1);
	ASSERT_EQ(b[4], 1);
}

TEST(Question4, Second) {
	int a[11]={1,1,2,3,4,5,0,4,1,5,6};
	int *b=FindOccurances(a, 11);
	ASSERT_EQ(b[0], 3);//3 ones
	ASSERT_EQ(b[1], 2);//2 fourse
	ASSERT_EQ(b[2], 2);//2 fives
	ASSERT_EQ(b[3], 1);//1 zero
	ASSERT_EQ(b[4], 1);//1 two
	ASSERT_EQ(b[5], 1);//1 three
	ASSERT_EQ(b[5], 1);//1 six
}


TEST(Question4, Third) {
	int a[7]={2,4,1,5,6,4,2};
	int *b=FindOccurances(a, 7);
	ASSERT_EQ(b[0], 2);
	ASSERT_EQ(b[1], 2);
	ASSERT_EQ(b[2], 1);
	ASSERT_EQ(b[3], 1);
	ASSERT_EQ(b[4], 1);
}


TEST(Question4, Fourth) {
	int a[12]={2,4,-1,1,6,-1,-1,1,1,-1,1,5};
	int *b=FindOccurances(a, 12);
	ASSERT_EQ(b[0], 4);
	ASSERT_EQ(b[1], 4);
	ASSERT_EQ(b[2], 1);
	ASSERT_EQ(b[3], 1);
	ASSERT_EQ(b[4], 1);
	ASSERT_EQ(b[5], 1);
}


TEST(Question4, Last) {
	int a[7]={2,4,3,0,2,3,4};
	int *b=FindOccurances(a, 7);
	ASSERT_EQ(b[0], 2);
	ASSERT_EQ(b[1], 2);
	ASSERT_EQ(b[3], 1);

}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
