// print the combination
// #include<iostream>
// using namespace std;
// int main(){
//    int n;
//    cout << " enter the number n: ";
//    cin >> n;
//    int r;
//    cout << " enter the number r: ";
//    cin >> r;
//    int a=1;
//    for (int i=1;i<=n;i++){
//       a=a*i;
//    }
//    int b=1;
//    for (int i=1;i<=r;i++){
//       b=b*i;
//    }
//    int c =1;
//    for (int i=1;i<=n-r;i++){
//       c=c*i;

//    }
//    cout << a/(b*c);
// }


//pascal triangle
#include<iostream>
#include<cmath>
int fact (int x){
   int f=1;
   for (int i=1; i <=x;i++){
      f*=i;
      }
      return f;
}
int ncr(int n,int r){
   int a = fact(n);
   int b = fact(r);
   int c = fact (n-r);
   return a/(b*c);
}
using namespace std;
int main(){
   int n;
   cout << " ener number of rows : ";
   cin>>n;
   for (int i=0;i<=n;i++){
      for (int j=0; j<=i;j++){
         cout<< ncr(i,j) << " ";
      }
      cout << endl;
   }
}