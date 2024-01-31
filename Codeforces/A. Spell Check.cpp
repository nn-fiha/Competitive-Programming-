#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,i,ans,n;
    string s,sr="Timru";

    cin>>t;
    while(t--)
    {
        cin>>n>>s;

        if(n==5)
        {
            sort(s.begin(),s.end());
            if(s==sr)

                cout<<"YES"<<endl;
            else
            {
                cout<<"NO"<<endl;
            }
        }

        else
        {
            cout<<"NO"<<endl;

        }
    }



}
