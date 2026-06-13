#include<iostream>
using namespace std;
char a[][10] = {
    "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
};
void intTostring(int n){
    //base case

    if (n == 0){
        return;
    }
    // recursive case

    int ld = n % 10;
    cout << a[ld] << ' ';
    intTostring(n / 10);
}
int main()
{
    intTostring(2048);
}

// print 2048 in string
#include<iostream>
using namespace std;
char a[][10] = {
    "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
};
void intTostring(int n){
    //base case

    if (n == 0){
        return;
    }
    // recursive case

    int ld = n % 10;
    intTostring(n / 10);
    cout << a[ld] << ' ';
}
int main()
{
    intTostring(2048);
}

