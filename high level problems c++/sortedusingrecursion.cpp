#include<iostream>
using namespace std;

bool issorted(int *a, int n)
{
    if (n == 0 || n == 1) return true;
    bool kyachotasortedhai = issorted(a + 1, n - 1);
    if (a[0] < a[1] and kyachotasortedhai){
        return true;

    }
    else{
        return false;
    }
}
int main()
{
    int a[] = {1, 4, 6, 8, 9};
    int n = sizeof(a) / sizeof(int);
    if (issorted(a, n)){
        cout << " sorted\n";

    }
    else{
        cout << "not sorted\n";
    }
}
//way 2 using itrator
bool issorted(int *a, int n, int i)
{
    if (i == n - 1 || i == n) return true;
    bool kyachotasortedhai = issorted(a, n, i + 1);
    if (a[i] < a[i + 1] and kyachotasortedhai){
        return true;

    }
    else{
        return false;
    }
}
int main()
{
    int a[] = {1, 4, 6, 8, 9};
    int n = sizeof(a) / sizeof(int);
    if (issorted(a, n, 0)){
        cout << " sorted\n";

    }
    else{
        cout << "not sorted\n";
    }
}