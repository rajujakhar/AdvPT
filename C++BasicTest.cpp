#include<iostream>
#include<typeinfo>
#include<cmath>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	/*double Double = 2.3336766;
	cout<<"double is: " << Double<<endl;

	//bool c7atch-22;
	char _='s';
	cout<< _ <<endl;

	float s = '\t';
	cout<<" s is : " <<s <<" ok "<< endl;
	cout<<" s is : " << endl;

	int i = 100, sum = 0;
	for( int i = 0; i != 10; ++i )
	{
	cout<<"i is: "<<i<<endl;
    sum += i;
	}

	std::cout << " i: " << i << std::endl;
	std::cout << "sum: " << sum << std::endl;*/

	unsigned int i= -1;
	int a =  i; 
	cout<<"i is: " << i <<endl;
	cout<<"a is: "<<a<<endl;
	cout<<" log(i) is : " << log2(i)<< endl; 
	cout<<" pow(2,32) : " << pow(2,32) << endl;
	const unsigned int length1 = 10U, length2 = 12U;
	unsigned int sum = 0U;
	for( unsigned int i = 0U; i < length1-length2; ++i )
    sum += i;
	std::cout << "sum: " << sum << std::endl;



}