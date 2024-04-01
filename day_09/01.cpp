#include<iostream>
using namespace std;
// 1.编写一个函数模板，返回两个数中的最大值。使用整型、浮点型及字符型来测试模板。
template<typename T>
T maxNum(T a,T b){
    return a>b?a:b;
}
// 2.编写一个函数模板，实现将n个数据进行由小到大排序的功能。使用整型、浮点型及字符型来测试模板。
template<typename X>
void sort(X arry[],int n){
    for(int i=0;i<n;i++){
        for(int j=n-1;j>0;j--){
            if(arry[j]<arry[i]){
                int a = arry[i];
                arry[i] = arry[j];
                arry[j] = a;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<arry[i]<<"\t";
    }
}
// 3.编写一个函数模板，求 aray 数组前 size 个元素之和。使用整型、浮点型及字符型来测试模板。
template<typename Y>
void sumNum(Y arry[],int size){
    int sum = 0;
    for(int i=0;i<size;i++){
        sum+=arry[i];
    }

    cout<<"合为："<<sum<<endl;
}

int main() {
    // 测试 max 函数
    cout << maxNum<int>(3, 7) << endl; // 输出：7
    cout << maxNum<double>(3.2, 2.9) << endl; // 输出：3.2
    cout << maxNum<char>('a', 'z') << endl; // 输出：z

    // 测试 sort 函数
    int arr1[] = {3, 2, 5, 1, 6};
    sort<int>(arr1, 5);

    // 测试 sum 函数
    double arr2[] = {1.2, 2.3, 3.4, 4.5, 5.6,5.23};
    sumNum<double>(arr2, 5);
}