    #include <iostream>
    #include <map>
    #include <math.h>

    using namespace std;

    class Double {
        private:
            double d;
        
        public:
            Double() : d{1} {

            }
            Double(double d): d{d}{
            }

            friend bool operator==(const Double& cd1, const Double& cd2) {
                if (fabs(cd1.d - cd2.d) <= 1E-10)
                    return true;
                return false;
            }

            friend bool operator!=(const Double& cd1, const Double& cd2) {
                return !(cd1 == cd2);
            }

            friend bool operator<(const Double& cd1, const Double& cd2) {
                return !(cd1 == cd2)  && cd1.d < cd2.d;
            }

            friend bool operator>(const Double& cd1, const Double& cd2) {
                return cd2 < cd1;
            }

            friend bool operator>=(const Double& cd1, const Double& cd2) {
                return !(cd1 < cd2);
            }

            friend bool operator<=(const Double& cd1, const Double& cd2) {
                return !(cd1 > cd2);
            }
    };


    int main() {
        double d1 = 1 + 3.0 / 7.0 -1;
        double d2 = 3.0 / 7.0;

        // 0.428571 0.428571 0
        // If gave true, play with similar examples
        cout<<d1<<" "<<d2<<" "<<(d1 == d2)<<"\n";

        Double cd1(d1);
        Double cd2(d2);

        cout<<(cd1 == cd2)<<"\n";	// true
        cout << (cd1 < cd2) << "\n";    // this and the next line should be false
        cout << (cd2 < cd1) << "\n";    // false
        // cout << (cd1 >= cd1) << "\n";   
        // cout << (cd2 <= cd1) << "\n";

        map<Double, string> map;
        map[cd1] = 10;
        map[cd2] = 20;

        cout<<map.size() << "\n";	// map uses operator < to determine if cd1 and cd2 are equal or not !(cd1 < cd2) && !(cd1 > cd2)

        return 0;
    }