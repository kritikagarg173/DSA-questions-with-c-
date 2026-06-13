#include<iostream>
using namespace std;
void helloworld();
int sum(int a, int b);
int main() {
    helloworld();
    int ans = sum (10, 20);
    int ans1 = sum(11, 21);
    cout << "sum:" << ans << endl;
    cout << "sum:" << ans1 << endl;
    return 0;
}
int sum(int a , int b){
    int ans = a + b;
    return ans;
}

void helloworld() {
    cout << "hello world!!!!\n";
}
