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
lint solvefunction(string s,vector<lint>&prices){
    lint cost=0;
    for(int i='a';i<='z';i++){
        char character = i;
        bool foundCharacter=false;
        forloop(0,s.size()){
            if(character==s[i]){
                foundCharacter=true;
            }
        }
        if(foundCharacter==false){
            cost+=prices[i-97];
        }
    }
    return cost;
}
void solution(int test){
    while(test--){
        vector<lint>prices;
        forloop(0,26){
            lint x;cin >> x;prices.push_back(x);
        }
        string s;cin >> s;
        lint ans=solvefunction(s,prices);
        print(ans)
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}