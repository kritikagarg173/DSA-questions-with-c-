#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if (n > 99 && n < 1000){
        cout << "the number is a three digit number";

    }
    else {
        cout << "the number is not a three digit number";
    }
}