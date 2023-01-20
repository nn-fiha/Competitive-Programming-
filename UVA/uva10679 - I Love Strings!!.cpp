#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,c=0,flag=0,q,test,k,p,bulb=0,x;
    string s,t;
    cin>>test;
    while(test--)
    {
        cin>>s>>q;
        for(i=0; i<q; i++)
        {bulb=0;
            flag=0;
            cin>>t;

            for(j=0; j<s.size(); j++)
            {
                if(s[j]==t[0])
                {
                    flag=1;
                    p=j;
                    break;
                }
            }
            if(flag==1)
            {
               // cout<<j<<endl;
                for(k=p+1,x=1; k<t.size(); k++,x++)
                {
                    if(s[k]==t[x])
                    {
                        bulb=0;
                    }
                    else
                    {
                        bulb=1;
                        break;
                    }
                }
            }
            if(bulb==0)
            {
                cout<<"y"<<endl;
            }
            else
            {
                cout<<"n"<<endl;
            }

        }


    }



}
