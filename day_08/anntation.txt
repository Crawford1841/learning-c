/*
*	04737 c++ 自学考试2019版 第二章课后练习
*	程序设计题 3
*	需求:设计并实现一个类MyLine 
*/
//标准流 
#include<iostream>
//科学计算函数 
#include<cmath>
using namespace std;

class MyLine
{
	private:
		//点1 
		double p1_x,p1_y;
		//点2 
		double p2_x,p2_y;
	public:
		//construtor
		MyLine(double p1_x,double p1_y,double p2_x,double p2_y); 
		//直线的斜率 
		double slope();
		//点是否在线上
		bool isOnLine(double x,double y);
		//点到直线的距离
		double distance(double x,double y); 
};
MyLine::MyLine(double x1,double y1,double x2,double y2)
{
	p1_x = x1;
	p1_y = y1;
	p2_x = x2;
	p2_y = y2;
}
//斜率 公式：k=(y2-y1)/(x2-x1) 
double MyLine::slope()
{
	return (p2_y - p1_y)/(p2_x - p1_x);
}
//点是否在线上  y-beginY =k * (x - beginX)
bool MyLine::isOnLine(double x,double y)
{
    bool isOn = (y-p1_y) ==(slope()*(x-p1_x));
	return isOn;
}
//点到直线的距离 d = [AX0 + BY0 + C的绝对值]/[(A^2 + B^2)的算术平方根]
double MyLine::distance(double x,double y)
{
	double a = p2_y-p1_y;
	double b = p1_x-p2_x;
	double c = (p2_x*p1_y) - (p1_x*p2_y);
	return abs(a*x+b*y+c) / sqrt(a*a+b*b);
}

int main()
{
	MyLine test(3,3,8,8);
	cout<<test.slope()<<endl;
	cout<<test.isOnLine(6,6)<<endl;
	cout<<test.distance(6,6)<<endl;
}
