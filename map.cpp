#include <bits/stdc++.h>

using namespace std;
bool comp(pair<int,string>&p1,pair<int,string>&p2)
{
    return p1.second<p2.second;
}
int main()
{
    map<int,string>c{{103,"sejal"},{105,"chinu"},{102,"lucky"},{104,"chandani"},{106,"bittu"},{101,"madhur"}};
   
   map<int,string> :: iterator p,q;
   
   
   vector<pair<int,string>> vec;
   for(q=c.begin();q!=c.end(); q++)
   {
       vec.push_back(make_pair(q->first,q->second));
   }
sort(vec.begin(),vec.end(),comp);
int i=0;
for(i=0;i<vec.size();i++)
{
    cout<<vec[i].first<<" "<<vec[i].second<<endl;
}
    return 0;
}
