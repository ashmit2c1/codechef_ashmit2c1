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



// BETTER APPROACH 
lint solveFunction2(vector<lint>&arr){
    lint minElement=lintmax;
    lint minIndex=-1;
    forloop(0,arr.size()){
        lint element = arr[i];
        if(element<minElement){minElement=element;minIndex=i;}
    }
    return minIndex+1;
}


lint solveFunction(vector<lint>&arr){
    lint n = arr.size();
    vector<lint> prefixSum(n, 0), suffixSum(n, 0);
    lint minSum = lintmax, index = -1;
    prefixSum[0] = arr[0];
    forloop(1, n) { prefixSum[i] = prefixSum[i - 1] + arr[i]; }
    suffixSum[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) { suffixSum[i] = suffixSum[i + 1] + arr[i]; }
    forloop(0, n) {
        lint sum = prefixSum[i] + suffixSum[i];
        if (sum < minSum) { minSum = sum; index = i; }
    }
    return index + 1;
}


void solution(int test){
    while(test--){
        lint n; cin >> n;
        vector<lint>arr;
        forloop(0, n){lint x; cin >> x; arr.push_back(x);}
        lint ans = solveFunction(arr);
        print(ans)
    }
}

int main(){
    int test;
    cin >> test;
    solution(test);
}