#include<iostream>
using namespace std;

void merge(int *a, int *b, int *c,
int s, int e){
    int mid = (s+e)/2;
    int i = s, j = mid + 1, k = s;
    while (i < mid and j <=e){
        if (b[i] < c[j]){
            a[k]=b[i];
            k++;
            i++;

        }
        else{
            a[k] = c[j];
            k++;
            j++;

        }
    }
    while (i <= mid){
        a[k++] = b[i++];

    }
    while (j <= e){
        a[k++] = c[j++];
    }

}
void mergesort(int *a, int s, int e){
    //base case
    if (s >= e){
        return;
    }
    //recursive case
    //divide

    int mid = (s+e)/2;
    int b[1000], c[1000];
    for (int i = s;i <= mid; ++i)
    {
        b[i] = a[i];
    }
    for (int i = mid + 1; i <= e; ++i){
        c[i] = a[i];
    }

    //sort assumption
    mergesort(b,s, mid);
    mergesort(c, mid + 1, e);

    //merge
    merge(a,b,c,s,e);
    
}
