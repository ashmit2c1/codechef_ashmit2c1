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


lint solvefunction(lint number,lint breaktime,lint timetaken){
    lint ans=0;
    while(number>0){
        if(number&1){
            lint solved = (number+1)/2;
            number=number-solved;
            lint solvetime = timetaken*solved;
            if(number>0){
                ans+=breaktime;
            }
            ans+=solvetime;
            timetaken=timetaken*2;
        }
        else{
            lint solved = number/2;
            number=number-solved;
            lint solvetime = timetaken*solved;
            if(number>0){
                ans+=breaktime;
            }
            ans+=solvetime;
            timetaken=timetaken*2;
        }
    }
    return ans;
}

void solution(int test){
    while(test--){
        lint n;lint b;lint m;
        cin >> n >> b >> m;
        lint ans=solvefunction(n,b,m);
        print(ans)

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}