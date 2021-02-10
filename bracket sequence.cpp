#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int in;
    int out;
    char ch;
    int ans[t]={0};
    int az=0;
    string s;
    for(int i=0;i<t;i++)
    {
      cin>>s;
      in =0;
      out=0;
      az=0;
      for(int j=0;j<s.length();j++)
      {
          ch=s[j];
          if(ch=='(')
          {
              in=in+1;
          }
          if(ch==')')
          {
              in=in-1;
          }
          if(ch=='?')
          {
              out=out+1;
          }
          if(in<0 && out%2==0)
          {
              ans[i]=0;
              az=1;
              break;
          }
      }
      if(((out+in)%2==0)&&az==0)
      {
          ans[i]=1;
      }
      else
      {
          ans[i]=0;
      }
    }
    for(int i=0;i<t;i++)
    {
        if(ans[i]==1)
        cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}
