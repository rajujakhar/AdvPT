#include<iostream>
#include "Matrix.h"
using namespace std;


int main()
	{
	
    //Matrix m1(4,3,0.5);
    Matrix<int> m1(2,2,0);
    //m1.displayMatrix();


    Matrix<int> m2(2,2,0);

   m1(0,0) = 1;
   m1(0,1) = 2;
   m1(1,0) = 3;
   m1(1,1) = 1;

   m2(0,0) = 4;
   m2(0,1) = 5;
   m2(1,0) = 2;
   m2(1,1) = 3;

    /*m1 -= m2;
    m1.displayMatrix();
    */

    bool isEqual = (m1 == m2);
    cout<<"m1 and m2 are Equal?:  " << isEqual <<endl;


   // Matrix Multiplication
    //Matrix m3 = m1;
    Matrix<int> prod ( m1*m2 );
    //m1 =  m1*m2;
    prod.displayMatrix();
    

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

