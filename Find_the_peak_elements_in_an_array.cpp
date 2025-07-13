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

vector<lint>solve(vector<lint>&arr){
    if(arr.size()==1){
        return arr;
    }
    vector<lint>res;
    if(arr[0]>arr[1]){
        res.push_back(arr[0]);
    }
    forloop(1,arr.size()-1){
        lint curr = arr[i];
        if(curr>arr[i+1] && curr>arr[i-1]){
            res.push_back(curr);
        }
    }
    if(arr[arr.size()-1] > arr[arr.size()-2]){
        res.push_back(arr[arr.size()-1]);
    }
    return res;
}
void solution(){
    lint n;cin >>n;
    vector<lint>arr;
    forloop(0,n){lint x;cin >> x;arr.push_back(x);}
    vector<lint>ans=solve(arr);
    if(ans.size()==0){cout << -1 << "\n";}
    forloop(0,ans.size()){cout << ans[i] << " ";}
    cout << "\n";

}
int main(){

    solution();
}