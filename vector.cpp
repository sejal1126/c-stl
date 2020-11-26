#include <bits/stdc++.h>

using namespace std;

int main()
{ios::sync_with_stdio(0);
cin.tie(0);
cout<<"ALL ABOUT VECTOR";
vector<int> v;
v.push_back(10);
v.push_back(20);
v.push_back(30);
v.push_back(40);
v.push_back(50);
v.push_back(60);
cout<<"array when the lement is inserted\n";
for(auto x : v)
{cout<<x<<" ";}
v.pop_back();
cout<<"\narray when the element are pop out\n";
for(auto x : v)
{cout<<x<<" ";}
vector<int> :: iterator it1;
cout<<"\nLower bound of array :\t";
it1 = lower_bound(v.begin(),v.end(),30);
cout<<*it1;
cout<<"\nupper bound of array :\t";
vector<int> :: iterator it2;
it2 = upper_bound(v.begin(),v.end(),50);
cout<<*it2;
cout<<"\n";
vector<int> v1;

int a=0,i=0,n=0;

cin>>n;
for(i=0;i<n;i++)
{cin>>a;
    v1.push_back(a);
}
sort(v1.begin(),v1.end());
vector<int> :: iterator it;
for(it=v1.begin();it!=v1.end();it++)
{cout<<*it<<" ";}
cout<<endl;
reverse(v1.begin(),v1.end());
for(auto x : v1)
{cout<<x<<" ";}

    

    return 0;
}
