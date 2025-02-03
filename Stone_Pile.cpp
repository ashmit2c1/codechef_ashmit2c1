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

pair<lint,lint>solveFunction(vector<lint>&arr){
    queue<lint>q;
    forloop(0,arr.size()){
        q.emplace(arr[i]);
    }
    lint turn=1;
    while(q.size()>1){
        if(turn%2==0){
            lint top=q.front();
            q.pop();
            q.emplace(top);
            top=q.front();
            q.pop();
            q.emplace(top);
            q.pop();
            turn++;
        }
        else{
            lint top = q.front();
            q.pop();
            q.emplace(top);
            q.pop();
            turn++;
        }
    }
    if(turn%2==0){
        return {1,q.front()};
    }
    else{
        return {0,q.front()};
    }

}

void solution(int test){
    while(test--){
        lint n;cin >> n;
        vector<lint>arr;
        forloop(0,n){
            lint x;cin >> x;arr.push_back(x);
        }
        pair<lint,lint>ans=solveFunction(arr);
        cout << ans.first << " " << ans.second << "\n";

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}