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

vector<lint> solvefunction(vector<lint>& arr) {
    sort(arr.begin(), arr.end());
    lint smaller = 0;
    lint larger = (arr.size() + 1) / 2; 
    lint index = 0;
    vector<lint> ans(arr.size());
    while (smaller < (arr.size() + 1) / 2 && index < arr.size()) {
        ans[index] = arr[smaller];
        index += 2;
        smaller++;
    }
    index = 1;
    while (larger < arr.size() && index < arr.size()) {
        ans[index] = arr[larger];
        index += 2;
        larger++;
    }

    return ans;
}

void solution(int test){
    while(test--){
        lint n;cin >> n;
        vector<lint>arr;
        forloop(0,n){lint x;cin >> x;arr.push_back(x);}
        vector<lint> ans=solvefunction(arr);
        forloop(0,ans.size()){cout << ans[i] << " ";}
        cout << "\n";

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}