#include<iostream>
using namespace std;

int main()
{
    int a,b,op,sum, sub, multiply, div;
    cout<<"Enter 1 first number:";
    cin>>a;
    cout<<endl<<"Enter 2 second number:";
    cin>>b;
    cout<<"which operation do you want for: sum 1, sub 2, multiply 3, div 4"<<endl;
    cin>>op;
    if(op==1)
    {
        sum=a+b;
        cout<<sum;
    }
    else if(op==2)
    {
        sub=a-b;
        cout<<sub;
    }
    else if(op==3)
    {
        multiply=a*b;
        cout<<multiply;
    }
    else if(op==4)
    {
        div=a/b;
        cout<<div;
    }
    else
    {
        cout<<"Invalid Operation";
    }
}
