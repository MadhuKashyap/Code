You are given an array of n integers: a1,a2,…,an. Your task is to find some non-zero integer d (−103≤d≤103) such that, after each number in the array is divided by d, the number of positive numbers that are presented in the array is greater than or equal to half of the array size (i.e., at least ⌈n2⌉). Note that those positive numbers do not need to be an integer (e.g., a 2.5 counts as a positive number). If there are multiple values of d that satisfy the condition, you may print any of them. In case that there is no such d, print a single integer 0.

Recall that ⌈x⌉ represents the smallest integer that is not less than x and that zero (0) is neither positive nor negative.

Input
The first line contains one integer n (1≤n≤100) — the number of elements in the array.

The second line contains n space-separated integers a1,a2,…,an (−103≤ai≤103).

Output
Print one integer d (−103≤d≤103 and d≠0) that satisfies the given condition. If there are multiple values of d that satisfy the condition, you may print any of them. In case that there is no such d, print a single integer 0.

Examples
input
5
10 0 -7 2 6
output
4


#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int pos = 0, neg = 0, num;
  for (int i = 0; i < n; i++) {
    cin >> num;
    if (num > 0) pos++;
    else if (num < 0) neg++;
  }
  if (pos * 2 >= n) {
    cout << 1;
  } else if (neg * 2 >= n) {
    cout << -1;
  } else {
    cout << 0;
  }
  return 0;
}
