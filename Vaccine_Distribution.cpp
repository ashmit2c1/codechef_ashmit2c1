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


lint solvefunction(vector<lint>&arr,lint d){
    lint atrisk=0;
    forloop(0,arr.size()){
        lint age=arr[i];
        if(age>=80 || age<=9){
            atrisk++;
        }
    }
    lint notatrisk=arr.size()-atrisk;
    lint day=0;
    while(atrisk>0){
        atrisk-=d;
        day++;
    }
    while(notatrisk>0){
        notatrisk-=d;
        day++;
    }
    return day;
}
void solution(int test){
    while(test--){
        lint n;lint d;
        cin >> n >> d;
        vector<lint>arr;
        forloop(0,n){lint x;cin >> x;arr.push_back(x);}
        lint ans=solvefunction(arr,d);
        print(ans)


    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}