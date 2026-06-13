#include <iostream>
#include <climits>// INT_MIN: -2^31
using namespace std;
int main()
{
    int n, i, num, largest;
    cin >> n;
    largest = INT_MIN;
    i=1;
    while (i <= n){
        cin >> num;
        if (num > largest){
            largest = num;
        }

        
        i = i +1;

    }
    cout << "largest number:" << largest << endl;
    

}