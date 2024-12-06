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

// using stack we  
void answerFunction(lint n){
    stack<lint>st;
    while(n!=0){
        lint rem=n%2;
        st.push(rem);
        n=n/2;
    }
    while(st.empty()==false){
        cout<<st.top();
        st.pop();
    }
    cout << "\n";
}

vector<lint> solveFunction(lint n){
    vector<lint>ans;
    while(n!=0){
        lint rem=n%2;
        ans.push_back(rem);
        n=n/2;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

void solution(int test){
    while(test--){
        lint n;cin >> n;
        answerFunction(n);

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}