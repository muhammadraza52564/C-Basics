//C++ Program to Find Quotient and Remainder
#include<iostream>
using namespace std;
int main()
{
    int num1,num2,quotient,remainder;
    cout<<"Enter 1st number ";
    cin>>num1;
    cout<<"Enter 2nd number ";
    cin>>num2;
    remainder = num1 % num2;
    cout<<"Remainder = "<<remainder;
}
