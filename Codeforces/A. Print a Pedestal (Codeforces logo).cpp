#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n,f,s,l,p;
    double d;
    cin>>t;
    while(t--)
    {
        cin>>n;
        d=(n*1.0)/3.0;
        p=n/3;
        if(d!=p)
        {
            f=p+2;
            l=p-1;
            s=n-(f+l);
       }
        else
        {
            f=p+1;
            l=p-1;
            s=p;
        }
        cout<<s<<" "<<f<<" "<<l<<endl;
    }


}
