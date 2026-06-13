#include<iostream>
using namespace std;

int main()
{
    int n, cnt = 0, rem; 
    cin >> n;
    while (n != 0){
        rem = n % 2;
        if (rem == 1){
            cnt++;
        }
        n /= 2;

    }
    cout << "set bits:" << cnt << endl;
    return 0;
}
//2nd method
#include<iostream>
using namespace std;

int main()
{
    int n, cnt = 0, rem; 
    cin >> n;
    while (n != 0){
        if ((n & 1) == 1){
            cnt++;  
        }
        n = n >> 1;

    }
    cout << "set bits:" << cnt << endl;
    return 0;

}