#include<iostream>
using namespace std;

class OutString{
    private:
        int *a = new int[10];
    public:
        OutString();
        void reverse();
};

OutString::OutString(){
    cout<<"请输入数据"<<endl;
    for(int i=0;i<10;i++){
        cin>>this->a[i];
    }
}
void OutString::reverse(){
    for(int i=9;i>=0;i--){
        cout<<a[i]<<endl;
    }
}


int main(){

    OutString a;
    a.reverse();

    return 0;
}