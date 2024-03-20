#include<iostream>
using namespace std;

int main(){
    cout<<"请输入数组的长度"<<endl;
    int n;
    cin>>n;
    string * a = new string[n];
    cout<<"请输入字符串"<<endl;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        a[i] = str;
    }
    string max = a[0];
    string min = a[0];
    int avgLen = 0;
    for(int i=0;i<n;i++){
        string str = a[i];
        if(str.length()>max.length()){
            max = str;
        }
        if(str.length()<min.length()){
            min = str;
        }
        avgLen +=str.length();
    }
    cout<<"最长的字符串为："<<max<<endl;
    cout<<"最短的字符串为："<<min<<endl;
    cout<<"平均长度为："<<avgLen/n<<endl;
    return 0;
}