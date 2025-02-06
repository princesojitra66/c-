#include<iostream>
using namespace std;
int main(){
  
   int a;
   int b;
   int c;
   int d;
   int e;

     cout<<"enter the value of a"<<endl;
     cin>>a;
     cout<<"enter the value of b"<<endl;
     cin>>b;
     cout<<"enter the value of c"<<endl;
     cin>>c;
     cout<<"enter the value of d"<<endl;
     cin>>d;
     cout<<"enter the value of e"<<endl;
     cin>>e;
    
     int ans;
     ans=a+b+c+d+e;
     cout<<"sum of all number is ="<<ans <<endl;

    int ans1;
    ans1=a*b*c*d*e;
    cout<<"multiplication of all number is ="<<ans1<<endl;

    int ans2;
    ans2=a-b-c-d-e;
    cout<<"subtraction of all number is ="<<ans2<<endl;

    int ans3;
    ans3=a/b/c/d/e;
    cout<<"division of all number is ="<<ans3<<endl;

    return 0;
}