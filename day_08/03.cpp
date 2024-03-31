#include <iostream>
#include <fstream>
#include <Windows.h>
#include <tchar.h>
using namespace std;

bool clearSingle(const char *old_file, const char *new_file)
{
    fstream oldFile(old_file,ios::in);
    fstream newFile(new_file,ios::out);
    if (oldFile.is_open() && newFile.is_open())
    {
            const int size = 1024;// 设定每行的缓存大小
            char temp[size];
            oldFile.seekg(0,ios::beg);//指针移向文件头
            while(oldFile.getline(temp,size)){// 逐行读取，遇单行注释则终止
                for(int i=0;i<size;i++){
                    if(temp[i]=='/' && temp[i+1]=='/'){
                        temp[i]=0;//表示截断
                    }
                }
                if(strlen(temp)!=0){
                    newFile<<temp<<endl;
                }
            } 
            oldFile.close();
            newFile.close();
            cout<<"删除单行注释成功！"<<endl;
        return true;
    }else{
        cout << "源文件无法打开或无法创建新文件，请重试！\n";
        return false;
    }
}

bool clearMutiple(const char *old_file, const char *new_file){
    fstream oldFile(old_file,ios::in);
    fstream newFile(new_file,ios::out);
    if (oldFile.is_open() && newFile.is_open()){
        const int size = 250;
        char temp[size];
        bool meetFlag = false;//是否遇到多行注释
        oldFile.seekg(0,ios::beg);
        while(oldFile.getline(temp,size)){
            int i;
            for(i=0;i<size-1;i++){
                if(temp[i] == '\n'){
                    break;
                }
                /*
                    没遇见标记前，开启起始行检测标记
                */
               if (!meetFlag && temp[i] == '/' && temp[i + 1] == '*')
				{
					temp[i] = 0;
					meetFlag = !meetFlag;   //遇见了标记，故重置标记
				}
               if(temp[i]=='*' && temp[i+1]=='/'){// 找到了标记的结束位置
                    meetFlag = !meetFlag; // 重置标记
                    int j,k;
                    for(j=i+2,k=0;j<size;j++){
                        //如果是换行符说明到达块注释尽头，则直接跳过
                        if(temp[j]=='\n'){
                            break;
                        }
                        //如果发现没有换行，则向前移
                        temp[k++] = temp[j];
                    }
                    temp[--j] = 0;
               }
            }
            if(!meetFlag && strlen(temp)>0){
                newFile<<temp<<endl;
            }
        }
        oldFile.close();
        newFile.close();
        cout<<"删除注释成功！"<<endl;
    }else{
        cout << "源文件无法打开或无法创建新文件，请重试！\n";
        return false;
    }
}


void clear(const char *old_file, const char *new_file){
    clearSingle(old_file,"temp.txt");
    clearMutiple("temp.txt", new_file);
    DeleteFile(_T("temp.txt"));   //删除缓存文件

}
int main()
{
    clear("anntation.txt", "new_anntation.txt");
}
