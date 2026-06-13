#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    for (int row = 1; row <=n; ++row){
        //1. print row times stars
        for (i=1;i<=row;i++){
            cout << "*";
        }
        //print ' '
        cout << ' ';

        //print stars(n-row+1)
        for(i=1;i<= n-row; i++){
            cout << '*';
        }
        //print ' '
        cout << ' ';


        // print stars (n-row+1)
        for ( i = 1; i <= row; i++){
            cout << '*';
        }
        //print ' '
        //print row times stars
        //print "/n"
        cout << endl;
    
    }

}