#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int main()
{
    char a[10000] = "hello";
    char b[]= "world";

    strcat(a, b);

    cout << a << endl;

    return 0;

}