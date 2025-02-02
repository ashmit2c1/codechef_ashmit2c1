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

lint solvefunction(vector<lint>&len,vector<lint>&rat){
    lint best=INT_MIN;
    lint bestrating = INT_MIN;
    lint index=-1;
    forloop(0,len.size()){
        lint curr = len[i]*rat[i];
        if(curr > best){
            best = curr;
            index=i;
            bestrating = rat[i];
        }else if(curr==best){
            if(rat[i] > bestrating){
                bestrating=rat[i];
                best=curr;
                index=i;
            }
        }
    }
    return index+1;
}
void solution(int test){
    while(test--){
        lint n;cin >> n;
        vector<lint>len;
        vector<lint>rat;
        forloop(0,n){
            lint x;cin >> x;len.push_back(x);
        }
        forloop(0,n){
            lint x;cin >> x;rat.push_back(x);
        }
        lint ans=solvefunction(len,rat);
        print(ans)

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}