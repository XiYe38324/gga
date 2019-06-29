#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Judge{
    string JudgeName;//评委姓名
    double Score[3]={0,0,0};//评委打分
} J[7];
struct Student{
    string Academy;//学院
    string StudentNumber;//学号
    string StudentName;//学生姓名
    string TelephoneNumber;//手机号
    double Grade[7];//学生成绩
    double Average;//平均分
} S[3];

int main()
{
    int a=0,b=0,c=0;
    
    ifstream Group1("/Users/den-o/Desktop/Group1.txt");
    while(!Group1.eof()&& a<7)
    {
        Group1>>J[a].JudgeName>>J[a].Score[0]>>J[a].Score[1]>>J[a].Score[2];
    //  cout << J[a].JudgeName<<" "<<J[a].Score[0]<<" "<<J[a].Score[1]<<" "<<J[a].Score[2]<<endl;
        a++;
    }
    Group1.close();
    
    ifstream Group2("/Users/den-o/Desktop/Group2.txt");
    while(!Group2.eof()&& b<3)
    {
        Group2>>S[b].Academy>>S[b].StudentNumber>>S[b].StudentName>>S[b].TelephoneNumber;
    //  cout << S[b].Academy<<" "<<S[b].StudentNumber<<" "<<S[b].StudentName<<" "<<S[b].TelephoneNumber<<endl;
        b++;
    }
    Group2.close();
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<7;j++)
        {
            S[i].Grade[j]=J[j].Score[i];
        }
        cout<<endl;
    }
    /*
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<7;j++)
        {
            cout<<S[i].score[j]<<" " ;
            int n=0;
            n++;
        }
        cout << endl;
        
    }
    */
    for(int i=0;i<3;i++)
    {
        double sum=0;
        double max=S[i].Grade[0],min=S[i].Grade[0];
        for(int j=0;j<7;j++)
        {
            if(S[i].Grade[j]>max)
                max=S[i].Grade[j];
            if(min>S[i].Grade[j])
                min=S[i].Grade[j];
            sum+=S[i].Grade[j];
        }
    // cout<<sum<<" "<<min<<" "<<max<<endl;
          S[i].Average=(sum-min-max)/5;
        cout<<endl;
    


    ofstream Group3("/Users/den-o/Desktop/Group3.txt");
    while(!Group3.eof()&& c<3)
    {
        Group3<<S[c].Academy<<" "<<S[c].StudentNumber<<" "<<S[c].StudentName<<" "<<S[c].TelephoneNumber<<" "<<S[c].Average<<endl;
        //  cout << S[b].Academy<<" "<<S[b].StudentNumber<<" "<<S[b].StudentName<<" "<<S[b].TelephoneNumber<<endl;
        c++;
    }
    Group2.close();
    
    for(int i=0;i<3;i++)
    {
        cout<<S[i].Academy<<" "<<S[i].StudentNumber<<" "<<S[i].StudentName<<" "<<S[i].TelephoneNumber<<" "<<S[i].Average<<endl;
    }
    
    return 0;
}
