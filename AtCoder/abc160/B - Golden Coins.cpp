#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int a,c=0,s=0,p=0,ans=0;

cin>>a;
s=a;

c=s/500;
s=s%500;
p= s/5;
s=s%5;
//cout<<s<<endl;
//cout<<c<<" "<<p<<endl;
ans=c*1000+p*5;
cout<<ans<<endl;



}
