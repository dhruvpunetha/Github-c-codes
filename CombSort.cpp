#include<iostream>
using namespace std;
int gap(int g)    //calculating the next gap
{
    g=(g*10)/13;    //taking 1.3 as the dividing factor
    if(g>1)
    return g;
    else
    return 1;
}
void ascenCombSort(int ar[], int siz)   //for ascending
{
int temp;   //temp variable for swapping
int curgap=siz;
bool swap=true;   //so that its true for first time
while(swap==true||curgap!=1)
{
    curgap=gap(curgap);  //finding new gap
    cout<<"Current gap "<<curgap<<endl;

    swap=false; //checking for swap
    for(int i=0;i<siz-curgap;i++)
    {
        cout<<"Current array"<<endl;
        for (int i = 0; i < siz; i++)
    {
        cout << ar[i] << " ";
    }
        if(ar[i]>ar[i+curgap])  //comparing and swapping with current element
        {
            temp=ar[i];
            ar[i]=ar[i+curgap];
            ar[i+curgap]=temp;
            swap=true;
        }
    }
    cout<<"Swap :"<<swap<<endl;
}
}
void descenCombSort(int ar[],int siz)
{
int temp;
int curgap=siz;
bool swap=true;    //so that its true for first time
while(swap==true||curgap!=1)
{
    curgap=gap(curgap);  //finding new gap
    swap=false; //checking for swap
    for(int i=0;i<siz-curgap;i++)
    {
        if(ar[i]<ar[i+curgap]) //comparing and swapping with current element
        {
            temp=ar[i];
            ar[i]=ar[i+curgap];
            ar[i+curgap]=temp;
            swap=true;
        }
    }
}
}
int main()
{
    int n; //for the size of array
    int choice;
    cout << "Enter Size Of The Array" << endl;
    cin >> n; //entering array size from user
    int ar[n];
    cout << "Enter array elements" << endl;
    for (int i = 0; i < n; i++) //loop for entering array elements
    {
        cin >> ar[i];
    }
    cout << "Press 1 for ascending 2 for descending" << endl; // asking user to choose between ascending or descending
    cin >> choice;
    if (choice == 1)
        ascenCombSort(ar, n);
    else
        descenCombSort(ar, n);
    cout << "Sorted array is :"; //displaying sorted array
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
}