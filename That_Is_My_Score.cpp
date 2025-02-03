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


lint solveFunction(vector<pair<lint,lint>>arr){
    lint score=0;
    vector<lint>questionPoints(8,-1);
    forloop(0,arr.size()){
        lint question=arr[i].first;
        lint point=arr[i].second;
        questionPoints[question-1]=max(questionPoints[question-1],point);
    }
    forloop(0,questionPoints.size()){
        if(questionPoints[i]!=-1){score+=questionPoints[i];}
    }
    return score;
}

void solution(int test){
    while(test--){
        lint n;cin >> n;
        vector<pair<lint,lint>>arr;
        forloop(0,n){lint x;lint y;cin >> x>>y;arr.push_back({x,y});}
        lint ans=solveFunction(arr);
        print(ans)
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}