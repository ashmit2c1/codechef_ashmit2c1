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


lint solvefunction(lint x1,lint x2,lint y1,lint y2){
    lint sum1=x1+y1;
    lint sum2=x2+y2;
    if(x1==x2 && y1==y2){
        return 0;
    }
    if((sum1&1)==(sum2&1)){
        return 2;
    }else{
        return 1;
    }
}
void solution(int test){
    while(test--){
        lint x1;lint y1;lint x2;lint y2;
        cin >> x1 >> y1 >> x2 >> y2;
        lint ans=solvefunction(x1,x2,y1,y2);
        print(ans)

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}