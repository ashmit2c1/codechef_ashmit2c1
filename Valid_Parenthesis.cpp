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

bool solveFunction(string s){
    stack<char>st;
    forloop(0,s.size()){
        if(s[i]=='('){
            st.push('(');
        }
        else{
            st.pop();
        }
    }
    if(st.size()==0){return true;}
    else{return false;}
}

void solution(int test){
    while(test--){
        string s;cin >> s;
        bool ans=solveFunction(s);
        if(ans==true){
            cout << s << " : true" << "\n";
        }
        else{
            cout << s << " : false" << "\n";
        }

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}