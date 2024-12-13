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

lint __gcd(lint a, lint b) {
    while (b != 0) {
        lint temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

lint solveFunction(vector<lint>&arr){
    vector<lint>prefixGCD(arr.size(),0);
    vector<lint>suffixGCD(arr.size(),0);
    prefixGCD[0]=arr[0];
    suffixGCD[arr.size()-1]=arr[arr.size()-1];
    forloop(1,arr.size()){
        prefixGCD[i]=__gcd(prefixGCD[i-1],arr[i]);
    }
    for(lint i=arr.size()-2;i>=0;i--){
        suffixGCD[i]=__gcd(suffixGCD[i+1],arr[i]);
    }

    lint maxGCD=0;
    forloop(0,arr.size()){
        lint gcdExcluding;
        if(i==0){gcdExcluding=suffixGCD[i+1];}
        if(i==arr.size()-1){gcdExcluding=prefixGCD[i-1];}
        else{
            gcdExcluding=__gcd(prefixGCD[i-1],suffixGCD[i+1]);
        }
        maxGCD=max(maxGCD,gcdExcluding);
    }
    return maxGCD;
}

void solution(){
    lint n;cin >> n;
    vector<lint>arr;
    forloop(0,n){lint x;cin >> x;arr.push_back(x);}
    lint ans=solveFunction(arr);
    print(ans)

}
int main(){

    solution();
}