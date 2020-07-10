#include<iostream>
using namespace std;
int linSearch(int index,int a[],int n)
{
    for(int i=index;i<0;i--)
    {
        if(a[i]==n)
            return i;
        else
            return -1;
    }
}
int main()
{
	int num,N;
	cin >> N;
	int arr[N];
	cin >> num;
	for(int i=1;i<=N;i++)
	{
		cin >> arr[i];
	}
	cout << linSearch(N,arr,num);
	return 0;
}
