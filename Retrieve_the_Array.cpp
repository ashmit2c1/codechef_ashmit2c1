
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

vector<lint>solvefunction(vector<lint>&arr){
    if(arr.size()==1){
        return {arr[0]/2};
    }
    vector<lint>ans;
    lint sumb = 0;
    forloop(0,arr.size()){
        sumb+=arr[i];
    }
    lint suma=sumb/(arr.size()+1);
    forloop(0,arr.size()){
        lint el = arr[i]-suma;
        ans.push_back(el);
    }
    return ans;
}
void solution(int test){
    while(test--){
    lint n;cin >> n;
    vector<lint>arr;
    forloop(0,n){lint x;cin >> x;arr.push_back(x);}
    vector<lint> ans=solvefunction(arr);
    forloop(0,ans.size()){cout << ans[i] << " ";}
    cout << "\n";
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}
