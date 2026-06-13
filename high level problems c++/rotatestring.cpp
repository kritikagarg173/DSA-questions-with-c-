#include<iostream>
#include<cstring>
using namespace std;
void rotatestring(char*a, int n){
   // cout << "original string:" << a << endl;
   // shift all char n pos ahead
   // bring last n characters to front
   int len_a = strlen(a);
   int i = len_a - 1;
   while(i >= 0){
    a[i + n] = a[i];
    i--;
   }
i = len_a;
int j = 0;
while (j < n) {
    a[j] = a[i];
    i++;
    j++;

}
a[len_a] = '\0';
// cout << a << endl;
}
int main()
{
    char a[1000] = "coding";
    int n = 7;
    n %= strlen(a);
    rotatestring(a, n);
    cout << a << endl;
    return 0;

}




