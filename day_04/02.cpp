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
        friend ostream& operator<<(ostream& out,const Point &point){
            out<<"("<<point.x<<","<<point.y<<")";
            return out;
        }
        friend istream& operator>>(istream& in,Point & point){
            cout<<"Enter x-cordinate;";
            in>>point.x;
            cout<<"enter y-cordinate;";
            in>>point.y;
            return in;
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

    Point p(12,15);
    cout<<"Point p:"<<p<<endl;

    Triangle q(&p,18);
    q.math();
    return 0;
}