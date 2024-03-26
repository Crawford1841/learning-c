#include<iostream>
using namespace std;
class CarTools{
    private:
        string name;
    public:
        CarTools(string name){
            cout<<name+"交通工具初始化"<<endl;
        }
        ~CarTools(){
            cout<<"交通工具释放内存"<<endl;
        }
};

class JiaoChe :public CarTools{
    private:
        string name;
    public:
        JiaoChe(string name):CarTools(name),name("hello wword"){
            this->name = name;
            cout<<"轿车初始化"<<endl;
        }
        ~JiaoChe(){
            cout<<"交通工具释放内存"<<endl;
        }
};

class BBA:public JiaoChe{
    private:
        string name;
    public:
        BBA(){
            
        }
};