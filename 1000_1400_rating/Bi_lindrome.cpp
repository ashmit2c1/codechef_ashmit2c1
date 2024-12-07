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

lint solveFunction(string s){
    unordered_map<char,lint>mp;lint maxFreq=INT_MIN;
    forloop(0,s.size()){
        char character=s[i];mp[character]++;
    }
    for(auto it=mp.begin();it!=mp.end();it++){
        lint freq=it->second;
        maxFreq=max(freq,maxFreq);
    }
    if(maxFreq==s.size()){return 0;}
    if(maxFreq==1){return -1;}
    else{return s.size()-2;} // we want to remove max characters, hence our palindrome will be only of 2 characters
}

void solution(int test){
    while(test--){
        lint n;cin >> n;string s;cin >> s;
        lint ans=solveFunction(s);
        print(ans)

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}