#include <iostream>
#include <string>
#include <vector>
#include <string_view>
#include <algorithm>


class MyMap {
    private:
        std::vector<std::string> names {};
        std::vector<int> values {};
        int currIndex {0};
    
        template <typename T>
        int getIndex(const std::vector<T> vec, const T& s) {
            int index = std::distance(vec.begin(), std::find(vec.begin(), vec.end(), s)) ;
            return index;
        }
    public:
        MyMap() = default;

        int& operator[](std::string name) {
            if (getIndex(names, name) < names.size() ) 
                return values[getIndex(names, name)];
            names.push_back(name);
            values.push_back(0);
            return values.back();
            

        }

        std::vector<std::string> operator[](int value) {
            std::vector<std::string> res {};
            if (getIndex(values, value) < values.size())
                for (int i {0}; i < names.size(); ++i)
                    if (values[i] == value)
                        res.push_back(names[i]);
            std::sort(res.begin(), res.end());
            return res;
        }

        bool hasNext() {
            return currIndex < names.size();
        }

        std::pair<std::string, int> getNext() {
            return std::pair<std::string, int> {names[currIndex], values[currIndex++]};
        }

        void resetIterator(){
            currIndex = 0;
            return;
        }

        void clear() {
            names.clear();
            values.clear();
            return ;
        }

};

int main() {
    MyMap map;

    map["mostafa"] = 20;
    map["mostafa"] = 40;
    map["sayed"] = 20;
    map["ali"] = 20;

    std::cout << map["mostafa"] << "\n";

    std::vector<std::string> v =  map[20];
    for (auto& s : v)
        std::cout << s << " ";
    std::cout << "\n";

    map.resetIterator();
    while(map.hasNext()) {
        auto p = map.getNext();
        std::cout << p.first << " " << p.second << "\n";
    }

    map.clear();
    return 0;

}