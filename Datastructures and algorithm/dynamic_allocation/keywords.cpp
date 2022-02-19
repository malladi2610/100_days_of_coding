#include<iostream>   //preprocessor directive
using namespace std;

#define PI 3.14  //There is no extra memory created because of it like int, float double

int main(){
    int r;
    cin >> r;

    cout << PI * r *r <<endl;
}

