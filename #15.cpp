// Example program
#include<iostream>
using namespace std;
int main()
{
    int i,a=0,val;
    float mark, sum=0, avg;
    cout<<"1. Bio";
    cout<<"\n2. Math\n\n";
    cout<<"Enter Subject Selection Number:\n";
    cin>>val;
    for(i=0; i<3; i++)
    {
        a++;
        cout<<"Enter Marks Subject "<<a<<": \n";
        cin>>mark;
        sum = sum+mark;
    }
    cout<<"Total Marks :"<<sum;
    avg = sum/3;
    cout<<"\nGrade = ";
    if(avg>=75)
        cout<<"A";
    else if(avg>=65)
        cout<<"B";
    else if(avg>=55)
        cout<<"C";
    else if(avg>=35)
        cout<<"s";
    else
        cout<<"F";
    cout<<"\nSubject :";
    if (val<2)
        cout<<" Bio";
    else
        cout<<" Math";
    cout<<endl;
    return 0;
    
}