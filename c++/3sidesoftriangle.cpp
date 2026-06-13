#include<iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter 1st side of triangle : ";
    cin >> a;
    int b;
    cout << "enter 2nd side of triangle : ";
    cin >> b;
    int c;
    cout << "enter 3rd side of triangle : ";
    cin >> c;
    if (a+b>c && a+c>b && b+c>a)
    {
        cout << "they are the sides of triangle";
    
    }
    else {
        cout << "not the sides of triangle";
    }

}