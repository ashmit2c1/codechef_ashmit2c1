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


lint solve(vector<lint>&arr){
    lint cnt=0;
    lint maxcnt=0;
    forloop(0,arr.size()){
        if(arr[i]!=0){
            cnt++;
        }else{
            maxcnt = max(maxcnt,cnt);
            cnt=0;
        }
    }
    maxcnt=max(maxcnt,cnt);
    return maxcnt;
}
void solution(int test){
    while(test--){
        lint n;cin >> n;
        vector<lint>arr1,arr2;
        forloop(0,n){lint x;cin >> x;arr1.push_back(x);}
        forloop(0,n){lint x;cin >> x;arr2.push_back(x);}
        lint om = solve(arr1);
        lint addy = solve(arr2);
        if(om > addy ){print("Om")}
        if(addy > om){print("Addy")}
        if(om==addy){print("Draw")}

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}