//********************************************************************************

// File Name: Stars
// Written by: Patrick Dempsey
// Description: This program will print out a grind of stars with the given dimesions

//********************************************************************************

#include <iostream>
using namespace std;

int main ( )
{ 

int count, linecount, height, width = 0;

cout << " Please enter how tall you want the grid of stars to be" << endl;
cin >> height;

cout << "Please enter how wide you want the grid of stars to be" << endl;
cin >> width;

	while(linecount<=height)
	{
	count=1;
		while(count<=width)
		{
		cout<<" * ";
		count++;
		}
	
	linecount++;
	cout<<endl;
	}
	
	system("pause");                     
    return 0;
}

