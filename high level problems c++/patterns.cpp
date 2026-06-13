// #include <iostream>
// using namespace std;
// int main(){
//     //rectangle bnana h
//     // rows->m, columns ->n
//     int m;
//     cout << " enter number of rows : ";
//     cin >> m;
//     int n;
//     cout << "enter number of columns : ";
//     cin >> n;

//     for (int i =1; i <=m; i++){
//         for (int j = 1; j <=n; j++){
//             cout << " * " ;
//         }
//         cout << endl;
//     }
// }

// print the pattern - 1234
// #include <iostream>
// using namespace std;
// int main()
// {
   
//     int n;
//     cout << "enter side of square  : ";
//     cin >> n;
    
//  for ( int i =1; i <=n; i++){
//         for (int j = 1; j <=n; j++){
//             cout << j ;
//         }
//         cout << endl;
//     }
// }

// //print the pattern - 1111
// #include <iostream>
// using namespace std;
// int main()
// {
   
//     int n;
//     cout << "enter side of square  : ";
//     cin >> n;
    
//  for ( int i =1; i <=n; i++){
//         for (int j = 1; j <=n; j++){
//             cout << i ;
//         }
//         cout << endl;
//     }
// }

// print the pattern of alphabet square
#include <iostream>
using namespace std;
int main()
{
   
    int n;
    cout << "enter side of square  : ";
    cin >> n;
    
 for ( int i =1; i <=n; i++){
        for (int j = 1; j <=n; j++){
            cout << char(j+64) ;
        }
        cout << endl;
    }
}

