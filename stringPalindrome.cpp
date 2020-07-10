// palindrome check
#include<bits/stdc++.h>
using namespace std;
void printSubStr(string str,int l,int r)
{
    for(int i=l; i<=r ; ++i)
        cout<<str[i]<<endl;
}
int longestPalindrome(string str)
{
    int n=str.size();
    bool table[n][n];
    memset(table,0,sizeof(table));
    int maxLength = 1;
    int start = 0;
    for (int i=0;i<n;++i)
    {
        if(str[i] == str[i+1])
        {
            table[i][i+1] = true;
            start = i;
            maxLength = 2;
        }
    }
    for(int k = 3;k <=n ;++k)
    {


        for(int i=0;i<n-k+1;++i)
        {
            int j =i+k-1;
            if (table[i+1][j-1] && str[i] == str[j])
            {
                table[i][j] = true;
                if(k>maxLength)
                {
                    start = i;
                    maxLength = k;
                }
            }
        }
    }
    cout<<"longest palindrome substring is : ";
    printSubStr(str,start,start + maxLength-1);
    return maxLength;
}
int main()
{
    string str = "forgeeksskeegfor";
    cout<<"\nLength is : "<<longestPalindrome(str);
    return 0;
}
