#include<iostream>
#include<cstring>
using namespace std;
void COPY(char *a, char *b){
    int len_b = strlen(b);
    for (int i = 0; i <= len_b;++i)
    {
        a[i] = b[i];
    }
}
int main()
{
    char largest[1000], a[1000];
    int largest_len = 0;

    int n;
    cin>>n;
    cin.ignore();

    for (int i = 0; i < n; ++i)
    {
        cin.getline(a, 1000);
        int len = strlen(a);
        if (len > largest_len){
            largest_len = len;
            strcpy(largest, a);
        }

    }
    cout << "largest:" << largest <<endl;
    cout << "largest len:" << largest_len << endl;
    return 0;
    
}