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

string solve(string s){
    string ans="";
    for(int i=0;i<s.size()-1;i+=2){
        char char1 = s[i];
        char char2 = s[i+1];
        if(char1=='0' && char2=='0'){
            ans+="A";
        }
        if(char1=='1' && char2=='1'){
            ans+="G";
        }
        if(char1=='0' && char2=='1'){
            ans+="T";
        }
        if(char1=='1' && char2=='0'){
            ans+="C";
        }
    }
    return ans;
}
void solution(int test){
    while(test--){
        lint n;cin >> n;
        string s;cin >> s;
        string ans=solve(s);
        print(ans)

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}