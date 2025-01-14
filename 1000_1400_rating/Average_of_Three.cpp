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


vector<lint>solvefunction(lint number){
    vector<lint>ans;
    if(number==2){
        ans.push_back(1);
        ans.push_back(2);
        ans.push_back(3);
        return ans;
    }
    ans.push_back(number-1);ans.push_back(number);ans.push_back(number+1);
    return ans;
}

void solution(int test){
    while(test--){
        lint number;cin >> number;
        vector<lint>ans=solvefunction(number);
        forloop(0,ans.size()){
            cout << ans[i] << " ";
        }
        cout << "\n";

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}