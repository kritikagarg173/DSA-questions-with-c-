#include<iostream>
using namespace std;

void tow(int n, char src, char helper, char des){
    //base case
    if (n == 0) return;

    //recursive case
    // n - 1 discs ko source se helper le jao
    tow(n - 1, src, des, helper);

    // n th disc ko manually move kro src to destination
    cout << n << " : " << src << " to " << des << endl;

    // n - 1 disc ko helper se destination ko move kro
    tow(n - 1, helper, src, des);
}
int main()
{
    int n;
    cin >> n;

    tow(n, 'A','B', 'C');
    
    return 0;
}