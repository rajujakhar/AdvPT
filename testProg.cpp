#include<iostream>
#include "Matrix.h"
using namespace std;


int main()
	{
	
    //Matrix m1(4,3,0.5);
    Matrix<double> m1(2,3,1.8);
    //m1.displayMatrix();


    Matrix<double> m2(2,3,1.8);

    /*m1 -= m2;
    m1.displayMatrix();
    */

    bool isEqual = (m1 == m2);
    cout<<"m1 and m2 are Equal?:  " << isEqual <<endl;


   // Matrix Multiplication
    //Matrix m3 = m1;
    m1 += m2;
    m1.displayMatrix();
    

    /*
    *= Check
    */
    //m1 = m1*m2;


    // Equality Check
    isEqual = (m1 == m2);
    cout<<"m1 and m2 are Equal?:  " << isEqual <<endl;

    bool isNotEqual = (m1 != m2);
    cout<<"m1 and m2 are NOT Equal?:  " << isNotEqual <<endl;


    //m1.displayMatrix();






    //m2 = m1 - m3;

    //cout<<"Display of m1";
    //m1.displayMatrix();



    
	
	}

