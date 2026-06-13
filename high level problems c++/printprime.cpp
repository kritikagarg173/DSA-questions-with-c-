#include<iostream>
using namespace std;

int main()
{
    int N, num, i;
    bool kyanumberprimehain;
    cin >> N;
    // print all primes till N
    for (num = 2; num <= N; num++){
        //only print num when its prime
        // num should not be divisible ny number in range 2. num -1 
        kyanumberprimehain = true;
        for (i = 2; i <= num -1; i++){
            if (num % i == 0){
                kyanumberprimehain = false;
                break;
            }

        }
        //agr num prime hai toh print kardo, else kuch mat kro
        if (kyanumberprimehain == true){
            cout << num << " ";
        }
    }
    cout << endl;
    return 0;
}