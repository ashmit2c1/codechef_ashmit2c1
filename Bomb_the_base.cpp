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


lint solvefunction(vector<lint>&arr,lint k){
    lint index=-1;
    for(int i=arr.size()-1; i>=0;i--){
        if(arr[i]<k){
            index=i;
            break;
        }
    }
    if(index==-1){
        return 0;
    }else{
        return index+1;
    }
}
void solution(int test){
    while(test--){
        lint n;lint k;
        cin >> n >> k;
        vector<lint>arr;
        forloop(0,n){
            lint x;cin >> x;arr.push_back(x);
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