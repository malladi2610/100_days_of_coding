#include<iostream>
using namespace std;

int main(){
    char str[] = "abc";
    char *ptr = "abc"; //This is wrong as a temp variable is created and *ptr points that temp position which is wrong and could lead to errors 

    int a[] = {1,2,3};
    char b[] = "abc";
    cout<<a <<endl; //Here the address of first element of a array is printed
    cout<<b<<endl;  //Here the entire string is printed

    char *c = &b[0];
    cout<<c<<endl; //Here also the entire string is printed

    char c1 = 'a';
    char *pc = &c1;
    cout<<c1<<endl;
    cout<<pc<<endl; //This will print the elements in C1 until it encounted the \0 'null character'

}