#include <iostream>
#include <fstream>
#include <string>
using namespace std;
// 删除行注释
std::string removeLineComments(const std::string& line) {
    size_t pos = line.find("//");
    if (pos != std::string::npos) {
        return line.substr(0, pos);
    }
    return line;
}

// 删除块注释
std::string removeBlockComments(const std::string& content) {
    std::string result;
    size_t start = content.find("/*");
    size_t end = content.find("*/");
    while (start != std::string::npos && end != std::string::npos) {
        result += content.substr(0, start);
        content = content.substr(end + 2);
        start = content.find("/*");
        end = content.find("*/");
    }
    result += content;
    return result;
}

int main() {
    std::ifstream inputFile("anntation.txt"); // 输入源文件名
    std::ofstream outputFile("new_anntation.txt"); // 输出新文件名

    if (!inputFile || !outputFile) {
        std::cerr << "无法打开文件！" << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        line = removeLineComments(line);
        outputFile << line << std::endl;
    }

    inputFile.close();
    outputFile.close();

    std::cout << "已生成新文件 output.cpp" << std::endl;

    return 0;
}
