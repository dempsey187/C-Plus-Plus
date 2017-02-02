// File Name:
// Written by: Patrick Dempsey
// Description: This program will calculate the amount a loan will cost after an annual interest is added.
// Time Spent: 1 hour

#include <cmath>
#include <iostream>

using namespace std;
int main ( )
{ 

double years;
double rate;
double prin;
double total;
double mon;

int yearcount;

cout<<"Enter how many years."<<endl;
cin>>years;
cout<<"Enter the interest rate."<<endl;
cin>>rate;
cout<<"Enter the pricipal."<<endl;
cin>>prin;

rate=rate/100;

	for(yearcount=1;yearcount<=years;yearcount++)
	
	{
		
		mon=prin*pow(1 +(rate/12),12);
		
		total=mon;
		
		cout<<"Year "<<yearcount<<" "<<"Balance="<<total<<endl;
    	
		prin=total;
    	
	}	
			
	system("pause");                     
    return 0;
}
