#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main() {
    // 读取 data.txt 中的整数
    ifstream inputFile("nbsp_number.txt");
    if (!inputFile.is_open()) {
        cerr << "无法打开 data.txt 文件" << endl;
        return 1;
    }

    vector<int> data;
    string line;
    while (getline(inputFile, line)) {
        istringstream iss(line);
        int num;
        while (iss >> num) {
            data.push_back(num);
        }
    }
    inputFile.close();

    // 分离奇数和偶数
    vector<int> oddNumbers, evenNumbers;
    for (int num : data) {
        if (num % 2 != 0) {
            oddNumbers.push_back(num);
        } else {
            evenNumbers.push_back(num);
        }
    }

    // 将奇数保存到 le1.txt
    ofstream le1File("le1.txt", ios::out);
    if (!le1File.is_open()) {
        cerr << "无法创建 le1.txt 文件" << endl;
        return 1;
    }
    for (int num : oddNumbers) {
        le1File.write(reinterpret_cast<const char*>(&num), sizeof(int));
    }
    le1File.close();

    // 将偶数保存到 flc2.txt
    ofstream flc2File("flc2.txt", ios::out);
    if (!flc2File.is_open()) {
        cerr << "无法创建 flc2.txt 文件" << endl;
        return 1;
    }
    for (int num : evenNumbers) {
        flc2File.write(reinterpret_cast<const char*>(&num), sizeof(int));
    }
    flc2File.close();

    cout << "已将奇数保存到 le1.txt，偶数保存到 flc2.txt" << endl;
    return 0;
}
