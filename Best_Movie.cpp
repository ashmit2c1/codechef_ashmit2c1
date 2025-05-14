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

lint solvefunction(vector<pair<lint,lint>>&arr){
    vector<lint>ans;
    forloop(0,arr.size()){
        lint rating=arr[i].first;
        lint cost=arr[i].second;
        if(rating>=7){
            ans.push_back(cost);
        }
    }
    if(ans.size()==0){
        return -1;
    }else{
        sort(ans.begin(),ans.end());
        return ans[0];
    }
}
void solution(int test){
    while(test--){
        lint n;cin >> n;
        vector<pair<lint,lint>>arr;
        forloop(0,n){lint x;lint y;cin >> x >> y;arr.push_back({x,y});}
        lint ans=solvefunction(arr);
        print(ans)

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}