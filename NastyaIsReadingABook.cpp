After lessons Nastya decided to read a book. The book contains n chapters, going one after another, so that one page of the book belongs to exactly one chapter and each chapter contains at least one page.

Yesterday evening Nastya did not manage to finish reading the book, so she marked the page with number k as the first page which was not read (i.e. she read all pages from the 1-st to the (k−1)-th).

The next day Nastya's friend Igor came and asked her, how many chapters remain to be read by Nastya? Nastya is too busy now, so she asks you to compute the number of chapters she has not completely read yet (i.e. the number of chapters she has not started to read or has finished reading somewhere in the middle).

Input
The first line contains a single integer n (1≤n≤100) — the number of chapters in the book.

There are n lines then. The i-th of these lines contains two integers li, ri separated by space (l1=1, li≤ri) — numbers of the first and the last pages of the i-th chapter. It's guaranteed that li+1=ri+1 for all 1≤i≤n−1, and also that every chapter contains at most 100 pages.

The (n+2)-th line contains a single integer k (1≤k≤rn) — the index of the marked page.

Output
Print a single integer — the number of chapters which has not been completely read so far.

Examples
input
3
1 3
4 7
8 11
2
output
3


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a,b,i=0;
    cin>>n;
    vector<pair<int,int>> v;
    vector<pair<int,int>> :: iterator it;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    cin>>k;
    if(k<=1)
       cout<<n;
    else
    {
        for(it=v.begin(),i=0;it!=v.end();it++,i++)
        {
            if(k>=it->first&&k<=it->second)
               cout<<n-i;
        }
    }
    return 0;
}
