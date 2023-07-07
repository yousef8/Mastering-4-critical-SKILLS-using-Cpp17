#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>

using namespace std;

class MyPair {
    private:
        int first, second;
    public:
        MyPair(int first, int second):
            first(first), second (second){

            }
        
        void print() {
            cout << first << " " << second << "\n";
        }

        friend bool operator<(const MyPair& p1, const MyPair& p2) {
            return tie(p1.first, p1.second) < tie(p2.first, p2.second); 
        }
};

int main() {
    vector<MyPair> vec;
    vec.push_back(MyPair(10, 20));
    vec.push_back(MyPair(10, 7));
    vec.push_back(MyPair(1, 200));

    sort(vec.begin(), vec.end());

    for (auto& pair : vec)
        pair.print();
    return 0;
}