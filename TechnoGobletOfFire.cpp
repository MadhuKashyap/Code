Everybody knows that the m-coder Tournament will happen soon. m schools participate in the tournament, and only one student from each school participates.
There are a total of n students in those schools. Before the tournament, all students put their names and the names of their schools into the Technogoblet of Fire. After that, Technogoblet selects the strongest student from each school to participate.
Arkady is a hacker who wants to have k Chosen Ones selected by the Technogoblet. Unfortunately, not all of them are the strongest in their schools, but Arkady can make up some new school names and replace some names from Technogoblet with those. You can't use each made-up name more than once. In that case, Technogoblet would select the strongest student in those made-up schools too.
You know the power of each student and schools they study in. Calculate the minimal number of schools Arkady has to make up so that k Chosen Ones would be selected by the Technogoblet.

Input::
The first line contains three integers n, m and k (1≤n≤100, 1≤m,k≤n) — the total number of students, the number of schools and the number of the Chosen Ones.

The second line contains n different integers p1,p2,…,pn (1≤pi≤n), where pi denotes the power of i-th student. The bigger the power, the stronger the student.

The third line contains n integers s1,s2,…,sn (1≤si≤m), where si denotes the school the i-th student goes to. At least one student studies in each of the schools.

The fourth line contains k different integers c1,c2,…,ck (1≤ci≤n)  — the id's of the Chosen Ones.

Output::
Output a single integer  — the minimal number of schools to be made up by Arkady so that k Chosen Ones would be selected by the Technogoblet


#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,k,count=0;
    cin>>n>>m>>k;
    int p[n],s[n],r[k];
    map<int,vector<int>> mp;
    vector<int> :: iterator it;
    set<int> st;
    set<int> :: iterator it1;
    for(int j=0;j<n;j++)
    {
        cin>>p[j];
    }
    for(int j=0;j<n;j++)
    {
        cin>>s[j];
    }
    for(int j=0;j<k;j++)
    {
        cin>>r[j];
    }
    for(int i=1;i<=m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(s[j]==i)
              mp[i].push_back(p[j]);
        }
    }
    for(int i=1;i<=m;i++)
    {
        sort(mp[i].begin(),mp[i].end(),greater<int>());
    }
     for(int i=1;i<=m;i++)
    {
        for(it=mp[i].begin();it!=mp[i].end();it++)
        {
            st.insert(*it); 
            break;
        }
        
    }
    for(int i=0;i<k;i++)
    {
       if(st.find(p[r[i]-1])==st.end())
          count++;
    }
    cout<<count;
    return 0;
}
