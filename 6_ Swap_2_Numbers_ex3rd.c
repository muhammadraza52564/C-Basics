
#include <iostream>>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter 1st number "<<endl;
    cin>>num1;
    cout<<"Enter 2nd number "<<endl;
    cin>>num2;
    num1 = num2+num1;
    num2 = num1-num2;
    num1 = num1-num2;
    cout<<"After swapping : "<<endl;
    cout<<"First number = "<<num1<<endl;
    cout<<"Second number = "<<num2<<endl;

}
