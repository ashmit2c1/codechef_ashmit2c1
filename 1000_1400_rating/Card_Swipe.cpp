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

int solvefunction(vector<int>& arr) {
    set<int> st;
    int cnt = 0;
    for (int i = 0; i < arr.size(); i++) {
        int person = arr[i];
        if (st.find(person) == st.end()) {
            st.insert(person);
            cnt = max(cnt, (int)st.size());
        } else {
            st.erase(person);
        }
    }
    return cnt;
}
void solution(int test){
    while(test--){
        lint n;cin >> n;
        vector<int>arr;
        forloop(0,n){
            int x;cin >> x;arr.push_back(x);
        }
        int ans=solvefunction(arr);
        print(ans)

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}