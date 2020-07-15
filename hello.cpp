#include<iostream>
#include<stdio.h>

using namespace std;

void display()
{
    int n=0;
    cout<<"Enter the number:";
    cin>>n;
    cout<<endl<<"Number is : "<<n;
}
int main()
{
    cout<<"Calling the function...";
    display();
    return 0;
}