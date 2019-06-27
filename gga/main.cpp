#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Judge{
    string JudgeName;//评委姓名
    int Score[3]={0,0,0};//评委打分
} J[7];
struct Student{
    string Academy;//学院
    string StudentNumber;//学号
    string StudentName;//学生姓名
    string TelephoneNumber;//手机号
    double score[7];
    int average;
} S[3];

int main()
{
    int a=0,b=0;
    
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
            S[i].score[j]=J[j].Score[i];
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
        int sum=0;
        int max=S[i].score[0],min=S[i].score[0];
        for(int j=0;j<7;j++)
        {
            if(S[i].score[j]>max)
                max=S[i].score[j];
            if(min>S[i].score[j])
                min=S[i].score[j];
            sum+=S[i].score[j];
        }
    // cout<<sum<<" "<<min<<" "<<max<<endl;
          S[i].average=(sum-min-max)/5;
        cout<<endl;
    }
  
    
    
    return 0;
}
