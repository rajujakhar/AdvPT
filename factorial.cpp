#include<iostream>
using std::cout;
using std::cin;
using std::endl;

long long fact(int num)
{
	long long factVal = 1;
	if(num == 0)
		return 1;

	for(int i = 1 ; i <= num; ++i)
		{
			factVal *= i;
		}

	return factVal;	
}

int main()
{

int number;
cout<<"Please enter the number\n";
cin>>number;

if(number >=0)
cout<<number<<"! : "<<fact(number)<<endl;
else
cout<<"wrong input: factorial of negative number is not defined, please enter positive number\n ";




}