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


vector<lint> solvefunction(vector<pair<pair<lint,lint>,lint>>&arr){
    vector<lint>ans;
    forloop(0,arr.size()){
        lint initialFace=arr[i].first.first;
        lint numberOfgames=arr[i].first.second;
        lint guess=arr[i].second;
        if(numberOfgames&1==true){
            if(guess==1){
                if(initialFace==1){
                    ans.push_back(numberOfgames/2);
                }
                else{
                    ans.push_back(1+numberOfgames/2);
                }
            }
            else{
                if(initialFace==1){
                    ans.push_back(1+numberOfgames/2);
                }
                else{
                    ans.push_back(numberOfgames/2);
                }
            }
        }
        else{
            ans.push_back(numberOfgames/2);
        }
    }
    return ans;
}

void solution(int test){
    while(test--){
        lint games;cin >> games;
        vector<pair<pair<lint,lint>,lint>>arr;
        forloop(0,games){
            lint face;lint number;lint guess;
            cin >> face >> number >> guess;
            arr.push_back({{face,number},guess});
        }
        vector<lint> ans=solvefunction(arr);
        forloop(0,ans.size()){
            cout << ans[i] << "\n";
        }
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}