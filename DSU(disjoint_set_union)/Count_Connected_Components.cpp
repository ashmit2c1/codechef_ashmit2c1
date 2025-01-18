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



void dfsfunction(lint node,vector<bool>&visited,vector<lint>adj[]){
    visited[node]=true;
    int n=adj[node].size();
    forloop(0,n){
        lint neighbor=adj[node][i];
        if(visited[neighbor]==false){
            dfsfunction(neighbor,visited,adj);
        }
    }
}
lint solvefunction(lint n,vector<lint>adj[]){
    vector<bool>visited(n,false);
    lint cnt=0;
    forloop(0,n){
        if(visited[i]==false){
            cnt++;
            dfsfunction(i,visited,adj);
        }
    }
    return cnt;
}

void solution(){
    lint n;lint m;
    cin >> n >> m;
    vector<lint>adj[n];
    forloop(0,m){
        lint u;lint v;cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    lint ans=solvefunction(n,adj);
    print(ans)

}
int main(){

    solution();
}