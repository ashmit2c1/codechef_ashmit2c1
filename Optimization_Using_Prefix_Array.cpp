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

lint calculateFunction(lint leftIndex,lint rightIndex,vector<lint>&arr){
    if(leftIndex==0){
        return arr[rightIndex];
    }
    else{
        return arr[rightIndex]-arr[leftIndex-1];
    }

}


vector<lint>solveFunction(vector<lint>&arr,vector<pair<lint,lint>>&queries){
    lint n=arr.size();
    forloop(1,arr.size()){
        arr[i]+=arr[i-1];
    }
    vector<lint>ans;
    forloop(0,queries.size()){
        lint leftIndex=queries[i].first-1;
        lint rightIndex=queries[i].second-1;
        lint answer = calculateFunction(leftIndex,rightIndex,arr);
        ans.push_back(answer);
    }
    return ans; 
}

void solution(){
    lint n;cin >> n;
    vector<lint>arr;
    forloop(0,n){lint x;cin >>x;arr.push_back(x);}
    lint q;cin >> q;
    vector<pair<lint,lint>>queries;
    forloop(0,q){
        lint x;lint y;cin >> x >> y;
        queries.push_back({x,y});
    }
    vector<lint>ans=solveFunction(arr,queries);
    forloop(0,ans.size()){print(ans[i])}

}
int main(){

    solution();
}