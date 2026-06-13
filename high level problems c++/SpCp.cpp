#include<iostream>
using namespace std;
int main()
{
    //write a program to tell whether the shopkepper has earned profit or loss or no profit no loss
    int sp;
    cout << " enter selling price ";
    cin>>sp;
    int cp;
    cout << " enter cost price ";
    cin >> sp;
    if (sp>cp){
        cout << "profit occured" << sp-cp; 
        
    }
     if (sp<cp){
        cout << "loss occured" << cp-sp;
        
    }
    if (sp==cp){
        cout << "no profit no loss";
    }
    
    }
