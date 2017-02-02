// File Name:Assignment 3.1 Grades
// Written by:Patrick Dempsey
// Description:This program will display a grade in terms of GPA and letter grade when
//percent is entered.
// Challenges: I had to reverse the orignial order of the statements as well as
//set precision.
// Time Spent:1 hour
// Given Input: (3 sets)         Expected Output: (3 corresponding sets)
// --------------------          -------------------------
// 1)76.5						Percentage: 76.50% Grade: C Points: 2.00
// 2)99.99						Percentage: 99.99% Grade: A Points: 4.00
// 3)27.7						Percentage: 27.70% Grade: F Points: 0.00
// Revision History
// Date:        Revised By:     Action:
// -----------------------------------------------------------
// 10/9/15    P.D.  Wrote it and fixed errors.
//10/11/15	P.D.  Set the Precision.
#include<iomanip> 
#include <iostream>

using namespace std;

int main ( ) { 

		double per;
	
	cout<<"Please enter your grade rounded to the nearest hundreth."<<endl;
	
	cin>> per;

  	 	if (per<0)
  			cout<<"ERORR INVALID INPUT"<<endl;
  		
  		else if(per<=59.4)
  			cout<<"Percentage: "<<setiosflags(ios::fixed)<<setprecision(2)<< per
				<<"% "<<"Grade: F Points: 0.00"<<endl;
  	
  		else if(per<=69.4)
  			cout<<"Percentage: "<<setiosflags(ios::fixed)<<setprecision(2)<<per
				<<"% "<<"Grade: D Points: 1.00"<<endl;
  		
  		else if(per<=79.4) 
  			cout<<"Percentage: "<<setiosflags(ios::fixed)<<setprecision(2)<<per
				<<"% "<<"Grade: C Points: 2.00"<<endl;
  		
  		else if (per<=89.4)
  			cout<<"Percentage: "<<setiosflags(ios::fixed)<<setprecision(2)<<per
			  <<"% "<<"Grade: B Points: 3.00"<<endl;
  		
  		else if (per<=100)
  			cout<<"Percentage: "<<setiosflags(ios::fixed)<<setprecision(2)<<per
			  <<"% "<<"Grade: A Points: 4.00"<<endl;
  		
  		else if (per>100)
			cout<<"Invalid Input"<<endl;
  	
    
	system("pause");                     
    return 0;
}
