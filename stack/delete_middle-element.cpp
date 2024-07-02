#include <iostream>
#include<stack>
using namespace std;
void solve(stack<int>&s, int count,int size){
    if(count==size/2){
        s.pop();
        return;
    }
    
    int num=s.top();
    s.pop();
    solve(s,count+1,size);
    s.push(num);
}
void deleteMiddle(stack<int> &s, int N){
	
  	int count = 0;
    solve(s, count, N);
   
}
int main() {
   stack <int> s;
   int n;
   for(int i=0;i<3;i++){
       cin>>n;
       s.push(n);
   }
   int N=s.size();
   deleteMiddle(s,N);
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}