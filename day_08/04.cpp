#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> merge(const string  arg1,const string  arg2){
    fstream arry_1(arg1,ios::in);
    fstream arry_2(arg2,ios::in);
    vector<int> number_array;
    int line;
    while(arry_1>>line){
        number_array.push_back(line);
    }

    while(arry_2>>line){
        number_array.push_back(line);
    }
    
    arry_1.close();
    arry_2.close();

    return number_array;
}

int main(){
    vector<int>  number = merge("array_number_1.txt","array_number_2.txt");

    sort(number.begin(),number.end());
    fstream newFile("new_number.txt",ios::out);


    for(int i=0;i<number.size();i++){
        newFile<<number[i]<<endl;
    }




    
}