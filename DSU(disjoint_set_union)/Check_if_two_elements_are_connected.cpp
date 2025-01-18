#include<bits/stdc++.h>
using namespace std;
#define lint long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";
#define output(arr) for(int i=0;i<arr.size();i++){cout<<arr[i]<<" ";}
#define asort(v) sort(v.begin(), v.end())
#define dsort(v) sort(v.begin(), v.end(), greater<int>())
#define intmax INT_MAX
#define intmin INT_MIN
#define lintmax LLONG_MAX
#define lintmin LLONG_MIN
#define mp(x,y) make_pair(x,y)
int findparent(int element,vector<int>&parent){
    if(parent[element]==element){
        return element;
    }else{
        return findparent(parent[element],parent);
    }
}

void unionfunction(int u,int v,vector<int>&parent,vector<int>&setsize){
    int parentu=findparent(u,parent);
    int parentv=findparent(v,parent);
    if(parentu!=parentv){
        if(setsize[parentv]<setsize[parentv]){
            swap(parentu,parentv);
        }
        parent[parentv]=parentu;
        setsize[parentu]+=setsize[parentv];
    }
}

vector<bool>solvefunction(vector<int>&parent,vector<int>&setsize,vector<pair<int,int>>&connections,vector<pair<int,int>>&queries){
    for(int i=0;i<connections.size();i++){
        int u=connections[i].first;
        int v=connections[i].second;
        unionfunction(u,v,parent,setsize);
    }
    vector<bool>ans(queries.size());
    for(int i=0;i<queries.size();i++){
        int u=queries[i].first;
        int v=queries[i].second;
        int parentu=findparent(u,parent);
        int parentv=findparent(v,parent);
        if(parentu!=parentv){
            ans[i]=false;
        }else{
            ans[i]=true;
        }
    }
    return ans;
}

int main(){
    int n; cin >> n; // NUMBER OF NODES
    int m; cin >> m; // NUMBER OF CONNECTIONS
    vector<int>parent(n);
    vector<int>setsize(n);
    for(int i=0;i<n;i++){
        parent[i]=i;
        setsize[i]=1;
    }
    vector<pair<int,int>>connections;
    for(int i=0;i<m;i++){
        int u; int v;
        cin >> u >> v;
        connections.push_back({u,v});
    }
    int q; cin >> q;
    vector<pair<int,int>>queries;
    for(int i=0;i<q;i++){
        int u; int v;
        cin >> u >> v;
        queries.push_back({u,v});
    }
    vector<bool>ans=solvefunction(parent,setsize,connections,queries);
    for(int i=0;i<ans.size();i++){
        if(ans[i]==true){
            cout << "Yes" << "\n";
        }else{
            cout << "No" << "\n";
        }
    }
}