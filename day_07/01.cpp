#include<iostream>
using namespace std;
#include<iomanip>

/**
 * 
setw(int n): 控制输出字段的宽度，用于设置输出的最小宽度。
left、right: 控制输出的对齐方式，left表示左对齐，right表示右对齐。
fixed: 设置浮点数输出为固定小数位数的格式。
setprecision(int n): 设置浮点数的输出精度，即小数点后的位数。

*/
int main() {
    string name;
    double score;

    // 从键盘输入名字和成绩
    cout << "请输入名字：";
    cin >> name;
    cout << "请输入成绩：";
    cin >> score;

    // 输出名字左对齐，成绩右对齐
    cout << left << setw(20) << name << right << setw(10) << fixed << setprecision(2) << score << endl;

    return 0;
}