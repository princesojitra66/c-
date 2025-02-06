#include<iostream>
using namespace std;
int main(){
  
   int a,b,c,d,e;
  
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

    int ans4;
    ans4+=a;
    cout<<"increment of all number is ="<<ans4<<endl;

    int ans5;
    ans5-=a;
    cout<<"decrement of all number is ="<<ans5<<endl;

    int ans6;
    ans6*=a;
    cout<<"multiplication of all number is ="<<ans6<<endl;

    int ans7;
    ans7/=a;
    cout<<"division of all number is ="<<ans7<<endl;  

    int ans8;
    ans8= ++a;
    cout<<"unary increment of all number is ="<<ans8<<endl;

    int ans9;
    ans9= --b;
    cout<<"unary decrement of all number is ="<<ans9<<endl;
    
    return 0;
}