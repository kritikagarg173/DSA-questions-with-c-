#include <iostream>
using namespace std;
int main(){
    int x=12;
    int* p=&x;
    cout << x << endl;
    cout << *p << endl;
    x=7;
    *p = 23;
    cout << x << endl;
}