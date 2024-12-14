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

lint solveFunction(vector<lint>&arr,lint k){
    vector<lint>contribution(31,0);
    forloop(0,arr.size()){
        lint element=arr[i];
        secondfor(0,31){
            if(element & (1<<j)){
                contribution[j]+=(1LL<<j);
            }
        }
    }
    dsort(contribution);
    lint maxSum=0;
    forloop(0,k){
        maxSum+=contribution[i];
    }
    return maxSum;
}

void solution(int test){
    while(test--){
        lint n;cin >> n; lint k; cin >> k;
        vector<lint>arr;
        forloop(0,n){lint x;cin >> x;arr.push_back(x);}
        lint ans=solveFunction(arr,k);
        cout << ans << endl;
    }
}

int main(){
    int test;
    cin >> test;
    solution(test);
}