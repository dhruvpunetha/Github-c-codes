#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int totsubst=pow(2,n);
   vector<int>vec;
   int ans=INT_MAX;
   for(int i=1;i<=n;i++)
   {
   vec.push_back(i);
   }
   vector<int>g1;
    vector<int>g2;
   for(int i=0;i<totsubst;i++)
   {
    vector<int>first;
    vector<int>second;
     int sum1=0;
     int sum2=0;
    int counter=0;
    int j=i;
    while(j!=0)
    {
        if(j&1==1)
        {
first.push_back(vec[counter]);
sum1+=vec[counter];
        }
        j=j>>1;
        counter++;
    }
    j=(~i);
    counter=0;
while(j!=0)     
{
            if(j&1==1) 
            {
                second.push_back(vec[counter]);
                sum2+=vec[counter];
            }
            j=j>>1;
            counter++;
            if(counter==n) break;
        }
        if(ans>fabs(sum1-sum2))    
                {
            ans=fabs(sum1-sum2);
            g1.assign(first.begin(),first.end());
            g2.assign(second.begin(),second.end());
        }
        
    }
    cout<<"First group : ";
        for(int i:g1) cout<<i<<" ";
        cout<<endl;
    cout<<"Second group : ";
        for(int i:g2) cout<<i<<" ";
        cout<<"\n"<<ans;
}
