#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> &p1,pair<int,int>&p2)
{
    return p1.first<p2.first;
}

int main()
{
    int n=0;
    cin>>n;
    int i=0;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<pair<int,int>> v;
    
    for(i=0;i<n;i++)
    {
        v.push_back(make_pair(a[i],i));
    }
    sort(v.begin(),v.end(),comp);
    for(i=0;i<v.size();i++)
    {
        a[v[i].second]=i;
    }
    for(i=0;i<n;i++)
    {cout<<a[i]<<" ";}
    cout<<endl;
    return 0;
}
