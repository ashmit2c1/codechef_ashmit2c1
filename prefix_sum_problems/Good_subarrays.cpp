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
/*lint solveFunction(vector<lint>& arr, lint k) {
    lint cnt = 0;
    forloop(0, arr.size()) {
        lint sum = 0;
        secondfor(i, arr.size()) {
            sum += arr[j];
            if (sum == k) cnt++;
        }
    }
    return cnt;
}*/
lint solveFunction(vector<lint>& arr, lint k) {
    unordered_map<lint, lint> prefixSumCount;
    lint currentSum = 0, cnt = 0;
    forloop(0, arr.size()) {
        currentSum += arr[i];
        if (currentSum == k) cnt++;
        if (prefixSumCount.find(currentSum - k) != prefixSumCount.end()) {
            cnt += prefixSumCount[currentSum - k];
        }
        
        prefixSumCount[currentSum]++;
    }
    return cnt;
}
void solution(){
    lint n;cin >> n;lint k;cin >> k;
    vector<lint>arr;
    forloop(0,n){lint x;cin >> x;arr.push_back(x);}
    lint ans=solveFunction(arr,k);
    print(ans)

}
int main(){

    solution();
}