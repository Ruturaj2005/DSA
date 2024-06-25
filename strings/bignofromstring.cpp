#include <iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s="452786891";
    sort(s.begin(),s.end(),greater<int>());
    cout<<s<<endl;
}