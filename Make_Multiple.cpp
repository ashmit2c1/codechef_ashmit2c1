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


lint solvefunction(lint a,lint b){
    if(a>b){
        return false;
    }
    if(a==b){
        return true;
    }
    if(b%a==0){
        return true;
    }
    lint diff = abs(a-b);
    if(diff>=a){
        return true;
    }
    return false;
}

void solution(int test){
    while(test--){
        lint a;lint b;
        cin >> a >> b;
        bool ans=solvefunction(a,b);
        if(ans==true){print("YES")}else{print("NO")}

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}