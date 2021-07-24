#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main()
{
    int n;
    vector<int> vec;
    cin>>n;
    int vs;
    int mi=0;
    int mai=0;
    int dif;
    int frd=0;
    int brd=0;
    int temp;
    int ans=0;
    while(n--)
    {
        ans=0;
        mai=0;
        mi=0;
        dif=0;
        frd=0;
        brd=0;
        cin>>vs;
        for(int i=0;i<vs;i++)
        {
            cin>>temp;
            vec.push_back(temp);
            if(vec[i]>vec[mai])
            mai=i;
            if(vec[mi]>vec[i])
            mi=i;
        }
        cout<<mi;
        cout<<mai;
        dif=abs(mi-mai);
        cout<<dif;
        if((mi-0)>abs(mi-vs-1))
            frd=abs(mi-vs-1);
        else
        frd=mi-0;
    if((mai-0)>abs(mai-vs-1))
            frd=abs(mi-vs-1);
        else
        brd=mi-0;
    
    if(abs(frd-brd)>dif)
    }
}