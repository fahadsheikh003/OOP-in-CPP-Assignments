/*
void RotateArrays( int **m1 ,int **m2 ,int **m3,int s1 , int s2,int s3) {
	*****************NOTE: Consider the matrices to be square and all three can be of different sizes*******************

}

*/

#include "q7_5.cpp"
#include <gtest/gtest.h>

//-------------------Question7_5-----------------
TEST(Question7_5, First) {
	int ** m1 = new int*[2];// 2x2 matrix
	m1[0] = new int[2];
	m1[1] = new int[2];

	m1[0][0] = 10;	
	m1[0][1] = 10;	
	m1[1][0] = 11;	
	m1[1][1] = 11;	


	int ** m2 = new int*[3];// 3x3 matrix
	m2[0] = new int[3];
	m2[1] = new int[3];
	m2[2] = new int[3];

	m2[0][0] = 1;	
	m2[0][1] = 2;	
	m2[0][2] = 3;	
	m2[1][0] = 4;	
	m2[1][1] = 5;	
	m2[1][2] = 6;	
	m2[2][0] = 7;	
	m2[2][1] = 8;
	m2[2][2] = 9;

	int ** m3 = new int*[1];
	m3[0] = new int; // 1x1 matrix
	m3[0][0] = 10;	

	RotateArrays(m1,m2,m3,2,3,1);
	
	ASSERT_EQ(m3[0][0], 10);

	ASSERT_EQ(m1[0][0], 11);
	ASSERT_EQ(m1[0][1], 10);
	ASSERT_EQ(m1[1][0], 11);
	ASSERT_EQ(m1[1][1], 10);
	

	ASSERT_EQ(m2[0][0] , 7);	
	ASSERT_EQ(m2[0][1] , 4);	
	ASSERT_EQ(m2[0][2] , 1);	
	ASSERT_EQ(m2[1][0] , 8);	
	ASSERT_EQ(m2[1][1] , 5);	
	ASSERT_EQ(m2[1][2] , 2);	
	ASSERT_EQ(m2[2][0] , 9);	
	ASSERT_EQ(m2[2][1] , 6);
	ASSERT_EQ(m2[2][2] , 3);

}

int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}