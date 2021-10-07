#include<iostream>
using namespace std;
int Max(int num1, int num2){
	int result;
	if(num1>num2)
	result=num1;
	else 
	result=num2;
	return result;
}
int main()
{
	int i,j;
	cout<<"Enter the num1 :";
	cin>>i;
	cout<<"Enter the num2 :";
	cin>>j;
	cout<<"The Max Number is :"<<Max(i,j);
	return 0;
}
