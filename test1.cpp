#include <iostream>
using namespace std;
void left_rotate(int arr[],int n)
{
    int temp = arr[0],i;
    for(i=0;i<n-1;i++)
        arr[i] = arr[i+1];
    arr[i] = temp;
}
void left_rorate1(int arr[],int n,int d)
{
    int i;
    for(i=0;i<d;i++)
        left_rotate(arr,n);
}
void print_array(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    left_rorate1(arr,n,2);
    print_array(arr,n);
    return 0;
}
