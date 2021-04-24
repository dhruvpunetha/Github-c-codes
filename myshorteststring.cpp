#include<iostream>
using namespace std;
string LCS(string a,string b)
{
    int l1=a.size();
    int l2=b.size();
    string ar[l1+1][l2+1];
    for(int i=0;i<=l1;i++)
    {
        for(int j=0;j<=l2;j++)
        {
            if(i==0||j==0)
            {
                ar[i][j] =""; 
            }
            else if(a[i-1]==b[j-1])
            {
                 ar[i][j] = ar[i-1][j-1]+a[i-1];
            }
            else
            {
                ar[i][j] = ar[i][j-1].size() > ar[i-1][j].size() ? ar[i][j-1]:ar[i-1][j];
            }
        }
    } 
    return ar[l1][l2];
}
string SCH(string lcs,string a,string b)
{
    int a1=0,b1=0;
    string ans="";
    for(char c: lcs)
    {
        while(a[a1]!=c)
        {
            ans=ans+a[a1];
            a1++;
        }
        while(b[b1]!=c)
        {
            ans=ans+b[b1];
            b1++;
        }
        ans=ans+c;
        a1++;
        b1++;
    }
    ans=ans+a.substr(a1)+b.substr(b1);
    return ans;
}
int main()
{
    string a,b;
    cout<<"Enter 2 Strings From User "<<endl;
    cin>>a>>b;
    string lcs=LCS(a,b);
    string answer=SCH(lcs,a,b);
    cout<<"LCS is: ";
    cout<<lcs<<endl;
    cout<<"shortest common supersequence is : "<<answer<<endl;
}