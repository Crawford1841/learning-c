#include<iostream>
using namespace std;
#include <vector>
#include<algorithm>
template <typename T>
class Set{
    private:
        vector<T> data;

    public:
        Set(){}
        Set(const vector<T> &v){
            data = v;
        };
        ~Set(){}
        friend Set operator +(Set &a,Set &b);
        friend Set operator -(Set a,Set b);
        friend Set operator *(Set a,Set b);
        friend Set operator <(Set a,Set b);
        friend Set operator==(Set a,Set b);
        friend Set operator !=(Set a,Set b);
};

