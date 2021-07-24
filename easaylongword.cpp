#include<iostream>
using namespace std;
int main()
{
    int ch=0;
    cin>>ch;
    string wor;
    for(int i=0;i<ch;i++)
    {
  cin>>wor;
    if(wor.size()<=10)
    {
        cout<<wor<<endl;
    }
    else
    {
        cout<<wor[0]<<(wor.size()-2)<<wor[wor.size()-1]<<endl;
    }
    }
 
  
}