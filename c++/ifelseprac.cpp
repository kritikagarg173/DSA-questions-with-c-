#include <iostream>
//Q- to find whether the area of rectangle is greater than its perimeter
using namespace std;
int main()
{
    int l;
    cout << "enter length of rectangle : ";
    cin >> l;
    int b;
    cout << " enter breadth of rectangle : ";
    cin >> b;
    int a=l*b;
    int p=2*(l+b);
    if (a>p){
        cout << "area of rectangle is greater than perimeter" ;
    }
    else {
        cout << " area of rectangle is smaller than perimeter" ;
    }
}