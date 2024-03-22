#include<iostream>
#include<cmath>
using namespace std;


class Cylider{
    private:
        double r;
        double h;
    public:
        Cylider(double r,double h);
        double perimeter();
        double perimeterCircel();
        double volume();
};

Cylider::Cylider(double r,double h){
    this->r = r;
    this->h = h;
}
/**
 * 周长 = 2 * π * 半径（r）
*/
double Cylider::perimeter(){
    return 2 * 3.14 * r;
}
/**
 * 底圆面积 = π * 半径（r）^2
*/
double Cylider::perimeterCircel(){
    return 3.14 * (r * r);
}

/**
 * 体积：底面积 * 高（h）
*/

double Cylider::volume(){
    return perimeterCircel() * h;
}

int main(){
    Cylider c(5,8);
    cout<<"周长："<<c.perimeter()<<endl;
    cout<<"面积："<<c.perimeterCircel()<<endl;
    cout<<"体积："<<c.volume()<<endl;
    return 0;
}