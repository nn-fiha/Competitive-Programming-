#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,res=0,flag=0;
    cin>>n;
    while(n>0)
    {
        res=n%10;
        n=n/10;
        if(res==7)
        {
            flag=1;
            break;
        }

    }
    if(flag==1)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }

}
