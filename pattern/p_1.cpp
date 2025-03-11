
#include<iostream>
using namespace std;
int main()
{
    int a=1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (a%2==0)
            {
                cout << "0 ";
            }else{
                cout << "1 ";
            }
            a++;
        }
        cout << endl;
    }
    return 0;
}
