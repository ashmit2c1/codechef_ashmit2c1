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


lint solveusingpref(lint in,vector<lint>&arr){
    arr[0]+=in;
    forloop(1,arr.size()){
        arr[i]+=arr[i-1];
    }
    return *max_element(arr.begin(),arr.end());
}

lint solvefunction(lint in,vector<lint>&arr){
    lint peopleinroom=in;
    lint maxpeople = peopleinroom;
    forloop(0,arr.size()){
        lint people = arr[i];
        peopleinroom+=people;
        maxpeople=max(maxpeople,peopleinroom);
    }
    return maxpeople;
}

void solution(int test){
    while(test--){
        lint n;lint in;
        cin >> n >> in;
        vector<lint>arr;
        forloop(0,n){lint x;cin >> x;arr.push_back(x);}
        lint ans=solveusingpref(in,arr);
        print(ans)

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}