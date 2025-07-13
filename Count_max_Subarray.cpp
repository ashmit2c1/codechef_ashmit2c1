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

lint solve(vector<lint>&arr,lint k){
    lint ans=0;
    lint len=0;
    forloop(0,arr.size()){
        if(arr[i]<=k){
            len++;
        }else{
            ans+=len*(len+1)/2;
            len=0;
        }
    }
    ans+=len*(len+1)/2;
    return ans;
}
lint solve2(vector<lint>&arr,lint k){
    lint n=arr.size();
    lint lastK = -1;
    lint lastGreater = -1;
    lint res=0;
    forloop(0,arr.size()){
        if(arr[i]==k){
            lastK=i;
        }
        if(arr[i]>k){
            lastGreater=i;
        }
        if(lastK > lastGreater){
            res+=(lastK - lastGreater);
        }
    }
    return res;
}
void solution(){
    lint n;lint k;cin >> n >> k;
    vector<lint>arr;
    forloop(0,n){lint x;cin >> x;arr.push_back(x);}
    lint ans=solve2(arr,k);
    print(ans)

}
int main(){

    solution();
}