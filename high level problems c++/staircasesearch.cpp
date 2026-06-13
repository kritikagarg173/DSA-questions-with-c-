#include<iostream>
using namespace std;
int main()
{

    int a[][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11,12},
        {13, 14, 15, 16},

};
int m = 4, n = 4;
int key = 14;
int i = 0, j = m - 1;
bool keyfound = false;
while (i < n and j >= 0){
    if (a[i][j] == key){
        cout << "key found:" << i << " ," << j << endl;
        keyfound = true;
        break;
    }
    else if (key > a[i][j]) {
        i++;

    }
    else {
        j--;

    }
}
if (keyfound == false) {
    cout << " Not found\n";
}
return 0;
}