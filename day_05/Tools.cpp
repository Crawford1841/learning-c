#include <iostream>
using namespace std;
class CarTools
{
private:
    string name;

public:
    CarTools()
    {
        cout << "交通工具初始化" << endl;
    }
    CarTools(string name)
    {
        cout << name + "交通工具初始化" << endl;
    }
    ~CarTools()
    {
        cout << "交通工具释放内存" << endl;
    }
};

class JiaoChe : public CarTools
{
private:
    string name;

public:
    JiaoChe()
    {
        cout << "轿车初始化" << endl;
    }
    JiaoChe(string name) : CarTools(name), name("轿车")
    {
        // this->name = name;
        cout << this->name + "初始化" << endl;
    }
    ~JiaoChe()
    {
        cout << name + "轿车释放内存" << endl;
    }
};

class BBA : public JiaoChe
{
private:
    string name;

public:
    BBA()
    {
        cout << "BBA初始化" << endl;
    }
    BBA(string name) : JiaoChe(name), name("BBA")
    {
        cout << this->name + "初始化" << endl;
    }
    ~BBA()
    {
        cout << name + "BBA释放内存" << endl;
    }
};

class Tesla : public BBA, protected JiaoChe
{
public:
    Tesla() : BBA(), JiaoChe()
    {
        cout << "特斯拉初始化" << endl;
    }
    ~Tesla()
    {
        cout << "特斯拉释放内存" << endl;
    }
};

int main()
{
    // BBA a("");

    /**
     * 初始化流程： CarTools——》JiaoChe——》BBA——》CarTools——》JiaoChe——》Tesla
     * 析构流程：Tesla——》JiaoChe——》CarTools——》BBA——》JiaoChe——》CarTools
    */
    Tesla t;

    return 0;
}