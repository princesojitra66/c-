
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout <<"Enter the number of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((j == 5) || (i == j) || (n + 1 - i == j) )
            {
                cout << "1 ";
            }else{
                cout << "- ";
            }
        }
        cout << endl;
    }
    return 0;
}