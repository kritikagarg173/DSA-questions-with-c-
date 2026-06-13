#include<iostream>
using namespace std;
int main()
{
    int cnt = 0;
    char ch;
    // initialization 
    cin >> ch;// bahar ch ka input is imp beacuse
    // while loop ke andar hum ch!= $ tabhi kr skte h jab ch mein garbage ho
    while (ch != '$'){
        //condition check
        cnt++;
        ch = cin.get(); //updation
    }


    cout << " total characters:" << cnt << endl;
    return 0;
    while(ch!= '$'){
        //condition check

    }
}
int main()
{
    char ch;
    ch = cin.get();
    
}




