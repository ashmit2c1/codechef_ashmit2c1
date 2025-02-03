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


vector<lint>solvefunction(lint n){
    if(n==1){
        return {1};
    }
    if(n==2){
        return {1,2};
    }
    vector<lint>ans(n);
    ans[n-1]=n;
    ans[n-2]=1;
    bool dec = false;
    for(int i=n-3;i>=0;i--){
        if(dec==false){
            ans[i]=ans[i+1]+(i+1);
            dec=true;
        }else{
            ans[i]=ans[i+1]-(i+1);
            dec=false;
        }
    }
    return ans;
}
void solution(int test){
    while(test--){
        lint n;cin >> n;
        vector<lint>ans=solvefunction(n);
        forloop(0,ans.size()){cout << ans[i] << " ";}
        cout << "\n";
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}