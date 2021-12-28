/* 
int Count_Inversion(int ** array, int row,int col){
	**********RETURNS THE COUNT OF INVERSIONS FOUND IN ARRAY************
}

*/

#include "q5.cpp"
#include <gtest/gtest.h>

//--------------Q5_iNVERSION------------
TEST(Question5,Inversion){
	int ** m1 = new int*[2];// 2x2 matrix
	m1[0] = new int[2];
	m1[1] = new int[2];

	m1[0][0] = 2;	
	m1[0][1] = 5;	
	m1[1][0] = 3;	
	m1[1][1] = 6;	

	int count = Count_Inversion(m1,2,2);
	ASSERT_EQ(count,1);

}
TEST(Question5,Inversion2){
	int ** m1 = new int*[4];// 4x4 matrix
	m1[0] = new int[4];
	m1[1] = new int[4];
	m1[2] = new int[4];
	m1[3] = new int[4];

	m1[0][0] = 2;	
	m1[0][1] = 9;	
	m1[0][2] = 7;	
	m1[0][3] = 0;	
	m1[1][0] = 3;	
	m1[1][1] = 10;	
	m1[1][2] = 11;	
	m1[1][3] = 7;	
	m1[2][0] = 3;	
	m1[2][1] = 4;
	m1[2][2] = 15;
	m1[2][3] = 2;
	m1[3][0] = 3;	
	m1[3][1] = 4;
	m1[3][2] = 1;
	m1[3][3] = 2;


	int count = Count_Inversion(m1,4,4);
	ASSERT_EQ(count,5);

}
TEST(Question5,Inversion3){
	int ** m1 = new int*[3];// 3x3 matrix
	m1[0] = new int[3];
	m1[1] = new int[3];
	m1[2] = new int[3];

	m1[0][0] = 9;	
	m1[0][1] = 8;	
	m1[0][2] = 7;	
	m1[1][0] = 6;	
	m1[1][1] = 5;	
	m1[1][2] = 4;	
	m1[2][0] = 3;	
	m1[2][1] = 2;
	m1[2][2] = 1;




	
	int count = Count_Inversion(m1,3,3);
	ASSERT_EQ(count,3);
}


int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}