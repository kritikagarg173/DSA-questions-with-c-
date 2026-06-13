#include<iostream>
using namespace std;
int main(){
    
    //100 times loop chal raha hai
    for (int i = 1; i <= 100; i++){
        if (i %2==0){
            cout << i << " ";
        }
    }
}

  
//2nd method
#include<iostream>
using namespace std;
int main(){
    for (int i = 2; i <= 100; i = i + 2){
        cout << i << " ";
    }
}

// print the table of 19
#include<iostream>
using namespace std;
int main(){
    for (int i = 19; i <=190; i=i+19){
        cout << i << " ";
    }
}