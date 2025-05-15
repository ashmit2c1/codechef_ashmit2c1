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

pair<bool,string>solvefunction(lint n,lint k){
  lint leafnodes = pow(2,n);
  if(n==1){
    if(k==1){
      return {true,"10"}
    }
    if(k==3){
      return {true,"11"};
    }
    if(k==2){
      return {false,""};
    }
  }
  if(n==2){
    if(k==3){
      return {true,"1100"};
    }
    if(k==4){
      return {true,"1110"};
    }
    return {false,""};
  }
  if(k%3==0){
    lint ones=k/3;
    string s="";
    forloop(0,ones){
      s+="1";
    }
    forloop(0,leafnodes-ones){
      s+="0";
    }
    return {true,"s"};
  }else{
    
  }

}
void solution(int test){
    while(test--){
      lint n;lint k;
      cin >> n >> k;
      pair<bool,string>ans=solvefunction(n,k);


    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}