//swap two numbers including third
#include <iostream>>
using namespace std;
int main()
{
    int num1,num2,shift;
    cout<<"Enter first number";
    cin>>num1;
    cout<<"Enter second number";
    cin>>num2;
    shift = num1;
    num1 = num2;
    num2 = shift;
    cout<<endl<<"After swapping :";
    cout<<endl<<"First Number = "<<num1;
    cout<<endl<<"Second number = "<<num2;
}
