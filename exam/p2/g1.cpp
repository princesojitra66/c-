#include<iostream>
using namespace std;
int main()
{
    char g='a';

    do{
        cout<<g<<" ";
        g=g+4;
    }while(g<='z');

    return 0;

}