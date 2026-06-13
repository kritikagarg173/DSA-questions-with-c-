#include<iostream>
using namespace std;
int main()
{
int f,c;
f = 0;
while (f <= 300){
    c = (5/9.0) * (f - 32);
    cout << f << " " << c << endl;
    f = f + 20;

}
return 0;
    
}