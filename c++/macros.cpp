#include<iostream>
using namespace std;


    //creating macros
    #define PI (3.14+1)
    #define START int main(){
        #define END return 0;;}
    
    #define PRINT cout <<  

    START
    PRINT PI << endl;
    int r = 1;
    cout << 2 * PI * r << endl;
    END
