#include<iostream>
using namespace std;
int main()
{
    int n,ctr=0;

    cout<<"Enter the number:- ";
    cin>>n;

    for(  ;n>0;ctr++)
    {
        n=n/10;
      
    }
    cout<<"Number of digits are:- "<<ctr;
    return 0;
}