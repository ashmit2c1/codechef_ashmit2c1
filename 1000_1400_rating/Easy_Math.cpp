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



lint findSum(lint number){
    lint ans=0;
    while(number!=0){
        ans+=number%10;
        number=number/10;
    }
    return ans;
}

lint solvefunction(vector<lint>&arr){
    lint ans=INT_MIN;
    forloop(0,arr.size()){
        secondfor(i+1,arr.size()){
            lint num1 = arr[i];
            lint num2 = arr[j];
            lint product = num1*num2;
            lint sumofProduct = findSum(product);
            ans=max(ans,sumofProduct);
        }
    }
    return ans;
}

void solution(int test){
    while(test--){
        lint n;cin >> n;
        vector<lint>arr;
        forloop(0,n){lint x;cin >> x;arr.push_back(x);}
        lint ans=solvefunction(arr);
        print(ans)
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}