#include <iostream>
#include <string>

using namespace std;

string operator* (const string& s, int num) {
    string res {""};
    while(num--)
        res += s;
    return res;
}
int main() {
    string a = "bad";
    string b = "I am " + a * 3 + ", right?";
    
    cout << b << "\n";
    return 0;
}