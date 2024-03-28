#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
bool isTriangleValid(double a, double b, double c) {
    // 三角形的任意两边之和必须大于第三边
    return (a + b > c) && (b + c > a) && (a + c > b);
}

double calculateTriangleArea(double a, double b, double c) {
    // 海伦公式计算三角形面积可求得任意三角的面积
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    double side1, side2, side3;

    // 输入三角形的三条边
    cout << "请输入三角形的三条边长：";
    cin >> side1 >> side2 >> side3;

    // 判断输入的三条边是否合理
    while (!isTriangleValid(side1, side2, side3)) {
        cout << "输入的边长无法构成三角形，请重新输入：" << endl;
        cin >> side1 >> side2 >> side3;
    }

    // 计算三角形的面积
    double area = calculateTriangleArea(side1, side2, side3);
    cout << "三角形的面积为：" << area << endl;

    // 将结果存入文件中
    ofstream outputFile("triangle_area.txt");
    if (outputFile.is_open()) {
        outputFile << "三角形的三边长分别为：" << side1 << ", " << side2 << ", " << side3 << endl;
        outputFile << "三角形的面积为：" << area << endl;
        outputFile.close();
        cout << "结果已成功存入文件 triangle_area.txt" << endl;
    } else {
        cerr << "无法打开文件 triangle_area.txt" << endl;
    }

    return 0;
}
