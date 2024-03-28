#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream file("data.txt");
    if (!file.is_open())
    {
        cerr << "无法打开文件" << endl;
        return 0;
    }

    int sum = 0;
    int count = 0;
    int number;

    // 从文件中读取整数并计算总和和个数
    while (file >> number)
    {
        sum += number;
        count++;
    }

    // 关闭文件
    file.close();

    // 计算平均值
    double average = count > 0 ? static_cast<double>(sum) / count : 0.0;

    // 输出结果
    cout << "文件中保存的整数个数为: " << count << endl;
    cout << "平均值为: " << average << endl;

    return 0;
}