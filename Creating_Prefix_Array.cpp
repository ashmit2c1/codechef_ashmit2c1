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

void prefixArray(vector<lint>&arr){
    forloop(1,arr.size()){
        arr[i]+=arr[i-1];
    }
}

void solution(){
    lint n;cin >>n;
    vector<lint>arr;
    forloop(0,n){
        lint x;cin >> x;arr.push_back(x);
    }
    prefixArray(arr);
    forloop(0,arr.size()){cout << arr[i] << " ";}

}
int main(){

    solution();
}