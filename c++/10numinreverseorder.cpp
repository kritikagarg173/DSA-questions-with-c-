#include<iostream>
using namespace std;
int main()
{
    int n,i;

    cin >> n;
    for (i = n - 1; i >= 0; --i){
        cout << i << " ";
    }
    return 0;

}
//method 2 using array
#include<iostream>
using namespace std;
int main()
{
    int a[1000];
    int n = 10;
    for (int i = 0; i < n; --i)
    {
        a[i] = i + 1;
    }
    for (int i = n - 1; i >= 0; --i)
    {
        cout << a[i] << " ";

    }
    cout << endl;
}
// method 1
int main()
{
    int n,i;

    cin >> n;
    for (i = 0; i >= 0; --i){
        cout << i << " ";

    }
    return 0;
}

