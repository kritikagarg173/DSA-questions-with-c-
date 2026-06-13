// #include <Iostream>
// using namespace std;
// int main()
// {
//     int n; 
//     cout <<" enter number of rows : ";
//     cin>>n;
//     int a=1;
//     for (int i =1; i <=n;i++){
//         for (int j=1; j <=i; j++){
           
//             cout << a << " ";
//             a++;
//         }
//         cout << endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main(){
//      int n; 
//      cout <<" enter number of rows : ";
//     cin>>n;
//     for (int i=1; i <=n; i++){
//         for (int j=1; j <=i; j++){
//             if ((i+j)%2==0) cout << 1 << " ";
//             else cout << 0 << " ";


//         }
//         cout << endl;
//     }
  
    
// }

//pattern to print the sum
// #include <iostream>
// using namespace std;
// int main(){
//      int n; 
//      cout <<" enter number of rows : ";
//     cin>>n;
//     // int mid = n/2 + 1;
//  for (int i=1;i <=n; i++){
//     for (int j=1; j <=n; j++){
//         if (i==3|| j== 3) cout << "*";
//         else cout << " ";
//     }
//     cout << endl;
//  }
// }


// #include <iostream>
// using namespace std;
// int main()
// {
//     int n; 
//     cout << "enter number of rows : ";
//     cin >> n;
//     int m;
//     cout << "enter number of columns : ";
//     cin >> m;
  

//     for (int i=1;i<=n;i++){
//         for (int j=1; j <=m; j++){
//             if ((i==1 || i==4) || (j==1 || j==6))cout<<"* ";
//             else cout << "  ";
//         }
//         cout << endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int n; 
//     cout << "enter side of square : ";
//     cin>>n;
//     for (int i=1; i<=n; i++){
//         for (int j=1; j<=n; j++){
//             if ((i==j) || (j==n+1-i))cout << "* ";
//             else cout << " ";
//         }
//         cout << endl;
//     }
// }

#include <iostream>
using namespace std;
int main(){

    int n;
    cout << " enter number of rows : ";
    cin >> n;
    
 for ( int i =1; i <=n; i++){  //rows
    for (int j=1; j<=n-i;j++){
        cout << "  ";
    }
        for (int j = 1; j <=i; j++){
            cout << "*";
        }
        cout << endl;
    }
}








    

