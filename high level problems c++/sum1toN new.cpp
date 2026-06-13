// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << " enter the number : ";
//     cin >> n;
//     int sum=0;

//     for (int i=0; i <=n; i++){
//         sum=sum+i;
      
//     }
//     cout << "the sum is : " << sum <<  endl;
// }


//print sum from 1 to n recursion
// #include <iostream>
// using namespace std;
// int sum(int n){
//     if (n==1) return 1;
//     return n+sum(n-1);
// }
// int main(){
//     int n;
//     cout << "enter the n : ";
//     cin >> n;
//     cout << sum(n);
// }

//factorial using recursion
// #include <iostream>
// using namespace std;
// int fact(int n)
// {
//     if(n==1) return 1 ;
//     return n*  fact(n-1);
// }
// int main(){
//     int n;
//     cout << " Enter Number n : ";
//     cin>> n;
//     cout << fact(n);
// }

// make a function which calculates a power b using recursion
// #include <iostream>
// using namespace std;
// int power(int a,int b){
//     if (b==0) return 1;
//     return a * power(a,b-1);
// }
// int main(){
//     int a,b;
//     cout << "enter a : ";
//     cin >> a;
//     cout << "enter b : ";
//     cin >> b;
//     cout << power(a,b);
// }


//fibonaci using recursion
// #include <iostream>
// using namespace std;
// int fibo(int n){
//      if (n==1 || n==2) return 1;
// return  fibo(n-1) + fibo(n-2);
// }
// int main(){
//     int n;
//     cout << " enter n : ";
//     cin>> n;
// cout << fibo(n);

// }


// power of a to power b in short way
#include<iostream>
using namespace std;
int power(int a,int b){
    if (b==0) return 1;
    int half = power (a,b/2);
    if (b%2==0){
        return half*half;

    }
    else {
        return a*half*half;
    }
}
int main(){
    int a,b;
    cout << " enter the base value : ";
    cin >> a;
    cout << " enter the power value : ";
    cin >> b;
    cout << power (a,b);
}


