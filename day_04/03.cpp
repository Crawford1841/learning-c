#include <iostream>
#include <set>

class Set {
private:
    std::set<int> elements;

public:
    // 构造函数
    Set() {}

    // 插入元素
    void insert(int value) {
        elements.insert(value);
    }

    // 重载运算符+，表示集合的并
    Set operator+(const Set& other) const {
        Set result;
        for (int elem : elements) {
            result.insert(elem);
        }
        for (int elem : other.elements) {
            result.insert(elem);
        }
        return result;
    }

    // 重载运算符-，表示集合的差
    Set operator-(const Set& other) const {
        Set result;
        for (int elem : elements) {
            if (other.elements.find(elem) == other.elements.end()) {
                result.insert(elem);
            }
        }
        return result;
    }

    // 重载运算符*，表示集合的交
    Set operator*(const Set& other) const {
        Set result;
        for (int elem : elements) {
            if (other.elements.find(elem) != other.elements.end()) {
                result.insert(elem);
            }
        }
        return result;
    }

    // 重载运算符<，判断是否是真子集
    bool operator<(const Set& other) const {
        for (int elem : elements) {
            if (other.elements.find(elem) == other.elements.end()) {
                return false;
            }
        }
        return true;
    }

    // 重载运算符==，判断两个集合是否相等
    bool operator==(const Set& other) const {
        return elements == other.elements;
    }

    // 重载运算符!=，判断两个集合是否不相等
    bool operator!=(const Set& other) const {
        return !(*this == other);
    }

    // 输出集合元素
    void display() const {
        for (int elem : elements) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    Set set1, set2;
    set1.insert(1);
    set1.insert(2);
    set1.insert(3);

    set2.insert(2);
    set2.insert(3);
    set2.insert(4);

    Set unionSet = set1 + set2;
    Set intersectionSet = set1 * set2;
    Set differenceSet = set1 - set2;

    std::cout << "Union: ";
    unionSet.display();

    std::cout << "Intersection: ";
    intersectionSet.display();

    std::cout << "Difference: ";
    differenceSet.display();

    std::cout << "Is set1 a true subset of set2? " << (set1 < set2) << std::endl;
    std::cout << "Are set1 and set2 equal? " << (set1 == set2) << std::endl;
    std::cout << "Are set1 and set2 not equal? " << (set1 != set2) << std::endl;

    return 0;
}
