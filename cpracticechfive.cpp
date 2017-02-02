// File Name: Star Grid
// Written by: Patrick Dempsey
// Description: This program will create a grid of stars 
// the size of the number entered
// Challenges: None
// Time Spent: 15 mins

#include <iostream>
using namespace std;
int main ( ) { 

int count;
int linecount;
int n;

cout<<"Enter how many rows and colums";
cin>>n;

	while(linecount<=n)
	{
		count=1;
	
		while(count<=n)
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


