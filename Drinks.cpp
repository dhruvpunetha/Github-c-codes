#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;
int main()
{
    int nu,tem;
    cin>>nu;
     long double sum=0.0;
    vector<int> vec;
    for(int i=0;i<nu;i++)
    {
        cin>>tem;
        vec.push_back(tem);
        sum=sum+tem;
    }
    sum=sum/(vec.size());
    cout<<fixed<<setprecision(12)<<sum<<endl;
}