#include<iostream>
using namespace std;
int main()
{
    int *a = new int;
    *a = 10;
    cout << *a << endl;
    //array
    int *arr = new int[10];
    for (int i = 0; i < 10; ++i)
    {
        arr[i] = i + 1;

    }
    for (int i = 0; i < 10; ++i)
    {
        cout << arr[i] << " ";

    }
    cout << endl;
    //to free the memory
    delete a;
    a = NULL;
    
    delete[] arr;
    arr = NULL;
    return 0;

}