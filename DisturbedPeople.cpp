There is a house with n flats situated on the main street of Berlatov. Vova is watching this house every night. The house can be represented as an array of n integer numbers a1,a2,…,an, where ai=1 if in the i-th flat the light is on and ai=0 otherwise.

Vova thinks that people in the i-th flats are disturbed and cannot sleep if and only if 1<i<n and ai−1=ai+1=1 and ai=0.

Vova is concerned by the following question: what is the minimum number k such that if people from exactly k pairwise distinct flats will turn off the lights then nobody will be disturbed? Your task is to find this number k.

Input
The first line of the input contains one integer n (3≤n≤100) — the number of flats in the house.

The second line of the input contains n integers a1,a2,…,an (ai∈{0,1}), where ai is the state of light in the i-th flat.

Output
Print only one integer — the minimum number k such that if people from exactly k pairwise distinct flats will turn off the light then nobody will be disturbed.

Examples
input
10
1 1 0 1 1 0 1 0 1 0
output
2

#include <iostream>

using namespace std;
int min(int a,int b)
{
    if(a<b)
      return a;
    return b;
}
int main()
{
    int n,cnt1=0,cnt2=0;
    cin>>n;
    int a[n];
    bool temp[n]={false};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
      if(a[i]==0&&a[i-1]==1&&a[i+1]==1)
      {
          a[i+1]=0;
          temp[i+1]=true;
          cnt1++;
      }
    }
    for(int i=0;i<n;i++)
    {
        if(temp[i]==true)
           a[i]=1;
    }
    for(int i=0;i<n;i++)
    {
      if(a[i]==0&&a[i-1]==1&&a[i+1]==1)
      {
          a[i-1]=0;
          cnt2++;
      }
    }
    cout<<min(cnt1,cnt2);
    return 0;
}
