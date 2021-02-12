#include<iostream>
using namespace std;
struct triplet
{
    int gcd;
    int x;
    int y;
};
triplet gcdEuclid(int a,int b)
{
    if(b==0)
    {
     triplet ans;
     ans.gcd=a;
     ans.x=1;
     ans.y=0;
     return ans;
    }
    triplet smlans=gcdEuclid(b,a%b);
    triplet ans;
    ans.gcd=smlans.gcd;
    ans.x=smlans.y;
    ans.y=smlans.x-((a/b)*smlans.y);
    return ans;

}
int main()
{
    int a,b;
    cout<<"ENTER A AND B \n";
    cin>>a>>b;
    triplet ans=gcdEuclid(a,b);
    cout<<"GCD "<<ans.gcd<<" x  "<<ans.x<<" Y "<<ans.y;
}
