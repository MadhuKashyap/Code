*****CODEFORCES 486-A********
For a positive integer n let's define a function f:

f(n) =  - 1 + 2 - 3 + .. + ( - 1)^n*n

Your task is to calculate f(n) for a given integer n.

Input
The single line contains the positive integer n (1 ≤ n ≤ 1015).

Output
Print f(n) in a single line.

Examples
input
4
output
2




#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    cin>>n;
    if(n%2==0)
       cout<<n/2;
    else
       cout<<-1-(n/2);
    return 0;
}
