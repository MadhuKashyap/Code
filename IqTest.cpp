Bob is preparing to pass IQ test. The most frequent task in this test is to find out which one of the given n numbers differs from the others. Bob observed that one number usually differs from the others in evenness. Help Bob — to check his answers, he needs a program that among the given n numbers finds one that is different in evenness.

Input
The first line contains integer n (3 ≤ n ≤ 100) — amount of numbers in the task. The second line contains n space-separated natural numbers, not exceeding 100. It is guaranteed, that exactly one of these numbers differs from the others in evenness.

Output
Output index of number that differs from the others in evenness. Numbers are numbered from 1 in the input order.

Examples
input
5
2 4 7 8 10
output
3


#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,count=0;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
           b[i]=0;
        else
           b[i]=1;
    }
    
    
    for(int i=1;i<n-1;i++)
    {
        if((b[i]!=b[i-1])&&(b[i]!=b[i+1]))
        {
             cout<<"\n"<<i+1;
             count++;
             break;
        }
    }
    if(count==0)
    {
       if(b[0]!=b[1])
        cout<<1;
       else if(b[n-1]!=b[n-2])
        cout<<n;
    }
    return 0;
}
