#include<iostream>
using namespace std;

int main(){
int a = 10;
int *p = &a;
int **q = &p;
cout<<p<<endl;
int b = 20;
*q = &b;
cout<<&b<<endl;
cout<<*q<<endl;
cout<<p<<endl;
(*p)++;

cout << a << " " << b << endl;
}