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


lint solve(vector<lint>&arr1,vector<lint>&arr2){
    vector<lint>copy(arr1.size());
    copy[0]=arr1[0];
    forloop(1,arr1.size()){
        lint diff = arr1[i]-arr1[i-1];
        copy[i]=diff;
    }
    lint cnt=0;
    forloop(0,arr2.size()){
        if(arr2[i]<=copy[i]){
            cnt++;
        }
    }
    return cnt;
}
void solution(int test){
    while(test--){
        lint n;cin >> n;
        vector<lint>arr1,arr2;
        forloop(0,n){lint x;cin >> x;arr1.push_back(x);}
        forloop(0,n){lint x;cin >> x;arr2.push_back(x);}
        lint ans=solve(arr1,arr2);
        print(ans)
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}