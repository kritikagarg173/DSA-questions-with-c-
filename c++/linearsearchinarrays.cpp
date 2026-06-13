#include<iostream>
using namespace std;
int main()
{
    int a[100];
    int n = 5,key,i;
    for (int i = 0; i < n; ++i)
    {
        a[i] = i + 1;
    }
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";

    }
    cout << endl;
    cout << " enter keys: ";
    cin >> key;
    for (i = 0; i < n; ++i)
    {
        if (a[i] == key){
            cout << "key found at index: " << i << endl;
            break;
        }
    }
    if (i == n){
        cout << " key not found\n";

    }
    return 0;

}