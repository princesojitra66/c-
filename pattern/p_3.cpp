

#include<iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << "enter the number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (i == j && j <= 3)
            {
                cout << 1 << " ";
            }else if (rows + 1 - i == j && j <= 3){
                cout << 1 << " ";
            }else{
                cout << "- ";
            }
        }
        cout << endl;
    }
    return 0;
}