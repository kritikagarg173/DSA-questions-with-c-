#include<iostream>
using namespace std;
int main()
{
    int n, i;
    cin>>n;
    bool kyaprimehain = true;
    // we need to tell whether n is prime or not?
    for (i=2; i <= n - 1; i++){
        if (n % i == 0){
            // n is not a prime number, kyunki divide ho gaya
            kyaprimehain = false;
            break;//current loop se bahar nikal dega break
        }
    }
    //loop se bahar let's check whether kyaprimehain is true or false
    if (kyaprimehain == true){
        cout << n << endl;
    }
    return 0;

}