#include<iostream>

using namespace std;

int factorial(int n) {

    //Base case
    if(n==0){
        return 1;
    }
    //Induction hypothesis
    int smallOutput = factorial(n - 1);
    //Induction step
    int output = n * smallOutput;
    return output;
}

int main(){
    int n;
    cin>> n;
    int output = factorial(n);
    cout<< output << endl;
}