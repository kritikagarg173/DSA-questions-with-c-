// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << " enter n : ";
//     cin >> n;
//     for (int i = 2; i < n/2; i++){
//         if (n%i==0){
//             cout << "the number is composite";
//             break;
//         }
       
//         }
        
//         }
    


// to find whether the number is prime or not
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << " enter n : ";
    cin >> n;
    // starting mein maan ke chlna h ki number prime hai
    bool flag = true;    // true means prime 
    for (int i = 2; i < n/2; i++){
        if (n%i==0){
            
            flag = false;   // false means composite 
            break;
        }
       
        }
        if (flag == true){
            cout << " the number is prime ";

        }
        else {
            cout << "the number is composite";
        }
        
        }
        
    
