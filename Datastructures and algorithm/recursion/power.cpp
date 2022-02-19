
#include<iostream>
using namespace std;
int output = 0;
int POW = 0;
int power(int x, int n) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
 if(n == 0){
      return 1;
  }
    POW = power(x,n-1);
    output = x * POW;
    return output;

}

int main(){
    int x;
    int n;
    int out;
    cin>>x;
    cin>>n;
    out = power(x,n);
    cout<<out;
}
