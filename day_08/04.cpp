#include<iostream>
#include<fstream>
using namespace std;

int * merge(const string  arg1,const string  arg2){
    fstream arry_1(arg1,ios::in);
    fstream arry_2(arg2,ios::in);
}


int main(){
    fstream arry_1("array_number_1.txt",ios::in);
    fstream arry_2("array_number_2.txt",ios::in);
    int size=0;
    string str;
    while(getline(arry_1,str)){
        size++;
    }

    while(getline(arry_2,str)){
        size++;
    }
    
    int number[size];
    while(getline(arry_1,str)){
        number[size] = stoi(str);
    }

    while(getline(arry_2,str)){
        number[size] = stoi(str);
    }


    for (int value :number)
     {
      cout << value << endl;    
     };




    
}