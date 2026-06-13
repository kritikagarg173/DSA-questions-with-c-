#include<iostream>
using namespace std;

int main()
{
    char ch = 'A';
    cout << &ch << endl;
    cout << (int*) (&ch) << endl;
    cout << (float*) (&ch) << endl;
    cout << (double*) (&ch) << endl;
    cout << (void*) (&ch) << endl;

    return 0;


}
//2nd method
#include<iostream>
using namespace std;

int main()
{
    int a[] = {1,2,3,4,5};
    int n = sizeof(a)/ sizeof(int);
    int *x = a;
    for(int i = 0; i < n; ++i)
    {
        //cout << x[i] << " ";
        cout << *(x+1) << " ";

    }
    cout << endl;
    
    return 0;

}