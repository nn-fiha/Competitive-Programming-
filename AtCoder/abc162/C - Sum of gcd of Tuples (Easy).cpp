#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{

    int i,j,n,k,sum=0;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            for(k=1; k<=n; k++)
            {
                sum=sum+__gcd(i,__gcd(k,j));
            }
        }

    }
    cout<<sum<<endl;


}
