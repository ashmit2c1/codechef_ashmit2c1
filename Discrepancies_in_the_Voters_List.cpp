#include<bits/stdc++.h>
using namespace std;
#define lint long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";
#define output(arr) for(int i=0;i<arr.size();i++){cout<<arr[i]<<"\n";}
#define asort(v) sort(v.begin(), v.end())
#define dsort(v) sort(v.begin(), v.end(), greater<int>())
#define intmax INT_MAX
#define intmin INT_MIN
#define lintmax LLONG_MAX
#define lintmin LLONG_MIN
#define mp(x,y) make_pair(x,y)


vector<lint>solvefunction(vector<lint>&arr1,vector<lint>&arr2,vector<lint>&arr3){
    unordered_map<lint,lint>mp;
    forloop(0,arr1.size()){mp[arr1[i]]++;}
    forloop(0,arr2.size()){mp[arr2[i]]++;}
    forloop(0,arr3.size()){mp[arr3[i]]++;}
    vector<lint>ans;
    for(auto it=mp.begin();it!=mp.end();it++){
        lint freq=it->second;
        lint id = it->first;
        if(freq>=2){
            ans.push_back(id);
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}

void solution(){
    lint n1;lint n2;lint n3;
    cin >> n1 >> n2 >> n3;
    vector<lint>arr1,arr2,arr3;
    forloop(0,n1){lint x;cin >> x;arr1.push_back(x);}
    forloop(0,n2){lint x;cin >> x;arr2.push_back(x);}
    forloop(0,n3){lint x;cin >> x;arr2.push_back(x);}
    vector<lint> ans=solvefunction(arr1,arr2,arr3);
    print(ans.size())
    output(ans)

}
int main(){

    solution();
}