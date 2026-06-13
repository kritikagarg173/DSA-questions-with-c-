// #include <iostream>
// using namespace std;
// int main(){

//     int n;
//     cout << " enter number of rows : ";
//     cin >> n;
    
//  for ( int i =1; i <=n; i++){
//         for (int j = 1; j <=i; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }



//print the pattern  1 AB 123 ABCD
// #include <iostream>
// using namespace std;
// int main()
// {
    
//     int n;
//     cout << "enter number of rows : ";
//     cin >> n;
//     for (int i = 1; i <=n; i++){
//         for (int j=1; j <=i; j++){
//             if (i%2!=0){
//                 cout <<j;
//             }
            
//         }
//         for(int j=1;j<=i;j++){
//             if(i%2==0){
//                 cout << char(j+64);
//             }
            
//         }
//         cout << endl;
//     }
// }

//print the pattern- ulta triangle
#include <iostream>
using namespace std;
int main(){

    int n;
    cout << " enter number of rows : ";
    cin >> n;
    
 for ( int i =1; i <=n; i++){
        for (int j = 1; j <=n+1-i; j++){
            cout << "*";
        }
        cout << endl;
    }
}
