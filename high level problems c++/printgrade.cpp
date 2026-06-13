#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " enter the percentage ";
    cin>>n;
    if(n>=81 and n<=100){
        cout << "very good";
    }
    else if (n>=61 and n<=80){
        cout<<"good";
    }
    else if (n>=41 and n<=60){
        cout <<"average";
    }
    else if(n<=40){
        cout << "fail";
    }
}