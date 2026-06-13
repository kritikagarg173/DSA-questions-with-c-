// #include<iostream>
// using namespace std;
// int main(){

//     int n;
//     cout << " enter the number : ";
//     cin >> n;

//     int sum = 0;

//     while (n!=0){
//         int ld = n%10;
//         n = n/10;
//         sum = sum + ld;

//     }
    
//     cout << "the sum of digits is : " << sum;
// }





// // to print the product of digits
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << " enter the number : ";
//     cin >> n;
//     int product = 1;
//     while (n!=0){
//         int ld = n %10;
//         n = n/10;
//         product = product * ld;
//     }
//     cout << "the product of digits is : " << product;

// }
// to print the sum of all even digits of given number
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << " enter the number : ";
    cin >> n;

    int sum = 0;
    
    while (n !=0){
        int ld = n %10;
        if (ld % 2 == 0){
            sum = sum + ld;
        }
        n = n/10;
        }
        cout << "sum of even digits : " << sum;
        
        }
        
        
    

