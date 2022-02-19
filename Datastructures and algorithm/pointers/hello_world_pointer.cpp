#include<iostream>
using namespace std;

int main(){
    int i = 10;
    cout << &i <<endl;
    int *p = &i;      // This is the pointer variable
    cout << p <<endl;

    cout << *p <<endl; //This is the dereference operator

    float f = 10.2;
    float * pf = &f;
    cout << pf <<endl;

    double d = 122.32;
    double *pd = &d;
    cout << pd <<endl;
    
}