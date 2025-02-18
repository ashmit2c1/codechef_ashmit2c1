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


lint solvefunction(lint a,lint b,lint c,lint p,lint q,lint r){
    lint sum=p+q+r;
    lint towin = sum/2;
    lint curr = a+b+c;
    lint inCaseA = p+b+c;
    lint inCaseB = a+q+c;
    lint inCaseC = a+b+r;
    if((inCaseA>towin) || (inCaseB>towin) || (inCaseC>towin)){
        return true;
    }
    return false;
}
void solution(int test){
    while(test--){
        lint a,b,c,p,q,r;
        cin >> a >> b >> c >> p >> q >> r;
        bool ans=solvefunction(a,b,c,p,q,r);
        if(ans==true){print("YES")}else{print("NO")}

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}