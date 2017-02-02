// File Name:Assignment 5 Linear Functions
// Written by:Patrick Dempsey
// Description:This program finds the slope and Y intercept of a line when given two points.
// Challenges: The program was the most complex yet but once I got it running I had no logic errors.
// Time Spent: A While
// Given Input: (3 sets)         Expected Output: (3 corresponding sets)
// --------------------          -------------------------
// 1)(12,23)(45,56)				y=1x+11
// 2)(2,14)(3,16)				y=2x+10
// 3)(24,12)(34,45)				Y=3.3X+67.2
// Revision History
// Date:        Revised By:     Action:
// ------------------------------------------------------------------
// 11/3/15   P.D. 			I began to write the code.
//11/11/15	P.D. 			I finished the code.

#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;
void linear(double x1, double x2, double y1, double y2, double& slope, double& b);

int main ( ) { 

double x1, x2, y1, y2;
double slope, b; // y intercept 
char cont; 
char Y,y,N,n;
int count=1;

 while(count<=1)
	{
	int samepoint=1;
	int vertical=1;
	
	cout<<"Please enter the x value of the first point then the y value."<<endl;
	cin>>x1;
	cin>>y1;
	cout<<endl;
	cout<<"Please enter the x value of the second point followed by the y value."<<endl;
	cin>>x2;
	cin>>y2;
	cout<<endl;
   		
			if (x1==x2 && y1==y2) 
			{
			cout<<"You have the same point twice.";
			//samepoint++;
			}
							
			else if (x1==x2)
			{
			cout<<"You entered a vertical line X="<<x1<<endl;	
			//samepoint++;
			}
			
			else if(samepoint<=1)
			{
			linear(x1, x2, y1, y2, slope, b);
			cout<<"Your linear equation is"<<endl
			<<"y="<<slope<<"x"<<"+"<<b<<endl;
			//samepoint++;
			}
		
	cout<<"Do you want to contiune? Enter Y for yes and N for no. ";
	cin>>cont;
	cout<<endl;
    
		if ((cont=='y' ) || (cont=='Y'))
  			{
			   count=0;
			}
		
		else ((cont=='n' )|| (cont=='N'));
			{
				count++;
			}
		
	}   

   system("pause");                     
   return 0;
}

void linear(double x1, double x2, double y1, double y2, double& slope, double& b)
	{
	double rise, run;
	double z;
	
	rise=y2-y1;
	run=x2-x1;
	slope=rise/run;
	z=slope*x1;
	b=y1-z;
	return;
	
	}
