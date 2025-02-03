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

bool solvefunction(lint n,lint p,vector<lint>&arr){
    lint minthres = p/2;
    lint maxthres = p/10;
    lint cake=0;
    lint hard=0;
    forloop(0,arr.size()){
        lint num = arr[i];
        if(num>=minthres){cake++;}
        if(num<=maxthres){hard++;}
    }
    if(cake==1 && hard==2){
        return true;
    }
    return false;
}
void solution(int test){
    while(test--){
        lint n;lint p;
        cin >> n >> p;
        vector<lint>arr;
        forloop(0,n){lint x;cin >> x;arr.push_back(x);}
        bool ans=solvefunction(n,p,arr);
        if(ans==true){print("yes")}else{print("no")}
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}