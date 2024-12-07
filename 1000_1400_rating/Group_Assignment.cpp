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

lint solveFunction(vector<lint>&arr){
    unordered_map<lint,lint>mp;
    forloop(0,arr.size()){mp[arr[i]]++;}
    for(auto it=mp.begin();it!=mp.end();it++){
        lint freq=it->second;lint pref=it->first;
        if(freq%pref!=0){return false;} // important, in case we have 2 2 2 2 here 2 is 4 times, however they can form (2,2) (2,2)
        // hence we arec checking modulo 
        
    }return true; 
}

void solution(int test){
    while(test--){
        lint n;cin >> n;
        vector<lint>arr;
        forloop(0,n){lint x;cin >> x;arr.push_back(x);}
        bool ans=solveFunction(arr);
        if(ans==true){print("YES")}else{print("NO")}

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}