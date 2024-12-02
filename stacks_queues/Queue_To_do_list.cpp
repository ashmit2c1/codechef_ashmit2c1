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


void solveFunction(queue<lint>&q){
    unordered_set<lint>st;
    while(q.empty()==false){
        lint val=q.front();
        q.pop();
        st.insert(val);
    }
    vector<lint>ans;
    for(auto it=st.begin();it!=st.end();it++){
        ans.push_back(*it);
    }
    reverse(ans.begin(),ans.end());
    forloop(0,ans.size()){
        print(ans[i])
    }
}

void solution(){
    queue<lint>q;
    forloop(0,10){
        lint x;cin >> x;q.emplace(x);
    }
    solveFunction(q);
}
int main(){

    solution();
}