#include<iostream>
using namespace std;

int main()
{
    int n, rows, i;
    cin>>n;
    for (rows = 1; rows <= n; ++rows){
        char ch = 'A';
        for (i = 1; i <=n + 1 - rows; ++i){
            cout << ch;
            ch++;
        }
        // har row ke andar n+1-rows times decreasing characters print karne h
        ch--;
        for (i = 1; i <= n + 1 - rows; ++i){
            cout << ch;
            ch--;
        }
        cout << endl;

    }
    return 0;
}


    