#include <iostream>
#include <iomanip> // 用于控制输出格式
using namespace std;
int main() {
    double number;

    // 从标准输入读取若干个实数，直到遇到文件结束符(Ctrl+Z)
    while (cin >> number) {
        // 非科学记数法输出
        cout << "非科学记数法: " << fixed << setprecision(5) << number << endl;

        // 小数点后面保留5位有效数字输出
        cout << "小数点后保留5位: " << fixed << setprecision(5) << number << endl;

        // 科学记数法输出
        cout << "科学记数法: " << scientific << setprecision(7) << number << endl;

        // 小数点保留7位有效数字输出
        cout << "小数点保留7位: " << fixed << setprecision(7) << number << endl;

        cout << endl; // 输出空行，用于分隔每个实数的输出
    }

    return 0;
}
