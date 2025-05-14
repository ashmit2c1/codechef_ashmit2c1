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

lint solvefunction(vector<lint>&arr){
    lint sum=0;
    forloop(0,arr.size()){
        sum+=arr[i];
    }
    if(sum>=35){
        return 0;
    }
    sort(arr.begin(),arr.end());
    lint count=0;
    forloop(0,arr.size()){
        if(arr[i]<7){
            sum+=(10-arr[i]);
            count++;
            if(sum>=35){
                break;
            }
        }
    }
    return count;
}
void solution(int test){
    while(test--){
        vector<lint>arr;
        forloop(0,5){
            lint x;cin >> x;arr.push_back(x);
        }
        lint ans=solvefunction(arr);
        print(100*ans)

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}