#include<iostream>
#include<stack>
using namespace std;
bool isBalanced(string &str){
    stack<char>s;
    for (int i = 0; i < str.size(); ++i){
        char ch = str[i];
        switch(ch){
            case '(' :
            case '{':
            case '[':
            s.push(ch);
            break;
            case ')':
            if (!s.empty() and s.top() == '(') s.pop();
            else return false;
            break;
            case '}':
            if (!s.empty() and s.top() == '{')s.pop();
            else return false;
            break;
            case ']':
            if (!s.empty() and s.top() == '[')s.pop();
            else return false;
            break;

        }
    }
    return s.empty();
    
}
void bruteForce(string &s, int n){
    //base case
    if (s.size() == 2 * n){
        if (isBalanced(s))cout << s << endl;
        return;

    }
    //recursive case
    // and opening bracket in front
    s.push_back('(');
    bruteForce(s,n);
    s.pop_back();
    // add closing bracket in front
    s.push_back('(');
    bruteForce(s,n);
    s.pop_back();// backtracking
}
void bruteForce1(string s, int n){
    //base case
    if (s.size() == 2 * n){
        if (isBalanced(s)) cout << s << endl;
        return;

    }
    bruteForce1(s + "(", n);  

}
int main()
{
    string s = "";
    bruteForce1(s,2);
    return 0;

}
//optimized parentheisis
void solve(string &s, int n, int open, int close){
    //base case
    if(s.size() == 2 * n){
        cout << s << endl;
        return;

    }
    //recursive case
    // add opening bracket in front
    if (open < n){
        s.push_back('(');
        solve(s,n,open + 1, close);
        s.pop_back();

    }
    if (open > close){
    s.push_back('(');
        solve(s,n,open + 1, close);
        s.pop_back();

}
}
int main()
{
    string s = "";
    solve(s,2,0,0);
    return 0;
}


