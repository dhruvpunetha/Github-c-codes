#include<iostream>
using namespace std;
long long anscalc(long long a,long long b)
{
    long long sum=1;
    if(b>a/2)
    {
        b=a-b;
    }
    for(int i=1;i<=b;i++)
    {
        sum=sum*a;
        a--;
        sum=sum/i;
    }
    return sum;

}
int main()
{
    int n;
    long long a,b;
    long long a1,b1;
    cin>>n;
    long long ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>a;
        cin>>b;
        a1=a-1; //N+R-1CR but r are fix so subtracted
        b1=a-b;
        //to eleminate problem of factorial calc we can calc partial value so that it doesnt exceed our value
        ar[i]=anscalc(a1,b1);
    }
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<endl;
    }

}