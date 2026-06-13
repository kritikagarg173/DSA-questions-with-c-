// syntax arrays
// #include <iostream>
// using namespace std;
// int main(){
//     int a[5];  // declaration of array
//     cout << " enter array elements : ";
//         for (int i=0; i<=4;i++){
//         cin >> a[i] ; 
//     }

//     for (int i=0; i<=4;i++){
//         cout << a[i]*2 << " ";
//     }
// }

// array initialisation ka 2nd method
#include <iostream>
using namespace std;
int main()
{
    int arr[5]={2,4,5,6,7};
    for (int i=0; i<=4;i++){
        cout << arr[i] << " ";
    }
}
