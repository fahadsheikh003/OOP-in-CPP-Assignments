/* 
bool CheckEqualSumArrays(int ** m1, int ** m2,int ** m3,int r_size,int c_size){
	**********ASSUMING THAT ALL ARRAYS ARE OF SAME SIZE, VALIDATE BEFORE SENDING IN FUNCTION***********
}

*/

#include "q7_1.cpp"
#include <gtest/gtest.h>

//--------------Q7_Check Equal Sum Arrays ------------
TEST(Question7_1,CheckEqualSum){

	int ** m1 = new int*[5];// 5x5 matrix
	int ** m2 = new int*[5];
	int ** m3 = new int*[5];
	for (int i =0;i<5;i++){
		m1[i] = new int[5];
		m2[i] = new int[5];
		m3[i] = new int[5];
	}
	int counter = 1;

	for(int i =0;i<5;i++){
		for (int j=0;j<5;j++){
			m1[i][j] = m2[i][j] = counter;
			m3[i][j] = 2*counter;
			counter++;
		}
	}
	
	bool check = CheckEqualSumArrays(m1,m2,m3,5,5);
	ASSERT_TRUE(check);

}

TEST(Question7_1,CheckEqualSum2){

	int ** m1 = new int*[3];// 3x2 matrix
	int ** m2 = new int*[3];
	int ** m3 = new int*[3];
	for (int i =0;i<3;i++){
		m1[i] = new int[2];
		m2[i] = new int[2];
		m3[i] = new int[2];
	}
	int counter = 10;

	for(int i =0;i<3;i++){
		for (int j=0;j<2;j++){
			m1[i][j]  = counter;
			m3[i][j] = m2[i][j] = 2*counter;
			counter--;
		}
	}
	
	bool check = CheckEqualSumArrays(m1,m2,m3,3,2);
	ASSERT_FALSE(check);

}




int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}