#include<iostream>
using namespace std;

int sumarray(int *a, int n){
    // base case
    if (n == 0){
        return 0;
    }

    // recursive case
    return a[0] + sumarray(a + 1, n - 1);

}
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a)/ sizeof(int);

    cout << sumarray(a,n) << endl;

    return 0;
}


// print numbers in decreasing order using recursions
#include<iostream>
using namespace std;
void printdecreasing(int n){
    if (n == 0) return;
    cout << n << " ";
    printdecreasing(n - 1);

}
    int main(){
        int n;
        cin >> n;
        printdecreasing(n);
        return 0;
    }
    
     
    

