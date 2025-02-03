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


int solvefunction(int a,int b){
    int diff = abs(a-b);
    string ans=to_string(diff);
    forloop(0,ans.size()){
        char character = ans[i];
        if(character!='0'){
            if(character=='9'){
                ans[i]='8';
                break;
            }
            ans[i]='9';
            break;
        }
    }
    int ret = stoi(ans);
    return ret;
}

void solution(){
    int a;int b;cin >> a >> b;
    int ans=solvefunction(a,b);
    print(ans)

}
int main(){

    solution();
}