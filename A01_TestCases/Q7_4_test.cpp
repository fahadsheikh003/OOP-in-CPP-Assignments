/* 
int FindSameRows(int ** m1, int ** m2,int ** m3,int r_size,int c_size){
	


	**************IMPORTANT******** Returns count of rows found same in arrays. Note the order of rows can be different.
}

*/

#include "q7_4.cpp"
#include <gtest/gtest.h>

//--------------Q7_4_Count Same Row of Arrays ------------
TEST(Question7_4,FindSameRows){
	

	int ** m1 = new int*[6];// 6x4 matrix
	int ** m2 = new int*[6];
	int ** m3 = new int*[6];
	for (int i =0;i<6;i++){
		m1[i] = new int[4];
		m2[i] = new int[4];
		m3[i] = new int[4];
	}
	int counter = 2;

	for(int i =0;i<6;i++){
		for (int j=0;j<4;j++){
			m1[i][j] = counter;
			m2[i][j] = 2 * counter;
			m3[i][j] = 3 * counter;
			counter++;
		}
	}

	counter = 1;
	for (int j=0;j<4;j++){
			m1[1][j] = m2[2][j] = m3[3][j] = m1[3][j] = m2[0][j] = m3[1][j] = counter ;
	}

	
	int count = FindSameRows(m1,m2,m3,6,4);
	ASSERT_EQ(count,6);

}




int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}