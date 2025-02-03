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

lint strat1(lint x,vector<lint>&arr){
    lint time=0;
    forloop(0,arr.size()){
        lint element = arr[i];
        time += (element + x - 1) / x;
    }
    return time;
}

lint strat2(lint x,vector<lint>&arr){
    lint n=arr.size();
    return arr[n-1];
}

void solution(int test){
    while(test--){
        lint n;lint x;cin >> n >> x;
        vector<lint>arr;
        forloop(0,n){lint el;cin >> el;arr.push_back(el);}
        sort(arr.begin(),arr.end());
        lint time1=strat1(x,arr);
        lint time2=strat2(x,arr);
        cout << min(time1,time2) << "\n";

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}