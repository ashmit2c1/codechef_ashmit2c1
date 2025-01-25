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


lint solvefunction(lint points,lint matches){
    if(points<=matches){
        return 0;
    }
    lint wins=0;
    while(points>=matches){
        points-=2;
        matches--;
        wins++;
    }
    return wins-1;
}

void solution(int test){
    while(test--){
        lint points;lint matches;
        cin >> points >> matches;
        lint ans=solvefunction(points,matches);
        print(ans)

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}