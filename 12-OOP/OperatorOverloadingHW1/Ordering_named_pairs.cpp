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
        
        virtual void print() {
            cout << first << " " << second << "\n";
        }

        friend bool operator<(const MyPair& p1, const MyPair& p2) {
            return tie(p1.first, p1.second) < tie(p2.first, p2.second); 
        }
};

class  NamedPair : public MyPair {
    private:
        string name {};
    
    public:
        NamedPair(string name, int first , int second):
            MyPair(first, second), name{name}
        {

        }

        void print() override{
            cout << name << " ";
            MyPair::print();
        }

        friend bool operator<(const NamedPair& n1, const NamedPair& n2) {
            if (n1.name != n2.name)
                return n1.name < n2.name;
            return dynamic_cast<const MyPair&>(n1) < dynamic_cast<const MyPair&> (n2);
        }
};

int main() {
    vector<NamedPair> vec;
    vec.push_back(NamedPair("A", 10, 20));
    vec.push_back(NamedPair("B", 10, 7));
    vec.push_back(NamedPair("B", 1, 200));

    sort(vec.begin(), vec.end());

    for(auto& pair : vec)
        pair.print();
    
    return 0;
}