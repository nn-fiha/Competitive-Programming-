#include<bits/stdc++.h>
using namespace std;
#define NODES 100200
vector<int>g[NODES],rg[NODES],v1,v2;
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
/*void dfs2(int u)
{
    clr[u]=2;
    for(int i=0; i<g[u].size(); i++)
    {
        if(clr[g[u][i]]==1)
        {
            dfs2(g[u][i]);
        }
    }
}*/


int main()
{
    int i,v,w,p,u,tc,n,m,c=1;
    cin>>tc;
    int comp=0;
    while(tc--)
    {
        cin>>n>>m;
        comp=0;
        v1.clear();
        v2.clear();
        while(!stk.empty())
            stk.pop();
        for(i=0; i<NODES; i++)
        {
            g[i].clear();
            rg[i].clear();

            clr[i]=0;

        }
        for( i=0; i<m; i++)
        {
            cin>>v>>w;
            g[v].push_back(w);
            rg[w].push_back(v);

        }
        for(i=1; i<=n; i++)
        {
            if(clr[i]==0)
            {
                dfs(i);
            }
        }
        for(i=0; i<NODES; i++)
            clr[i]=0;

        while(!stk.empty())
        {
            u=stk.top();
            stk.pop();

            if(clr[u]==0)
            {
                dfs(u);
                comp++;
            }
        }

        cout<<comp<<endl;


    }




}
