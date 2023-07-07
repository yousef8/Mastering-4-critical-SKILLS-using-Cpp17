#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> operator+(const vector<int>& a, const vector<int>& b) {
    vector<int> c {};
    for (size_t i = 0; i < max(a.size(), b.size()); ++i) {
        int sum = (i < a.size() ? a[i] : 0) + (i < b.size() ? b[i] : 0);
        c.push_back(sum);
    }
    return c;
}

int main() {
    vector<int> a {1, 2, 3, 4};
    vector<int> b {10, 20};

    vector<int> c = a + b;

    for (auto& elem : c)
        cout << elem << " ";
    cout << "\n";
    return 0;

}