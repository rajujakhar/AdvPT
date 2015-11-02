#include<iostream>
using std::cout;
using std::cin;
using std::endl;


int main()
{
	double first,second,sum=0;
	cout<<"\nPlease enter two numbers\n";
	cin>>first>>second;

	for(int i=first; i<second; ++i)
	{
		sum += i;	
	}

	cout<<"Sum of numbers between "<<first<<" and " <<second <<" is: "<<sum<<endl;

}