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
int sumOfDigits(int num) {
    int sum = 0;
    while(num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

pair<int, int> solveFunction(vector<pair<int, int>>& arr) {
    int chefPoints = 0;
    int mortyPoints = 0;
    for(int i = 0; i < arr.size(); i++) {
        int chefPower = sumOfDigits(arr[i].first);
        int mortyPower = sumOfDigits(arr[i].second);
        if(chefPower > mortyPower) {
            chefPoints++;
        } else if(mortyPower > chefPower) {
            mortyPoints++;
        } else {
            chefPoints++;
            mortyPoints++;
        }
    }
    if(chefPoints == mortyPoints) {
        return {2, chefPoints};
    } else if(chefPoints > mortyPoints) {
        return {0, chefPoints};
    } else {
        return {1, mortyPoints};
    }
}

void solution(int test) {
    while(test--) {
        int piles;
        cin >> piles;
        vector<pair<int, int>> arr;
        for(int i = 0; i < piles; i++) {
            int x, y;
            cin >> x >> y;
            arr.push_back({x, y});
        }
        pair<int, int> ans = solveFunction(arr);
        cout << ans.first << " " << ans.second << "\n";
    }
}

int main() {
    int test;
    cin >> test;
    solution(test);
}