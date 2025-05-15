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


bool solvefunction(lint n,lint sum,vector<lint>players,vector<lint>position){
    if(sum>=100){return false;}
    lint diff = 100-sum;
    vector<lint>defenders;
    vector<lint>gks;
    forloop(0,players.size()){
        if(position[i]==0){
            defenders.push_back(players[i]);
        }else{
            gks.push_back(players[i]);
        }
    }
    sort(defenders.begin(),defenders.end());
    sort(gks.begin(),gks.end());
    if(defenders.size()==0 || gks.size()==0){return false;}
    if(defenders[0]+gks[0]<=diff){return true;}else{return false;}
}
void solution(int test){
    while(test--){
        lint n;cin >> n;
        lint sum;cin >> sum;
        vector<lint>players;
        vector<lint>position;
        forloop(0,n){
            lint x;cin >> x;players.push_back(x);
        }
        forloop(0,n){lint x;cin >> x;position.push_back(x);}
        bool ans=solvefunction(n,sum,players,position);
        if(ans==true){print("yes")}else{print("no")}
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}