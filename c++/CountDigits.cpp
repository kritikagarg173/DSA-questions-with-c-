#include<iostream>
using namespace std;
int main(){

    int n;
    cout << " enter the number : ";
    cin >> n;

    int count;
        while (n!=0){
        n=n/10;
        count ++;
    }
    cout  << " number of digits : " << count ;
}

 //composite or not
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "enter the number : ";
//     cin >> n;
//     for (int i = 1;i <n/2; i++){
//         if (n % i == 0){
//             cout << "the number is composite ";
//             break;
//         }
        
//     }
// }

//NUMBER IS PRIME OR NOT
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "enter the number : ";
//     cin >> n;
//     bool flag = true;
//     for (int i = 2;i < n/2; i++){
//         if (n%i == 0){
//             bool flag = false;
//             break;
//         }
//     }
//     if (n==1) cout << "neither prime nor  composite";
//     if (flag == true) cout << "prime";
//     else cout << "composite";
//}



