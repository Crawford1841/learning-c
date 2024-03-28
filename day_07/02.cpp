#include <iostream>
using namespace std;

int main() {
    string line;

    // 从标准输入读取一行文字
    cout << "请输入一行文字：";
    cin>>line;

    // 颠倒文字顺序
    string reversed_line;
    for (int i = line.length() - 1; i >= 0; --i) {
        reversed_line += line[i];
    }

    // 输出颠倒顺序后的文字
    cout << "颠倒顺序后的文字为：" << reversed_line << endl;

    return 0;
}
