#include<iostream>
#include<cmath>
using namespace std;

class Line{
    private:
        double x1;
        double y1;
    public:
        Line(double x1,double y1){
            this->x1 = x1;
            this->y1 = y1;
        }
    /*
        直线斜率定义：一由一条直线与右边X轴所成的角的正切。
        ########直线与X轴正向的夹角叫倾斜角 范围是[0,180°) 左闭右开#######
        公    式 k=(y2-y1)/(x2-x1)
    */
        void slope(double x2,double y2){
             double k = (y2-this->y1)/(x2 - this->x1);
             if(k==x1){
                cout<<"该直线没有斜率"<<endl;
             }else{
                cout<<"该直线的斜率是："<<k<<endl;
             }
        }
    /*通过判断斜率是否相等 判断是否在直线
    * ( endY - beginY ) / ( endX - beginX ) ==( Y - beginY ) / ( X - beginX )
    * 通过直线斜率 代入直线方程判断
    * 直线方程： y-beginY =k * (x - beginX)
    * */
        void pointOnSolpe(double x2,double y2){
            double k  = (y2-this->y1)/ (x2 - this->x1);
            if(y2 - this->y1==k * (x2 - this->x1)){
                cout<<"该坐标在直线上！"<<endl;
            }else{
                cout<<"该坐标不在直线上！"<<endl;
            } 
        }
        /**
         * 求点到直线Ax + By + C = 0的距离公式为：
            d = |AX0 + BY0 + C| /[(A^2 + B^2)的算术平方根]
            abs:绝对值
            sqrt:平方根
            pow:幂
        */
       double distanceToPoint(double x2,double y2){
            double slope = (y2 - this->y1) / (x2 - this->x1);
            return abs(slope * x2 - y2 + this->y1) / sqrt(pow(slope,2)+1);
       }

};


int main(){ 


    return 0;
}