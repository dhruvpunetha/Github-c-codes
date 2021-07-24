#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;
int main()
{
    int t,n,cou,a,b;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        cou=n/3;
        a=b=cou;
        if(n%3==1)
        a++;
        if(n%3==2)
        b++;
        cout<<a<<" "<<b<<endl;

    }
}