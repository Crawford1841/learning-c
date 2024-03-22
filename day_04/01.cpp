#include <iostream>
using namespace std;

class myComplex
{
private:
    double real, imag;

public:
    myComplex(double real, double imag);
    friend myComplex operator+(const myComplex &c1, const myComplex &c2);
    friend myComplex operator-(const myComplex &c1, const myComplex &c2);
    friend myComplex operator-(const myComplex &c1, double r);
    friend myComplex operator-(double r, const myComplex &c1);
    void toString();
};
myComplex::myComplex(double real, double imag)
{
    this->real = real;
    this->imag = imag;
}

// 实现复数加法运算
myComplex operator+(const myComplex &c1, const myComplex &c2)
{
    return myComplex(c1.real + c2.real, c1.imag + c2.imag);
}
myComplex operator-(const myComplex &c1, const myComplex &c2)
{
    return myComplex(c1.real - c2.real, c1.imag - c2.imag);
}
myComplex operator-(const myComplex &c1, double r)
{
    return myComplex(c1.real - r, c1.imag);
}
myComplex operator-(double r, const myComplex &c1)
{
    return myComplex(r - c1.real, c1.imag);
}
// 输出复数的值
void myComplex::toString(){
    cout << "Real Part: " << real << ", Imaginary Part: " << imag << endl;
}

int main(){
    myComplex a(12, 12);
    myComplex b(5, 5);

    myComplex c = a + b; // 复数加法运算
    cout << "Result of addition: ";
    c.toString();

    myComplex d = a - b; // 复数减法运算
    cout << "Result of subtraction: ";
    d.toString();

    myComplex e = a - 5.0; // 复数与实数的减法运算（复数减实数）
    cout << "Result of subtraction (real number): ";
    e.toString();

    myComplex f = 20.0 - b; // 实数与复数的减法运算（实数减复数）
    cout << "Result of subtraction (real number - complex number): ";
    f.toString();

    return 0;
}
