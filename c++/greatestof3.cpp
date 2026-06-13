#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter 1st number : ";
    cin >> a;
    int b;
    cout << "enter 2nd number : ";
    cin >> b;
    int c;
    cout << "enter 3rd number : ";
    cin >> c;
    if (a>b && a>c){
        cout << a;
    }
     if (b>a && b > c){
        cout << b;
    }
    if (c>a && c>b) {
        cout << c;
    }
    return 0;
}
//method 2
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter 1st number : ";
    cin >> a;
    int b;
    cout << "enter 2nd number : ";
    cin >> b;
    int c;
    cout << "enter 3rd number : ";
    cin >> c;
