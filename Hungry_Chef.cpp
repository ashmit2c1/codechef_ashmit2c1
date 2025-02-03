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
pair<lint,lint> solvefunction(lint x,lint y,lint n,lint r){
    if(x*n > r){
        return {-1,-1};
    }
    lint prem = (r-n*x)/(y-x);
    prem = min(prem,n);
    lint norm = n-prem;
    return {norm,prem};

}
void solution(int test){
    while(test--){
        lint x;lint y;lint n;lint r;
        cin >> x >> y >> n >> r;
        pair<lint,lint>ans=solvefunction(x,y,n,r);
        if(ans.first==-1){
            cout << -1;
        }else{
            cout << ans.first << " " << ans.second << " ";
        }
        cout << "\n";
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}