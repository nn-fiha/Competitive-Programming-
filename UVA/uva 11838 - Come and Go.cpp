#include<bits/stdc++.h>
using namespace std;
#define NODES 2020
vector<int>g[NODES],rg[NODES],v;
int stTime[NODES],endTime[NODES],clr[NODES],t=1,n,m;
stack<int>stk;
void dfs(int u)
{
    clr[u]=1;
    stTime[u]=t++;
    for(int i=0;i<g[u].size();i++)
    {
        if(clr[g[u][i]]==0)
        {
            dfs(g[u][i]);
        }
    }
    stk.push(u);
    endTime[u]=t++;
}
void dfs2(int u)
{
    clr[u]=2;
    for(int i=0;i<rg[u].size();i++)
    {
        if(clr[rg[u][i]]==1)
        {
            dfs2(rg[u][i]);
        }
    }
}


int main()
{
    int i,v,w,p,u;
    while(scanf("%d%d", &n,&m)==2)
    {
        if(n==0 && m==0)break;

        for(i=0;i<NODES;i++)
        {
            g[i].clear();
            rg[i].clear();
            stTime[i]=0;
            endTime[i]=0;
            clr[i]=0;
        }
        for( i=0; i<m; i++)
        {
            cin>>v>>w>>p;
            if(p==1)
            {
                g[v].push_back(w);
                rg[w].push_back(v);
            }
            else if(p==2)
            {
                g[v].push_back(w);
                g[w].push_back(v);
                rg[w].push_back(v);
                rg[v].push_back(w);

            }
        }
        for(i=0;i<n;i++)
        {
            if(clr[i]==0)
            {
                dfs(i);
            }
        }
        int comp=0;
        while(!stk.empty())
        {
            u=stk.top();
            stk.pop();
            if(clr[u]==1)
            {
                dfs2(u);
                comp++;
            }
        }
        if(comp==2)cout<<1<<endl;
        else cout<<0<<endl;
        //cout<<comp<<endl;


    }




}
