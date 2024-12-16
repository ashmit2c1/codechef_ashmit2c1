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

string solveFunction(vector<lint>&hands,vector<lint>&gloves){
    bool front=true;
    bool back=true;
    forloop(0,hands.size()){
        if(hands[i]>gloves[i]){
            front=false;
        }
    }
    reverse(gloves.begin(),gloves.end());
    forloop(0,hands.size()){
        if(hands[i]>gloves[i]){
            back=false;
        }
    }
    if(front==true && back==false){return "front";}
    if(front==true && back==true){return "both";}
    if(front==false && back==true){return "back";}
    return "none";
}

void solution(int test){
    while(test--){
        lint n;cin >> n;
        vector<lint>hands;
        vector<lint>gloves;
        forloop(0,n){
            lint x;cin >> x;hands.push_back(x);
        }
        forloop(0,n){
            lint x;cin >> x;gloves.push_back(x);
        }
        string ans=solveFunction(hands,gloves);
        print(ans);
    }
}

int main(){
    int test;
    cin >> test;
    solution(test);
}