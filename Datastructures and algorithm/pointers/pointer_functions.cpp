#include<iostream>
using namespace std;

void print(int *p){  //A pointer is passed to the function and its value is printed
    cout<< *p <<endl;
}
void incrementPointer(int *p){
    p = p + 1;
}

void increment(int *p){
    (*p)++;
}
int main(){
    int i = 10;
    int *p = &i;

    print(p);

    cout<< p <<endl;
    incrementPointer(p);
    cout<< p <<endl; // No change in the value

    cout<<*p<<endl;
    increment(p);  //Here as function also has the same address So, the value will change
    cout<<*p<<endl;
}


// void square(int *p){
//      int a = 10;   //Here a new variable is created
//  p = &a;           //Its value is assigned to p and then there is a change in the value
//  cout<<*p<<endl;
//  *p = (*p) * (*p);
//  cout<<*p<<endl;
// }

// int main(){
//  int a = 10;
//  square(&a);     
//  cout << a << endl;  //Here the output turns out to be 10
// }