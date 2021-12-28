
/*
void countingUniqueWords(char *string, char **&uwords, int &size){
	
}

*/

#include "q8.cpp"
#include <gtest/gtest.h>

//-------------------Question2_3-----------------
TEST(Question8, First) {
   
	char* s1=(char*)"This is a test String \nThis is a New Line";
	char** uwords1;
	int size1;
	countingUniqueWords(s1,uwords1,size1);
	/* arr and uword should contain the following. 
	i-e Split the words on the basis of space and '\n'
	Index 0 of uwords should contain "This" ;
	Index 1 of uwords should contain "is" 
	Index 2 of uwords should contain "a" 
	Index 3 of uwords should contain "test" 
	Index 4 of uwords should contain "String" ;
	Index 5 of uwords should contain "New" 
	and so on
	*/
	ASSERT_EQ(7,size1);

	ASSERT_EQ('T',uwords1[0][0]);
	ASSERT_EQ('s',uwords1[0][3]);
	ASSERT_EQ('i',uwords1[1][0]);
	ASSERT_EQ('a',uwords1[2][0]);
	ASSERT_EQ('s',uwords1[3][2]);
	ASSERT_EQ('N',uwords1[5][0]);

}


TEST(Question8, second) {
   
	char* s=(char*)"Hello World";
	int* arr;
	int size;
	char** uwords;
	countingUniqueWords(s,uwords,size);
	/* arr and uword should contain the following. 
	i-e Split the words on the basis of space and '\n'
	Index 0 of uwords should contain "Hello" 
	Index 1 of uwords should contain "World" 
	and so on
	*/

	ASSERT_EQ(2,size);

	ASSERT_EQ('H',uwords[0][0]);
	ASSERT_EQ('l',uwords[0][3]);
	ASSERT_EQ('W',uwords[1][0]);
	ASSERT_EQ('o',uwords[1][1]);

}

int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}