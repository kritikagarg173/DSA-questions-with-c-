#include<iostream>
using namespace std;

    void print(int*a , int n) {
        for (int i = 0; i < n; ++i){
            cout << *(a + 1) << " ";
        }
        cout << endl;

}
int main()
{
    int a[] = {1, 7, 8, 6, 5};
    int n= sizeof(a) / sizeof(int);
    print(a,n);
    return 0;
}


    
