#include <iostream>
#include <iomanip> // 用于控制输出格式
using namespace std;
int main() {
    int number;

    // 从标准输入读取若干个整数，直到遇到文件结束符(Ctrl+Z)
    while (cin >> number) {
        // 以十六进制输出，宽度为10个字符，左边补0
        stringstream hex_ss;
        hex_ss << hex << number; // 转换成十六进制字符串
        string hex_str = hex_ss.str(); // 获取字符串
        cout << "十六进制: " << setw(10) << setfill('0') << hex_str << endl;

        // 以八进制输出，宽度为10个字符，左边补0
        stringstream oct_ss;
        oct_ss << oct << number; // 转换成八进制字符串
        string oct_str = oct_ss.str(); // 获取字符串
        cout << "八进制: " << setw(10) << setfill('0') << oct_str << endl;

        cout << endl; // 输出空行，用于分隔每个整数的输出
    }

    return 0;
}
