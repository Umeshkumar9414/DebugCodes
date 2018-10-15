#include<bits/stdc++.h>
#define pf printf
#define sf scanf
#define db double 
#define z long long int 
using namespace std ;
#define siz 1000000
#define MAXN 100001
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
z vis[MAXN]={0};

void dfs(vector<z> v[],z si,z s,z le)
{

    
    z i;
    vis[s]=le;
    for(i=0;i<v[s].size();i++)
    {
        if(vis[v[s][i]]==0)
        dfs(v,si,v[s][i],le+1);
    }


}


int main() 
{
     z n,m;
     cin>>n;
     m=n-1;
     std::vector<z> v[n];
     while(m--)
     {
        z x,y;
        cin>>x>>y;
        x--;y--;
        v[x].push_back(y);v[y].push_back(x);
     }
     z le=1;
     dfs(v,n,0,le);

     z q ; cin>>q;
     z di = INT_MAX;
     z id=0;

     for(z i=1;i<=q;i++)
     {
            z aa; cin>>aa;
            aa--;

            if(di>vis[aa])
            {
                di=vis[aa];
                id=aa;
            }

     }

     cout << id+1 << endl;

    
}
