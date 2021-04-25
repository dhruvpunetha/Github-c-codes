#include<iostream>
using namespace std;
void ascenGnomeSort(int ar[],int siz)
{
    int i=1;
    int temp;
    while(i<siz)
    {
        if(i==0)
        {
            i=1;
        }
        if(ar[i]<ar[i-1])
        {
            temp=ar[i];
            ar[i]=ar[i-1];
            ar[i-1]=temp;
            i--;
        }
        else
        {
            i++;
        }
    }
}
void descenGnomeSort(int ar[],int siz)
{
    int i=1;
    int temp;
    while(i<siz)
    {
        if(i==0)
        {
            i=1;
        }
        if(ar[i]>ar[i-1])
        {
            temp=ar[i];
            ar[i]=ar[i-1];
            ar[i-1]=temp;
            i--;
        }
        else
        {
            i++;
        }
    }
}
int main()
{
int n;   //for the size of array
int choice;
cout<<"Enter Size Of The Array"<<endl;
cin>>n;   //entering array size from user
int ar[n];
cout<<"Enter array elements"<<endl;
for(int i=0;i<n;i++)   //loop for entering array elements
{
    cin>>ar[i];
}
cout<<"Press 1 for ascending 2 for descending"<<endl;
cin>>choice;
if(choice==1)
ascenGnomeSort(ar,n);
else
descenGnomeSort(ar,n);
cout<<"Sorted array is :";
for(int i=0;i<n;i++)
{
    cout<<ar[i]<<" ";
}
}
