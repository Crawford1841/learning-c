#include <iostream>
using namespace std;

class Base
{
private:
    string name;

public:
    virtual double mathZhouChang() = 0;
    virtual double mathMianJi() = 0;
    virtual void show() = 0;
    virtual ~Base()
    {
        cout << "vritual Base" << endl;
    }
};

class Circel : public Base
{
private:
    double r;

public:
    Circel(double r) : r(r)
    {
    }
    double mathZhouChang()
    {
        return 2 * 3.14 * r;
    }
    double mathMianJi()
    {
        return 3.14 * r * r;
    }
    void show()
    {
        cout << "圆形" << endl;
    }
    ~Circel(){
        cout<<"圆形销毁"<<endl;
    }
};

class ZhengFangXing : public Base
{
private:
    double h;

public:
    ZhengFangXing(double h) : h(h)
    {
    }
    double mathZhouChang()
    {
        return h * 4;
    }
    double mathMianJi()
    {
        return h * h;
    }
    void show()
    {
        cout << "正方形" << endl;
    }
        ~ZhengFangXing(){
        cout<<"正方形销毁"<<endl;
    }
};

int main()
{

    Circel c(23);
    cout << c.mathMianJi() << endl;
    cout << c.mathZhouChang() << endl;
    c.show();
    ZhengFangXing z(4);

    cout << z.mathMianJi() << endl;
    cout << z.mathZhouChang() << endl;
    z.show();
    return 0;
}