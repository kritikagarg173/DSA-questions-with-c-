#include<iostream>
using namespace std;
int main()
{
    int n, number, rows, i;
    cin >> n;
    for (rows = 1; rows <=n; rows++){
        if (rows % 2 == 0)
        for (i = 1; i <= rows; i++){
            cout << number << endl;
        }
    }
    return 0;
}