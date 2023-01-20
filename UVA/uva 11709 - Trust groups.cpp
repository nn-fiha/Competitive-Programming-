#include<bits/stdc++.h>
using namespace std;
#define NODES 10020
vector<int>g[NODES],rg[NODES];
vector<string>vs,v;
map<string,int>mp;
int clr[NODES],t=1,n,m;
stack<int>stk;

void dfs(int u)
{
    clr[u]=1;
    for(int i=0; i<g[u].size(); i++)
    {
        if(clr[g[u][i]]==0)
        {
            dfs(g[u][i]);
        }
    }
    stk.push(u);
}

void dfs2(int u)
{
    clr[u]=2;
    for(int i=0; i<rg[u].size(); i++)
    {
        if(clr[rg[u][i]]==1)
        {
            dfs2(rg[u][i]);
        }
    }
}


int main()
{
    int i,v,w,p,u,tc,n,m,c=1;

    int comp=0;
    while(scanf("%d%d", &n,&m)==2)
    {
        if(n==0&& m==0)break;
        comp=0;
        vs.clear();
        while(!stk.empty())
            stk.pop();
        for(i=0; i<NODES; i++)
        {
            g[i].clear();
            rg[i].clear();
            clr[i]=0;
        }

        string st,st1;
        cin.ignore();

        for( i=0; i<n; i++)
        {
            getline(cin, st);
            vs.push_back(st);
            mp[vs[i]]=i;
        }
        for( i=0; i<m; i++)
        {
            getline(cin, st);
            getline(cin, st1);
            u=mp[st];
            v=mp[st1];

            g[u].push_back(v);
            rg[v].push_back(u);

        }

        for(i=0; i<n; i++)
        {
            if(clr[i]==0)
            {
                dfs(i);
            }
        }


        while(!stk.empty())
        {
            int p=stk.top();
            //cout<<p<<" ";
            stk.pop();

            if(clr[p]==1)
            {
                dfs2(p);
                comp++;
            }
        }

        cout<<comp<<endl;


    }




}
