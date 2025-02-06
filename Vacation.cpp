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
lint findans(lint x1, lint y1, lint x2, lint y2, vector<vector<lint>> &pref) {
    lint ans = pref[x2][y2];
    if (x1 > 0) {
        ans -= pref[x1 - 1][y2];
    }
    if (y1 > 0) {
        ans -= pref[x2][y1 - 1];
    }
    if (x1 > 0 && y1 > 0) {
        ans += pref[x1 - 1][y1 - 1];
    }
    return ans;
}
vector<lint> solvefunction(vector<vector<lint>> &mat, vector<pair<pair<lint, lint>, pair<lint, lint>>> &queries) {
    vector<vector<lint>> pref(mat.size(), vector<lint>(mat[0].size()));
    for (int i = 0; i < mat.size(); i++) {
        for (int j = 0; j < mat[i].size(); j++) {
            pref[i][j] = mat[i][j];
            if (i > 0) {
                pref[i][j] += pref[i - 1][j];
            }
            if (j > 0) {
                pref[i][j] += pref[i][j - 1];
            }
            if (i > 0 && j > 0) {
                pref[i][j] -= pref[i - 1][j - 1];
            }
        }
    }
    vector<lint> ans;
    for (int i = 0; i < queries.size(); i++) {
        lint x1 = queries[i].first.first;
        lint y1 = queries[i].first.second;
        lint x2 = queries[i].second.first;
        lint y2 = queries[i].second.second;
        lint answer = findans(x1, y1, x2, y2, pref);
        if (answer > 0) {  
            ans.push_back(0);
        } else {
            ans.push_back(1);
        }
    }
    return ans;
}

void solution() {
    lint n, m;
    cin >> n >> m;
    vector<vector<lint>> mat(n, vector<lint>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
            if (mat[i][j] == 1) {
                mat[i][j] = 0;
            } else {
                mat[i][j] = 1;
            }
        }
    }
    lint q;
    cin >> q;
    vector<pair<pair<lint, lint>, pair<lint, lint>>> queries;
    for (int i = 0; i < q; i++) {
        lint a, b, c, d;
        cin >> a >> b >> c >> d;
        queries.push_back({{a - 1, b - 1}, {c - 1, d - 1}}); 
    }
    vector<lint>ans=solvefunction(mat,queries);
    forloop(0,ans.size()){print(ans[i])}

}
int main(){

    solution();
}