#include<iostream>
using namespace std;
#include<iomanip>


int main(){
    cout<<"请输入名字和成绩"<<endl;
    string name;
    int scope;
    cin>>name;
    cin>>scope;
    cout<<right<<setw(10)<<scope<<left<<name;
    return 0;
}