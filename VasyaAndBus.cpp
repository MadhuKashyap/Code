One day Vasya heard a story: "In the city of High Bertown a bus number 62 left from the bus station. It had n grown-ups and m kids..."

The latter events happen to be of no importance to us. Vasya is an accountant and he loves counting money. So he wondered what maximum and minimum sum of money these passengers could have paid for the ride.

The bus fare equals one berland ruble in High Bertown. However, not everything is that easy — no more than one child can ride for free with each grown-up passenger. That means that a grown-up passenger who rides with his k (k > 0) children, pays overall k rubles: a ticket for himself and (k - 1) tickets for his children. Also, a grown-up can ride without children, in this case he only pays one ruble.

We know that in High Bertown children can't ride in a bus unaccompanied by grown-ups.

Help Vasya count the minimum and the maximum sum in Berland rubles, that all passengers of this bus could have paid in total.

Input
The input file consists of a single line containing two space-separated numbers n and m (0 ≤ n, m ≤ 105) — the number of the grown-ups and the number of the children in the bus, correspondingly.

Output
If n grown-ups and m children could have ridden in the bus, then print on a single line two space-separated integers — the minimum and the maximum possible total bus fare, correspondingly.

Otherwise, print "Impossible" (without the quotes).

Examples
input
1 2
output
2 2


#include <iostream>

using namespace std;

int main()
{
   int n,m;
   cin>>n>>m;
   int max,min;
   if(n==0&&m!=0)
      cout<<"Impossible";
   else if(m==0&&n!=0)
   {
       cout<<n<<"\t"<<n;
   }
   else if(m==0 && n==0)
       cout<<0<<"\t"<<0;
   else
   {  
     if(m<n)
    {
       min=n;
    }
    else if(m>n)
    {
       min=n+m-n;
    }
    else
       min=n;
    max=n+m-1;
    cout<<min<<"\t"<<max;
   }
    return 0;
}
