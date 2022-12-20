#include<bits/stdc++.h>
#include<iostream>
// author rohit anchal
using namespace std;
int main()
{
    vector<int> a = {1,2,3,4,5,6,7};
    int temp=0;
    for(int i=0;i<a.size();i++)
    {
        for(int j=i;j<a.size();j++)
        {
            if(a[i]>a[j+1])
            {
                temp=a[i];
                a[i]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    
    cout<<"Acending order is : ";
    for(int i=1;i<=a.size();i++)
    {
        cout<<a[i]<<"  ";
    }

}