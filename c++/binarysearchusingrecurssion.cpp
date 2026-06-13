#include<iostream>
using namespace std;

int binarysearch(int *a, int s, int e, int key) {
    //base caase 
    if (s > e) return -1;

    //recursive case
    int mid = (s + e)/2;
    if (a[mid] == key) return mid;
    else if (key > a[mid]) return binarysearch(a, mid + 1, e, key);
    else return binarysearch(a,s,mid - 1, key);

}

int main()
{
    int a[]= {1,2,3,4,5};
    int n = sizeof(a)/ sizeof(int);
    cout<<binarysearch(a,0,n-1,30)<<endl;
    return 0;

}

