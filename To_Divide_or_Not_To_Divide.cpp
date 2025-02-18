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

lint solvefunction(lint a, lint b, lint n) {
    if (a % b == 0) {
        return -1;
    }
    lint ans = n;
    if (ans % a != 0) {
        ans = ans + (a - (ans % a));
    }
    while (ans % b == 0) {
        ans += a;
    }
    return ans;
}

void solution(int test) {
    while (test--) {
        lint a, b, n;
        cin >> a >> b >> n;
        lint ans = solvefunction(a, b, n);
        print(ans);
    }
}

int main() {
    int test;
    cin >> test;
    solution(test);
    return 0;
}