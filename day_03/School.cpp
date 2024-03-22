#include <iostream>
using namespace std;

class Course
{
private:
    string c_name, c_type, c_speciality;
    int c_score, c_time;
    static int count;

public:
    Course();
    Course(Course &c);
    Course(string c_name, int c_score, int c_time, string c_type, string c_speciality);
    ~Course();
    string getCname();
    int getCscore();
    int getCtime();
    string getCtype();
    string getCspciality();
    int getCount();
};
Course::Course()
{
    this->count++;
}
Course::Course(Course &c)
{
    this->c_name = c.c_name;
    this->c_type = c.c_type;
    this->c_speciality = c.c_speciality;
    this->c_score = c.c_score;
    this->c_time = c.c_time;
    this->count++;
}
Course::Course(string c_name, int c_score, int c_time, string c_type, string c_speciality)
{
    this->c_name = c_name;
    this->c_score = c_score;
    this->c_time = c_time;
    this->c_type = c_type;
    this->c_speciality = c_speciality;
    this->count++;
}
Course::~Course()
{
    cout << "释放Course menory" << endl;
}
string Course::getCname()
{
    return this->c_name;
}
int Course::getCscore()
{
    return this->c_score;
}
int Course::getCtime()
{
    return this->c_time;
}
string Course::getCtype()
{
    return this->c_type;
}
string Course::getCspciality()
{
    return this->c_speciality;
}
int Course::getCount(){
    return this->count;
}
int Course::count = 0;
int main()
{
    Course c1("计算机科学与技术", 12, 23, "main", "computer science");
    Course c2(c1);
    string cName = c2.getCname();
    cout << c1.getCname() << endl;
    cout << cName << c2.getCtype() << c2.getCspciality() << c2.getCtime() << endl;
    cout<<c2.getCount()<<endl;
    return 0;
}