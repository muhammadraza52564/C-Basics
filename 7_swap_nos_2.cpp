//swap two numbers not including Third number
#include <iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter 1st number ";
    cin>>num1;
    cout<<endl<<"Enter 2nd number ";
    cin>>num2;
    num1 = num2+num1;
    num2 = num1-num2;
    num1 = num1-num2;
    cout<<endl<<"After swapping : "<<endl;
    cout<<"First number = "<<num1<<endl;
    cout<<"Second number = "<<num2<<endl;
    return 0;
}

