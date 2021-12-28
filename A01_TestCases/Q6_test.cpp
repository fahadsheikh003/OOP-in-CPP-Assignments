/* 
int EvenSum(int ** array, int r,int l){
	
}
int OddSum(int ** array,int r,int l){
	
}
*/

#include "q6.cpp"
#include <gtest/gtest.h>

//--------------Q6_EvenSum------------
TEST(Question6,EvenSum){
	int ** m1 = new int*[2];// 2x2 matrix
	m1[0] = new int[2];
	m1[1] = new int[2];

	m1[0][0] = 11;	
	m1[0][1] = 10;	
	m1[1][0] = 11;	
	m1[1][1] = 10;	

	int sum = EvenSum(m1,2,2);
	ASSERT_EQ(sum,20);

}

TEST(Question6,EvenOddSum){
	int ** m1 = new int*[3];// 3x3 matrix
	m1[0] = new int[3];
	m1[1] = new int[3];
	m1[2] = new int[3];

	m1[0][0] = 1;	
	m1[0][1] = 2;	
	m1[0][2] = 3;	
	m1[1][0] = 4;	
	m1[1][1] = 5;	
	m1[1][2] = 6;	
	m1[2][0] = 7;	
	m1[2][1] = 8;
	m1[2][2] = 9;



	int even_sum = EvenSum(m1,3,3);
	int odd_sum = OddSum(m1,3,3);
	ASSERT_EQ(even_sum,20);
	ASSERT_EQ(odd_sum,25);

}

TEST(Question6,EvenOddSum2){
	int ** m1 = new int*[3];// 3x2 matrix
	m1[0] = new int[2];
	m1[1] = new int[2];
	m1[2] = new int[2];

	m1[0][0] = 45;	
	m1[0][1] = 67;	
	m1[1][0] = 34;	
	m1[1][1] = 59;	
	m1[2][0] = 70;	
	m1[2][1] = 82;



	int even_sum = EvenSum(m1,3,2);
	int odd_sum = OddSum(m1,3,2);
	ASSERT_EQ(even_sum,186);
	ASSERT_EQ(odd_sum,171);

}



int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}