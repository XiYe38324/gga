#include <iostream>
#include <fstream>
#include <string>

using namespace std;

ifstream xx(" /Users/den-o/Desktop/xx.txt");
ofstream gg("/Users/den-o/Desktop/gg.txt");

int main()
{
  
    xx.open(" /Users/den-o/Desktop/xx.txt",ios_base::in);
    if (!xx.is_open())
    {
        cerr<<"could not open file"<<endl;
        exit(0);
        }
        char ch;
        while(xx.get(ch))
        {
            cout<<ch;
        }
        xx.clear();
        xx.close();
    struct{
        char Name[15];
        int Score[3]={0,0,0};
    } Judge[7];
    

}
