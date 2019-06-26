#include <iostream>
#include <fstream>
#include <string>

using namespace std;


ofstream gg("/Users/den-o/Desktop/gg.txt");

struct X{
    string JudgeName;//评委姓名
    int Score[3]={0,0,0};//评委打分
} Judge[7];
struct Y{
    string Academy;//学院
    string StudentNumber;//学号
    string StudentName;//学生姓名
    string TelephoneNumber;//手机号
    int aa[7];
} Student[3];

int main()
{
    int a=0,b=0;
    ifstream xx(" /Users/den-o/Desktop/xx.txt",ios::in);
    if (!xx.is_open())
    {
        cerr<<"could not open file"<<endl;
        exit(0);
        }
    while(!xx.eof()&& a<7)
    {
        xx>>Judge[a].JudgeName>>Judge[a].Score[0]>>Judge[a].Score[1]>>Judge[a].Score[2];
        a++;
    }
        xx.close();
    return 0;
    
    ifstream yy(" /Users/den-o/Desktop/yy.txt",ios::in);
    if (!yy.is_open())
    {
        cerr<<"could not open file"<<endl;
        exit(0);
    }
    while(!yy.eof()&& b<3)
    {
        yy>>Student[b].Academy>>Student[b].StudentNumber>>Student[b].StudentName>>Student[b].TelephoneNumber;
        b++;
    }
    yy.close();
    return 0;
    
    for(int i)

    

}
