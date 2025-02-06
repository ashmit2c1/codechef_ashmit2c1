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

lint solvefunction(vector<string>&arr){
    unordered_map<char,lint>mp;
    forloop(0,arr.size()){
        string s=arr[i];
        secondfor(0,s.size()){
            char character = s[j];
            mp[character]++;
        }
    }
    lint ans;
    ans=min({mp['c']/2,mp['o'],mp['d'],mp['e']/2,mp['h'],mp['f']});
    return ans;
}

void solution(int test){
    while(test--){
        lint n;cin >> n;
        vector<string>arr;
        forloop(0,n){string x;cin >> x;arr.push_back(x);}
        lint ans=solvefunction(arr);
        print(ans)

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}