#include<iostream>
using namespace std;

class Point{
    private:
        int x,y;
        static int create_count;
    
    public:
        Point();
        /**
         * c++中如果没有显式创建复制构造函数，c++会自动默认创建一个复制构造函数
        */
        Point(Point &p);
        Point(int x,int y);
        int getX();
        int getY();
        int showCreateCount();
    ~Point(){
        cout<<"析构函数"<<endl;
    }
};
int Point::create_count = 0;

Point::Point(){
    this->create_count++;
    cout<<"无参构造"<<endl;
}
Point::Point(Point &p){
    this->x = p.getX();
    this->y = p.getY();
    this->create_count++;
}
Point::Point(int x,int y){
    this->x = x;
    this->y = y;
    this->create_count++;
    cout<<"带参构造"<<endl;
}
int Point::getX(){
    return this->x;
}
int Point::getY(){
    return this->y;
}
int Point::showCreateCount(){
    return this->create_count;
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
    //复制构造函数
    Point p2(p0);
    cout<<"Ponit一个创建了："<<p0.showCreateCount()<<endl;
    return 0;
}