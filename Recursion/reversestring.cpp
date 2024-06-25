#include <iostream>
#include<string>
using namespace std;
void reverse(string &a,int i,int j){
    if(i>j){
        return;
    }
    swap(a[i],a[j]);
    i++;
    j--;
    reverse(a,i,j);
}
int main() {
    string a="Ruturaj";
    int i=0;
    int j=a.length()-1;
    reverse(a,i,j);
    cout<<a;
}

// Or
#include <iostream>
#include<string>
using namespace std;
string reverse(string a,int i,int j){
    if(i>j){
        return a;
    }
    swap(a[i],a[j]);
    i++;
    j--;
    return reverse(a,i,j);
}
int main() {
    string a="Ruturaj";
    int i=0;
    int j=a.length()-1;
    cout<<reverse(a,i,j);
    
} 