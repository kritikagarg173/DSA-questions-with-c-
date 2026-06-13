#include<iostream>
#include<cstring>
using namespace std;

void printarray(int *freq){
    for (int i = 0; i < 26; ++i)
    {
        cout << freq[i] << " ";
    }
    
    cout << endl;
}


int main() {

char a[] = "abcaa";
char b[] = "aacbad";

int len_a = strlen(a);
int len_b = strlen(b);
int freq[26] = {0};

for (int i = 0; i < len_a; ++i)
{
    int indx = a[i] - 'a';
    freq[indx]++;

}
printarray(freq);

for (int i = 0; i < len_b; ++i){
    int indx = b[i] - 'a';
    freq[indx]--;
}
printarray(freq);
bool ispermutation = true;

for (int i = 0; i < 26; ++i)
{
    if (freq[i] != 0){
        ispermutation = false;
        break;
    }
}
if (ispermutation)cout<< "yes\n";

else cout << "no\n";

return 0;
}