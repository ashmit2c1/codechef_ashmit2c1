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

set<char>st={'a','e','i','o','u'};

bool solveFunction(string s){
    lint cnt=0;
    forloop(0,s.size()){
        char character=s[i];
        if(st.find(character)==st.end()){
            cnt++;
            if(cnt>=4){
                return true;
            }
        }
        else{
            cnt=0;
        }
    }
    return false;
}

void solution(int test){
    while(test--){
        lint n;cin >> n;
        string s;cin >> s;
        bool ans=solveFunction(s);
        if(ans==true){print("NO")}else{print("YES")}

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}