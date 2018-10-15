//https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/tutorial/

#include<bits/stdc++.h>
#define pf printf
#define sf scanf
#define db double 
#define z long long int 
using namespace std ;
#define MAX 1000001
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);


void bfs(vector<z> v[],z si,z s,z lev[],z xx)
{
    z le[1000000]={0};
    z i;
    bool vis[si];
    memset(vis,false,si);

    queue<z> q;
    q.push(s);

    lev[s]=1;
    
    vis[s]=true;

    map<z,z> m;
    while(!q.empty())
        {
            z x = q.front();
            // cout << x << endl;
            // cout << lev[x] << endl;
            le[lev[x]]++;
            m[lev[x]]++;
            //cout << le[lev[x]] <<endl;
            
            // cout << le[] ;
            q.pop();
            for(i=0;i<v[x].size();i++)
            {
                if(!vis[v[x][i]])
                {
                    q.push(v[x][i]);
                    vis[v[x][i]]=true;
                    lev[v[x][i]]=lev[x]+1;
                   // le[lev[x]]++;
                    
                    //le[ lev[v[x][i]] ]++;
                }  
            }   
        }
    
    // for(i=0;i<10;i++)
    // cout << le[i] <<endl;
    
    // for(i=0;i<10;i++)
    //     cout << i << " " << m[i] <<endl;
    
       cout << m[xx];


}

int main()     
{
    fast;
    z n;
    cin>>n;
    //n--;
    vector<z> v[n];
    z lev[n]={0};
    z xx ;
    z k=n-1;
    while(k--)
    {
        //pf("enter edges (stop -1 -1)");
        z x,y;
        cin>>x>>y;
        x--;y--;
        //if(x==-1 && y==-1) break;
        v[x].push_back(y);
        v[y].push_back(x);
    } 
    cin>>xx;

    bfs(v,n,0,lev,xx);


}
