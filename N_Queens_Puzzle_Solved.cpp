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


double solvefunction(lint n){
    double val = 0.143*n;
    double ans = pow(val,n);
    double check = ans - floor(ans);
    if(check < 0.5){
        return floor(ans);
    }
    else{
        return floor(ans)+1;
    }
}

void solution(int test){
    while(test--){
        lint n;cin >> n;
        double ans=solvefunction(n);
        print(floor(ans))

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}