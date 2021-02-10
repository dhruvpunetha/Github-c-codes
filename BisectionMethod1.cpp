#include<iostream>
#include <cstdlib>
using namespace std;
float func(float x)
{
    return x*x*x-x-1;
}
void bisec(float a,float b,float er)
{
    float c;
    float err=er;
    if(func(a)*func(b)>0)
    {
        cout<<"Sorry incorrect value inputted"<<endl;
        return;
    }
    c=(a+b)/2;
    while(abs(func(c))>err)
    {
        c=(a+b)/2;
    if(func(a)*func(c)<0)
    {
        b=c;
    }
    else
    {
        a=c;
    }
    }
    cout<<"Root is "<<c<<endl;
}
int main()
{
    float a,b,er;
    cout<<"Enter the range "<<endl;
    cin>>a>>b;
    cout<<"Enter error "<<endl;
    cin>>er;
    bisec(a,b,er);

}
