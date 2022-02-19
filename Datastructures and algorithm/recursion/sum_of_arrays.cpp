

#include<iostream>
using namespace std;

int smallsum = 0;
int x = 0;
int main(){
    int n;
    cin >> n;
    int input[100000];
    //int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    //cout << sum(input, n) << endl;
}


int sum(int input[], int n) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
    
  */
    x = n;
    int output = 0;
    x = x - 1;
    if(n==0 || n==1){
        return input[0] + input[1];
    }
    
    smallsum = sum(input[x -1], x);
        
    output = input[n] + smallsum;

    cout<<output;
    
    

}
