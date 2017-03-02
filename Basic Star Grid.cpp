// File Name: Stars
// Written by:Patrick Dempsey
// Description: Creates a star grid by given user input
// Challenges: None
// Time Spent: 20 mins

#include <iostream>
using namespace std;
int main ( ) 
{ 

int count;
int linecount;
int rows;
int colums;

cout<<"Enter how many rows"<<endl;
cin>>rows;
cout<<"Enter how many coulms"<<endl;
cin>>colums;

	while(linecount<=colums)
	{
	count=1;
	
		while(count<=rows)
		{
		cout<<"* ";
		count++;
		}
	
	linecount++;
	cout<<endl;
	}
	
	system("pause");                     
    return 0;
}


