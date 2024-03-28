#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string input_filename, output_filename;
    cout << "请输入要读取的文件名称" << endl;
    cin >> input_filename;
    cout << "请输入要保存的文件名" << endl;
    cin >> output_filename;
    ifstream input_file(input_filename);
    ofstream output_file(output_filename);

    if (!input_file.is_open() && !output_file.is_open())
    {
        cerr << "无法打开输入文件或者输出文件" << endl;
        return 0;
    }
    string line;
    int line_number = 1;
    while (getline(input_file, line))
    {
        output_file << line_number << ":" << line << endl;
        line_number++;
    }

    // 关闭文件
    output_file.close();
    input_file.close();
    cout << "行号已成功添加并保存到文件 " << output_filename << " 中。" << std::endl;

    return 0;
}