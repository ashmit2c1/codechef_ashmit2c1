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

lint solvefunction(vector<lint>&arr,lint k){
    unordered_map<lint,lint>mp;
    forloop(0,arr.size()){
        mp[arr[i]]++;
    }
    forloop(0,arr.size()){
        if(arr[i]==i){
            mp.erase(arr[i]);
        }
    }
    lint cnt=0;
    for(auto it=mp.begin();it!=mp.end();it++){
        lint freq=it->second;
        if(freq>=k){cnt++;}
    }
    return cnt;
}
void solution(int test){
    while(test--){
        lint n;cin >> n;
        lint k;cin >> k;
        vector<lint>arr;
        forloop(0,n){lint x;cin >> x;arr.push_back(x-1);}
        lint ans=solvefunction(arr,k);
        print(ans)

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}