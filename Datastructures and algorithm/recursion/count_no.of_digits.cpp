#include<iostream>
using namespace std;

int n;
int out;
int smallAns = 0;
int count(int n){
     if(n <= 9){
        return 1;
    }
    smallAns = 1 + count(n / 10);
    int ans = smallAns;
    return ans;
}


int main(){
    cin>>n;
    out = count(n);

    cout<<out;


}