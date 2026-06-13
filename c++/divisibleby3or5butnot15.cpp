#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter 1st number";
    cin>> n;
    if ((n%3==0|| n%5==0) && (n%!15==0)){
        cout<<"divisible";

    }
    else{
        cout << "not divisible";
    }
    
}