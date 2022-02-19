#include<iostream>
using namespace std;
//To know the size of the memory allocated to p
int main(){
    int i = 10;
    int *p = &i; //Even a memory location will be allocated to p

    int *q = p; //The data of the p ois copied into q which is another pointer


    cout << sizeof(p) <<endl;
    cout << i <<endl;
    cout << *p<<endl;

    i++ ;
    //The change made above in 'i' is reflected in both as the pointer and the variable.
    cout << i <<endl;
    cout<< *p <<endl;

    int a = i;  // The code can be written as a = *p
    a++;
    cout<< a <<endl;
}