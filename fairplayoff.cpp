#include<iostream>
using namespace std;
int main()
{
    long long int n,a,b,c,d;
    cin>>n;
    int max,max2;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c>>d;
        if(a>b)
        max=a;
        else 
        max=b;
        if(c>d)
        max2=c;
        else
        max2=d;
        if((a>max2&&b>max2)||(c>max&&d>max))
        cout<<"NO"<<endl;
        else 
        cout<<"YES"<<endl;
    }
    return 0;
}
