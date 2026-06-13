#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>> n;

    vector<int> v(n, -1);

     cout << v.size() << " , " << v.capacity() << endl;

    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";

    }
    cout << endl;
    return 0;
}
