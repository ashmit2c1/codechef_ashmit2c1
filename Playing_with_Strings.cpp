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


bool solveFunction(string s,string r){
    unordered_map<char,lint>mp1;
    unordered_map<char,lint>mp2;
    forloop(0,s.size()){
        char character1=s[i];
        char character2=r[i];
        mp1[character1]++;
        mp2[character2]++;
    }
    bool condition = (mp1['1']==mp2['1']) && (mp2['0']==mp2['0']);
    if(condition==true){return true;}else{return false;}
}

void solution(int test){
    while(test--){
        lint n;cin >> n;
        string s;cin >> s;
        string r;cin >> r;
        bool ans=solveFunction(s,r);
        if(ans==true){print("YES")}else{print("NO")}

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}