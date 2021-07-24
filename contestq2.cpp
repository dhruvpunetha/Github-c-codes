#include<iostream>
#include<iomanip>
#include<vector>
#include <map>
using namespace std;
int main()
{
    int t,max,tot=0;
    map<char, int> mp;
    string s;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        mp.clear();
        cin>>s;
        tot=0;
        max=s.size()/2;
        for(int j=0;j<s.size();j++)
        {
            if(tot==max)
            break;
            if(mp.find(s[j])==mp.end())
            {
                mp[s[j]]=1;
            tot++;
            }

        }
        cout<<tot<<endl;
    }
    }
