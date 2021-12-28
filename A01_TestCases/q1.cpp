#include<iostream>
#include<cstring>

using namespace std;

void ChangeLocation(char *Array, int b1, int b2);

int main()
{ 
	char arr[50];
	
	cout<<"Enter a String: ";
	cin.getline(arr, 50);
	
	int size=strlen(arr);
	
	int i1, i2;
	
	do
	{
		cout<<"Please enter first index (Starting from zero): ";
		cin>>i1;
	}
 	while (!(i1<=size&&i1>=0));
 	
 	do
	{
		cout<<"Please enter second index (Starting from zero): ";
		cin>>i2;
	}
 	while (!(i1<=size&&i1>=0&&i1!=i2));
	
	cout<<"\nString before swapping of Elements: "<<arr<<endl;
	ChangeLocation(arr, i1-1, i2-1);
	cout<<"\nString after swapping of Elements: "<<arr<<endl;
	
	return 0;     
}

void ChangeLocation(char *Array, int b1, int b2)
{   
	char temp;

	if(b1==b2)
	{
    	return;
   	}

	else
	{
		temp=Array[b1];
		Array[b1]=Array[b2];
		Array[b2]=temp;
		b1=b2;
		ChangeLocation(Array,b1,b2); 
	}
}

