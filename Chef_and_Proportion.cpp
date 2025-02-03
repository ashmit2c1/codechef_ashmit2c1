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

void genFunction(vector<vector<int>>& ans, vector<int>& current, vector<bool>& visited, vector<lint>& arr) {
    if (current.size() == arr.size()) {
        ans.push_back(current);
        return;
    }
    for (int i = 0; i < arr.size(); i++) {
        if (visited[i] == true) {
            continue;
        }
        if (i > 0 && arr[i] == arr[i - 1] && visited[i - 1] != false) {
            continue;
        }
        visited[i] = true;
        current.push_back(arr[i]);
        genFunction(ans, current, visited, arr);
        visited[i] = false;
        current.pop_back();
    }
}

vector<vector<int>> genPerms(vector<lint>& arr) {
    vector<vector<int>> ans;
    vector<int> current;
    vector<bool> visited(arr.size(), false);
    genFunction(ans, current, visited, arr);
    return ans;
}

bool solvefunction(vector<lint>& arr) {
    vector<vector<int>> perm = genPerms(arr);
    for (int i = 0; i < perm.size(); i++) {
        vector<int> permutation = perm[i];
        // Corrected the comparison with cross-multiplication to avoid integer division issues
        if (permutation[0] * permutation[3] == permutation[1] * permutation[2]) {
            return true;
        }
    }
    return false;
}

void solution() {
    vector<lint> arr;
    forloop(0, 4) { 
        lint x; 
        cin >> x;
        arr.push_back(x);
    }
    bool ans = solvefunction(arr);
    if (ans == true) {
        print("Possible");
    } else {
        print("Impossible");
    }
}

int main() {
    solution();
}