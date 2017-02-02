// File Name:Assignment 4.1
// Written by:Patrick Dempsey
// Description:This program converts a hex number into a decimal and an octal number.
// Revision History
// Date:        Revised By:     Action:
// ------------------------------------------------------------------
// 10/28/15   PD   fixed bugs

#include <iomanip>
#include <cmath>
#include <iostream>

using namespace std;

int main ( )
{ 
	int num1,num2;
	int count;
	int diff;

	cout<<"Please enter a hex number."<<endl;
	cin>>hex>>num1;
	cout<<"Please enter another hex number."<<endl;
	cin>>hex>>num2;	
		
	cout<<"Decimal	Octal	Hexidecimal"<<endl
	<<"****************************"<<endl;
	
	diff=num2-num1;
	
	if(diff<=-1)	
		{
		diff=diff*-1;
		}
			
	while(count<=diff)		
		{
		cout<<dec<<num1<<"	"<<std::setw(3)<<setfill('0')<<oct<<num1<<"	0x"<<hex<<num1<<endl;		
		num1++;
		count++;
		}		
		
	system("pause");                     
    return 0;
}
