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


vector<lint>solveFunction(vector<lint>&arr,lint cash){
    vector<lint>ans;
    forloop(0,arr.size()){
        lint amountAsked=arr[i];
        if(cash>=amountAsked){
            ans.push_back(1);
            cash-=amountAsked;
        }
        else{ans.push_back(0);}
    }
    return ans; 
}

void solution(int test){
    while(test--){
        lint n;cin >> n;
        lint cash;cin >> cash;
        vector<lint>arr;
        forloop(0,n){lint x;cin >> x;arr.push_back(x);}
        vector<lint>ans=solveFunction(arr,cash);
        forloop(0,ans.size()){cout <<ans[i];}
        cout << "\n";

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}