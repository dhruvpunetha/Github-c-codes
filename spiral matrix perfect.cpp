#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n][n];
    int nn=n*n;
    int ar2[nn];
    for(int i=0;i<n;i++)
    {
     for(int j=0;j<n;j++)
     {
         cin>>ar[i][j];
     }
    }
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<n;j++)
    {
        cout<<ar[i][j]<<" ";
    }
    cout<<endl;
    }
    for(int i=0;i<=n/2;i++)
    {
        for(int j=i;j<n-i;j++)
        {
            cout<<ar[i][j]<<" ";
        }
        for(int k=i+1;k<n-i;k++)
        {
            //cout<<"2nd k and i is"<<k<<" "<<i<<endl;
            cout<<ar[k][n-i-1]<<" ";
        }
        for(int j=n-2-i;j>=i;j--)
        {
            cout<<ar[n-i-1][j]<<" ";

        for(int j=n-2-i;j>i;j--)
        {
            cout<<ar[j][i]<<" ";
        }
    }
}
