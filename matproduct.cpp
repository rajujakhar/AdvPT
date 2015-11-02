#include<iostream>
#include "Matrix.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	int s1,s2,s3;
	string type="int";
	cout<<"Please enter the three numbers s1, s2, s3" << endl;
	cin>> s1 >> s2 >> s3;

	cout<<"Please enter data type of string elements" << endl;
	cin>>type;

	//type = "int";
	Matrix< int > m1(s1,s2,1);
	Matrix< int > m2(s2,s3,1);

	m1 = m1*m2;
	m1.displayMatrix();


}