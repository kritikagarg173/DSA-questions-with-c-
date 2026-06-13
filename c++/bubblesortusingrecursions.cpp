#include<iostream>
using namespace std;

void printarray(int *a, int n){

    for (int i = 0; i < n; i++)






    void bubblesort(int *a, int n, int i){
        //base case
        if (i == n - 1)return;
        //recursive case
        for (int j = 0; j < n - i - 1; ++j){
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
        bubblesort(a, n, i + 1);

    }
    int main()
    {
        int a[] = {5, 4, 3, 2, 1};
        int n = sizeof(a) / sizeof(int);

        printarray(a, n);
        bubblesort(a, n, 0);
        printarray(a,n);

        return 0;
    }
    int main(){
        void bubblesort(int *a, int n, int i){
            if (i == n-1)return;
            //recursive case
            for (int j = 0; j < n-1; ++j){
                
            }
        }
    }
    
    

     