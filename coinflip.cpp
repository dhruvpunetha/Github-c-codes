#include<iostream>
using namespace std;
int main()
{
 int t,g,i,n,q;
 int count=0;
 cin>>t;
 while(t>0)
 {
     t--;
     cin>>g ;
     while(g>0)
     {
         g--;
         cin>>i>>n>>q;
         count=0;
         if(q==1)
         {
         if(i==1)
         {
             count=n/2;   
         }   
         else
         {
             count=n/2+1;
         } 
         }
         else
         {
             if(i==1)
             {
              count=n/2+1;   
             }
             else
             {
                  count=n/2;   
             }
         }
         cout<<count<<endl;
     }
 }   
}










#include<iostream>
using namespace std;
int main()
{
 int t,g,i,n,q;
 int count=0;
 cin>>t;
 while(t>0)
 {
     t--;
     cin>>g ;
     while(g>0)
     {
         g--;
         cin>>i>>n>>q;
         count=0;
         int ar[n];
         for(int q=0;q<n;q++)
         ar[q]=i;
         for(int j=0;j<n;j++)
         {
             for(int k=0;k<=i;k++)
             {
                if(ar[k]==1)
                {
                    ar[k]=2;
                }
                else
                {
                    ar[k]=1;
                }
             }
         }
         for(int j=0;j<n;j++)
         {
             if(ar[j]!=q)
             count++;
         }
         cout<<count<<endl;
     }
 }   
}

