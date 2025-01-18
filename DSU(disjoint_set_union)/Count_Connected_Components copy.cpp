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
        if(setsize[parentv]<setsize[parentu]){
            swap(parentu,parentv);
        }
        parent[parentv]=parentu;
        setsize[parentu]+=setsize[parentv];
    }
}
int solvefunction(vector<int>&parent,vector<int>&setsize,vector<pair<int,int>>&connections){
    for(int i=0;i<connections.size();i++){
        int u=connections[i].first;
        int v=connections[i].second;
        unionfunction(u,v,parent,setsize);
    }
    int count=0;
    for(int i=0;i<parent.size();i++){
        if(findparent(i,parent)==i){
            count++;
        }
    }
    return count;
}

void solution(){
    int n; int m;
    cin >> n >> m;
    vector<int>parent(n);
    vector<int>setsize(n);
    for(int i=0;i<n;i++){
        parent[i]=i;
        setsize[i]=1;
    }
    vector<pair<int,int>>connections;
    for(int i=0;i<m;i++){
        int u;int v;
        cin >> u >> v;
        connections.push_back({u,v});
    }
    int ans=solvefunction(parent,setsize,connections);
    cout << ans << "\n";

}
int main(){

    solution();
}