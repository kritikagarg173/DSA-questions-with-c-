#include<iostream>
using namespace std; 
int main()
{
    // initialization
    // char a[1000] = 'welcome';
    char a[1000] = "welcome";
    // user input
    //char a[1000];
    //cin >> a;
    cout << a << endl;
    for (int i = 0; a[i] != '\0'; ++i){
        cout << a[i] << " ";

    }
    cout << endl;
    return 0;
}
// count till dollar
#include<iostream>
using namespace std; 
void readstring(char *a,int n,char delimiter = '\n'){
    int i = 0;
    char ch;
    ch = cin.get();
    while (i < n - 1 and ch != delimiter) {
        a[i] = ch;
        i++;
        ch = cin.get();
    }
    a[i] = '\0';
}
int main(){
    char a[500];
    readstring(a, 500);
    cout << a << endl;
    return 0;
}

