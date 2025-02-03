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



string solvefunction(lint operations,string binary){
    if(binary[0]=='0'){
        binary[0]='1';operations--;
    }
    forloop(0,operations){binary+="0";}
    return binary;
}

void solution(int test){
    while(test--){
        lint size;lint operations;
        cin >> size >> operations;
        string binary;cin >> binary;
        string ans=solvefunction(operations,binary);
        print(ans)

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}