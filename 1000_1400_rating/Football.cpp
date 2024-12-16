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


lint solveFunction(vector<lint>goals,vector<lint>fouls){
    vector<lint>season;
    forloop(0,goals.size()){
        lint agg=goals[i]-fouls[i];
        if(agg<0){agg=0;}
        season.push_back(agg);
    }
    sort(season.begin(),season.end());
    return season[season.size()-1];
}

void solution(int test){
    while(test--){
        lint n;cin >> n;
        vector<lint>goals;
        forloop(0,n){lint x;cin >> x;goals.push_back(20*x);}
        vector<lint>fouls;
        forloop(0,n){lint x;cin >> x;fouls.push_back(10*x);}
        lint ans=solveFunction(goals,fouls);
        print(ans)

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}