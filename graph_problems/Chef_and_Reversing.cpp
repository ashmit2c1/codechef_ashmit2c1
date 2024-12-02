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


lint solveFunction(lint n,lint m,vector<vector<pair<lint,lint>>>adj){
    vector<lint>distance(n,lintmax);
    queue<pair<lint,lint>>q;
    q.push({0,0});
    distance[0]=0;
    while(q.empty()==false){
        lint node=q.front().first;
        q.pop();
        lint n=adj[node].size();
        for(int i=0;i<n;i++){
            lint neighbor=adj[node][i].first;
            lint weight=adj[node][i].second;
            if(distance[neighbor]>distance[node]+weight){
                distance[neighbor]=distance[node]+weight;
                q.push({neighbor,distance[neighbor]});
            }
        }
    }
    if(distance[n-1]==lintmax){
        return -1;
    }
    else{
        return distance[n-1];
    }
}
void solution(){
    lint n;lint m;
    cin >> n >> m;
    vector<vector<pair<lint,lint>>>adj(n);
    for(int i=0;i<m;i++){
        lint u;lint v;
        cin >> u >> v;
        adj[u-1].push_back({v-1,0});
        adj[v-1].push_back({u-1,1});
    }
    lint ans=solveFunction(n,m,adj);
    print(ans)
}
int main(){

    solution();
}