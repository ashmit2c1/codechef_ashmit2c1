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

bool solvefunction(string s){
    if(s.size()<=2){
        return true;
    }
    string leftsub = s.substr(1)+s[0];
    string rightsub = s[s.size()-1] + s.substr(0,s.size()-1);
    if(leftsub==rightsub){
        return true;
    }else{
        return false;
    }
}
void solution(int test){
    while(test--){
        string s;cin >> s;
        bool ans=solvefunction(s);
        if(ans==true){print("YES")}else{print("NO")}
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}