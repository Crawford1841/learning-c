#include<iostream>
using namespace std;

class Course{
    private:
        string c_name;
        int c_score;
        int c_time;
        string c_type;
        string c_speciality;
    public:
        Course(string c_name,int c_score,int c_time,string c_type,string c_speciality){
            this->c_name = c_name;
            this->c_score = c_score;
            this->c_time = c_time;
            this->c_type = c_type;
            this->c_speciality = c_speciality;
        }

        string getCname(){
            return this->c_name;
        }
        int getCscore(){
            return this->c_score;
        }
        int getCtime(){
            return this->c_time;
        }
        string getCtype(){
            return this->c_type;
        }
        string getCspciality(){
            return this->c_speciality;
        }
        ~Course(){
            cout<<"释放Course menory"<<endl;
        }

};

int main(){
    Course *c = new Course("计算机科学与技术",12,23,"main","computer science");
    string cName = c->getCname();
    cout<<cName<<c->getCtype()<<c->getCspciality()<<c->getCtime()<<endl;
    return 0;
}