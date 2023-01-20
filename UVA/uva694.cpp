#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,l,count=0,n=0,t=0;
    while(cin>>a>>l)
    {t++;
        if(a<0&& l<0)break;
        count=1;
        n=a;
        while(n>1)
        {

            if(n%2==0)
            {
                n=n/2;
                if(n>=l)break;
                count++;
            }
            else if(n%2!=0)
            {
                n=3*n;
                if(n>=l)break;
                n=n+1;
                count++;
            }
        }

        cout<<"Case "<<t<<": A = "<<a<<", limit = "<<l<<", number of terms = "<<count<<endl;
    }

}

