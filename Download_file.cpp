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
lint solvefunction(vector<pair<lint,lint>>& arr, lint freeMinutes) {
    lint totalCost = 0;
    for (int i = 0; i < arr.size(); i++) {
        lint time = arr[i].first;
        lint data = arr[i].second;
        
        if (freeMinutes > 0) {
            if (time <= freeMinutes) {
                freeMinutes -= time;
            } else {
                totalCost += (time - freeMinutes) * data;
                freeMinutes = 0;
            }
        } else {
            totalCost += time * data;
        }
    }
    return totalCost;
}
void solution(int test){
    while(test--){
        lint n;lint k;
        cin >> n >> k;
        vector<pair<lint,lint>>arr;
        forloop(0,n){
            lint time;cin >> time;
            lint data;cin >> data;
            arr.push_back({time,data});
        }
        lint ans=solvefunction(arr,k);
        print(ans)

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}