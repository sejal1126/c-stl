#include <bits/stdc++.h>

using namespace std;

int main()
{ios::sync_with_stdio(0);
cin.tie(0);
cout<<"ALL ABOUT STACK\n";
stack<int> s;
s.push(10);
s.push(20);
s.push(40);
s.push(50);
s.push(60);
cout<<"\nelement before pop\t";
cout<<s.top();
s.pop();
cout<<"\nelement after pop\t";
cout<<s.top();

int i=0,a=0,n=0;
cin>>n;
stack<int> s1;
cout<<"\nnew array elemnt are\t";
for(i=0;i<n;i++)
{
    cin>>a;
    s1.push(a);
}

while(!s1.empty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }


//for(auto it =s.begin();it!=s.end();it++){cout<<*it<<" ";}cout<<endl;
    return 0;
}
