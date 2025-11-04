#include<iostream>
using namespace std;
int main()
{
    char g;

    cout<<"Enter the character: ";
    cin>>g;

    do{
        cout<<g<<" ";
        g=g+4;
    }while(g<='z');

    return 0;

}