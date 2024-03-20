#include<iostream>
using namespace std;

class Point{
    private:
        int x;
        int y;
    
    public:
        Point(int x,int y){
            this->x = x;
            this->y = y;
        }
        int getX(){
            return this->x;
        }
        int getY(){
            return this->y;
        }
};
class Triangle{
    private:
        Point *p;
        int q;
    
    public:
        Triangle(Point* p,int q){
            this->p = p;
            this->q = q;
        }
        void math(){
            int x = this->p->getX();
            int y = this->p->getY();
            int q = this->q;
            if(x+y>q && x+q>y && y+q>x){
                cout<<"三个点构成三角形"<<endl;
            }else{
                cout<<"三个点不构成三角形"<<endl;
            }
        }

};


int main(){

    Point *p = new Point(12,15);
    Triangle *q = new Triangle(p,18);
    q->math();
    return 0;
}