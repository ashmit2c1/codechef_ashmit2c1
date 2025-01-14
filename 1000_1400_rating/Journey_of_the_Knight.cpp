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


bool solvefunction(vector<pair<pair<lint,lint>,pair<lint,lint>>>&arr){
    forloop(0,arr.size()){
        lint x1=arr[i].first.first;
        lint y1=arr[i].first.second;
        lint x2=arr[i].second.first;
        lint y2=arr[i].second.second;
        if(((x2+y2)-(x1+y1))&1==true){
            return false;
        }else{
            return true;
        }
    }
}

void solution(int test){
    while(test--){
        vector<pair<pair<lint,lint>,pair<lint,lint>>>arr;
        lint x1;lint y1;lint x2;lint y2;
        cin >> x1 >> y1 >> x2 >> y2;
        arr.push_back({{x1,y1},{x2,y2}});
        bool ans=solvefunction(arr);
        if(ans==true){print("YES")}else{print("NO")}
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}