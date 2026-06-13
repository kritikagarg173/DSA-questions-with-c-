#include<iostream>
using namespace std;
int main()
{
    int n, number,i, rows;
    cin >> n;
    for (rows = 1; rows <=n; rows++){
        if (rows % 2 == 0){
            number = 0;
        
        }
        else{
            number = 1;
        }
        for (i = 1; i <= rows; i++){
            cout << number << " ";
            number = 1 - number;
        }
        cout << endl;
    }
    return 0;
}
