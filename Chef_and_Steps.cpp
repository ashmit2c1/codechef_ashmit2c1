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


string solvefunction(vector<lint>&arr,lint stepSize){
    string ans="";
    forloop(0,arr.size()){
        lint distance = arr[i];
        if(distance%stepSize==0){
            ans+="1";
        }
        else{
            ans+="0";
        }
    }
    return ans;
}

void solution(int test){
    while(test--){
        lint n;lint stepSize;
        cin >> n >> stepSize;
        vector<lint>arr;
        forloop(0,n){
            lint x;cin >> x;arr.push_back(x);
        }
        string ans=solvefunction(arr,stepSize);
        print(ans)

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}