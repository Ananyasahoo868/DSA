#include<bits/stdc++.h>
using namespace std;
int rotateOne(int arr[],int n)
{
    int temp = arr[0];
    for(int i=0;i<n-1;i++)
    {
        arr[i] = arr[i+1];
    }
    int i;
    arr[i] = temp;
}
int leftrotate(int arr[],int n, int d)
{
    for(int i=0;i<d;i++)
    {
        rotateOne(arr,n);
    }
}
int printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<< arr[i];
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int d;
    cin >> d;
    leftrotate(arr,n,d);
    printarray(arr,n);
}
