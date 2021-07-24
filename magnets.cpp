#include<iostream>
using namespace std;
int main()
{
    int n,co=0;
    string st;
    cin>>n;
    string ol="";
    for(int i=0;i<n;i++)
    {
        cin>>st;
        if(st!=ol)
        {
            ol=st;
            co++;
        }

      
    }
    cout<<co; 
}
