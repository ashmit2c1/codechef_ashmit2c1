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
    lint cnt=0;
    forloop(0,arr.size()){
        lint sum=0;
        secondfor(i,arr.size()){
            sum+=arr[j];
            lint len=j-i+1;
            if(sum==len){cnt++;}
        }
    }
    return cnt;
}

lint countGoodSubarrays(vector<lint>& arr) {
    lint cnt = 0, prefixSum = 0;
    unordered_map<lint, lint> freq;
    freq[0] = 1;

    for (int i = 0; i < arr.size(); i++) {
        prefixSum += arr[i];
        if(prefixSum==(i+1)){cnt++;}
        lint requiredSum = prefixSum - (i + 1);
        if (freq.find(requiredSum) != freq.end()) {
            cnt += freq[requiredSum];
        }
        freq[requiredSum]++;
    }

    return cnt;
}

void solution() {
    lint n;
    cin >> n;
    vector<lint> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    lint ans = solveFunction(arr);
    cout << ans << "\n";
}

int main() {
    solution();
}