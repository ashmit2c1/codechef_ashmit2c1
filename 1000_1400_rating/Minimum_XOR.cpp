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


lint solvefunction(vector<lint>& arr) {
    int n = arr.size();
    if (n == 1) return 0;

    vector<lint> prefXOR(n, 0), sufXOR(n, 0);
    
    prefXOR[0] = arr[0];
    for (int i = 1; i < n; i++) {
        prefXOR[i] = prefXOR[i - 1] ^ arr[i];
    }

    sufXOR[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        sufXOR[i] = sufXOR[i + 1] ^ arr[i];
    }

    lint minXOR = LLONG_MAX;
    for (int i = 0; i < n; i++) {
        lint currXOR;
        if (i == 0) {
            currXOR = sufXOR[i + 1];
        } else if (i == n - 1) {
            currXOR = prefXOR[i - 1];
        } else {
            currXOR = prefXOR[i - 1] ^ sufXOR[i + 1];
        }
        minXOR = min(minXOR, currXOR);
    }
    minXOR = min(minXOR, prefXOR[n-1]);
    return minXOR;
}
lint betterSolveFunction(vector<lint>&arr){
    lint currXOR=0;
    forloop(0,arr.size()){
        currXOR=currXOR^arr[i];
    }
    lint minXOR=currXOR;
    lint dupXOR=currXOR;
    forloop(0,arr.size()){
        currXOR=currXOR^arr[i];
        minXOR=min(minXOR,currXOR);
        currXOR=dupXOR;
    }
    return minXOR;
}
void solution(int test){
    while(test--){
        lint n; cin >> n;
        vector<lint> arr;
        forloop(0, n) {
            lint x; cin >> x;
            arr.push_back(x);
        }
        lint ans = solvefunction(arr);
        print(ans);
    }
}

int main(){
    int test;
    cin >> test;
    solution(test);
}