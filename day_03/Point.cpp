#include<iostream>
using namespace std;

class Point{
    private:
        int x;
        int y;
    
    public:
        Point();
        Point(int x,int y);
        int getX();
        int getY();
    ~Point(){
        cout<<"析构函数"<<endl;
    }
};
Point::Point(){}
Point::Point(int x,int y){
    this->x = x;
    this->y = y;
}
int Point::getX(){
    return this->x;
}
int Point::getY(){
    return this->y;
}
class Triangle{
    private:
        Point *p;
        int q;
    
    public:
        Triangle(Point *p,int q);
        void math();
};

Triangle::Triangle(Point *p,int q){
    this->q = q;
    this->p = p;
}
void Triangle::math(){
    int x = this->p->getX();
    int y = this->p->getY();
    int q = this->q;
    if(x+y>q && x+q>y && y+q>x){
        cout<<"三个点构成三角形"<<endl;
    }else{
        cout<<"三个点不构成三角形"<<endl;
    }
}

int main(){
    Point p0;
    Point p1(2,3);
    Point p2(p0);
    return 0;
}