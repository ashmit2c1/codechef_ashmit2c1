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


bool solveFunction(string s){
    if(s.size()&1){return false;}
    unordered_map<char,lint>mp;
    forloop(0,s.size()){
        char character = s[i];
        mp[character]++;
    }
    for(auto it=mp.begin();it!=mp.end();it++){
        lint freq=it->second;
        if(freq&1){return false;}
    }
    return true;
}
void solution(int test){
    while(test--){
        lint n;cin >> n ;
        string s; cin >> s;
        bool ans = solveFunction(s);
        if(ans==true){print("YES")}else{print("NO")}
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}