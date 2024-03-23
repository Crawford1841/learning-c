#include<iostream>
using namespace std;
#include<set>
class Set{
    private:
        set<int> element;

    public:
        friend set<int > operator +(set<int> a,set<int> b);
        friend set<int> operator -(set<int> a,set<int> b);
        friend set<int> operator *(set<int> a,set<int> b);
        friend set<int> operator <(set<int> a,set<int> b);
        friend set<int> operator==(set<int> a,set<int> b);
        friend set<int> operator !=(set<int> a,set<int> b);
};