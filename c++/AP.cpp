// #include <iostream>
// using namespace std;

// int main(){

//     int n,i;

//     cout << "enter n : ";
//     cin>> n;

//     for (i = 1; i <= 2*n-1; i+=2){
//         cout << i << "  ";
//     }
// }

//2nd method
// #include<iostream>
// using namespace std;
// int main(){
//     int i,n;
//     for (i = 4; i <= 3*n+1; i+=3){
//         cout << i << " ";
//     }
// }

//3rd method of ap
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "enter n";
//     cin >> n;
//     int a =4;
//     for (int i = 1; i <= n; i++){
//         cout << a << "  ";
//         a=a+3;
//     }
// }

//print the gp- 1,2,4,8,16,32......
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter n : ";
    cin >> n;
    int a =1;
    for (int i =1; i <=n; i++){
        cout << a << " ";
        a = a*2;

    }

}
   