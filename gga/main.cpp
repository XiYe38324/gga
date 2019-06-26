#include <iostream>
#include <fstream>
#include <string>

using namespace std;

ifstream Group1("/Users/den-o/Desktop/Group1.txt");

struct Judge{
    string JudgeName;//评委姓名
    int Score[3]={0,0,0};//评委打分
} Judge[7];
struct Student{
    string Academy;//学院
    string StudentNumber;//学号
    string StudentName;//学生姓名
    string TelephoneNumber;//手机号
} Student[3];

int main()
{
    int a=0,b=0;
    
    if (!Group1.is_open())
    {
        exit(1);
    }
    while(!Group1.eof()&& a<7)
    {
        Group1>>Judge[a].JudgeName>>Judge[a].Score[0]>>Judge[a].Score[1]>>Judge[a].Score[2];
        a++;
    }
    Group1.close();
    return 0;
    
    ifstream Group2("/Users/den-o/Desktop/Group2.txt");
    if (Group2.is_open())
    {
        exit(2);
    }
    while(!Group2.eof()&& b<3)
    {
        
        Group2>>Student[b].Academy>>Student[b].StudentNumber>>Student[b].StudentName>>Student[b].TelephoneNumber;
        b++;
    }
    Group2.close();
    return 0;
    
    int test[3][7];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<7;j++)
        {
            test[i][j]=Judge[a].Score[i];
        }
    }
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<7;j++)
        {
            cout<<test[i][j];
        }
    }
    
    
    return 0;
}
