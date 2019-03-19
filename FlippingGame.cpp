Iahub got bored, so he invented a game to be played on paper.

He writes n integers a1, a2, ..., an. Each of those integers can be either 0 or 1. He's allowed to do exactly one move: he chooses two indices i and j (1 ≤ i ≤ j ≤ n) and flips all values ak for which their positions are in range [i, j] (that is i ≤ k ≤ j). Flip the value of x means to apply operation x = 1 - x.

The goal of the game is that after exactly one move to obtain the maximum number of ones. Write a program to solve the little game of Iahub.

Input
The first line of the input contains an integer n (1 ≤ n ≤ 100). In the second line of the input there are n integers: a1, a2, ..., an. It is guaranteed that each of those n values is either 0 or 1.

Output
Print an integer — the maximal number of 1s that can be obtained after exactly one move.

Examples
input
5
1 0 0 1 0
output
4


#include <iostream>

using namespace std;

int main() {
   int n, ans = 0;
   cin >> n;
   int a[n + 1], b[n + 1];
   for (int i = 1; i <= n; i++) {
    cin >> a[i];
   }
   for (int i = 1; i <= n; i++) {
    for (int j = i; j <= n; j++) {
      for (int k = i; k <= j; k++) {
        a[k] = 1 - a[k];
      }
      int temp = 0;
      for (int k = 1; k <= n; k++) {
        if (a[k] == 1) {
          temp++;
        }
      }
      ans = max(ans, temp);
      for (int k = i; k <= j; k++) {
        a[k] = 1 - a[k];
      }
    }
   }
  cout << ans << '\n';
}
