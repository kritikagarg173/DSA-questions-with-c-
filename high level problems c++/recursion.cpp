// #include <iostream>
// using namespace std;
// void greet(){
//     cout << " GOOD MORNING " << endl;
    
// }
// int main(){
//     greet();
// }

// //print n to 1 using recursion
// #include <iostream>
// using namespace std;
// void print(int n){
//     if (n==0)return;
//     cout << n << endl;
//     print(n-1);
// }

// int main(){
//     print(3);
// }





// //print 1 to n using recursion
// #include <iostream>
// using namespace std;
// void print(int x,int n){
//     if (x>n)return;
//     cout << x << endl;
//     print(x+1,n);
// }

// int main(){
//     int n;
//     cout << " enter the number : ";
//     cin >> n;
//     print(1,n);
// }




//print 1 to n using recursion using recusion case and base case
#include <iostream>
using namespace std;
void print(int x,int n){
    if (x>n)return;     // base case 
    cout << x << endl;
    print(x+1,n);
}

int main(){
    int n;
    cout << " enter the number : ";
    cin >> n;
    print(1,n);
}