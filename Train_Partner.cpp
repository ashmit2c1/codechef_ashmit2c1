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

string solvefunction(lint n){
    lint rem = n%8;
    if(rem==0){
        string seat = to_string(n-1);
        seat+="SL";
        return seat;
    }
    if(rem==7){
        string seat = to_string(n+1);
        seat+="SU";
        return seat;
    }
    if(rem==1){
        string seat = to_string(n+3);
        seat+="LB";
        return seat;
    }
    if(rem==2){
        string seat = to_string(n+3);
        seat+="MB";
        return seat;
    }
    if(rem==3){
        string seat = to_string(n+3);
        seat+="UB";
        return seat;
    }
    if(rem==4){
        string seat = to_string(n-3);
        seat+="LB";
        return seat;
    }
    if(rem==5){
        string seat = to_string(n-3);
        seat+="MB";
        return seat;
    }
    if(rem==6){
        string seat = to_string(n-3);
        seat+="UB";
        return seat;
    }
}
void solution(int test){
    while(test--){
        lint n;cin >> n;
        string ans=solvefunction(n);
        print(ans)

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}