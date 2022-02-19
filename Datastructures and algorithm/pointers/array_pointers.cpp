#include<iostream>
using namespace std;

int main(){
    int a[10];
    cout<< a<<endl;   //This is the address of the 0th element which is the same as the address of complete array
    cout<< &a[0] <<endl;

    a[0] = 5;
    a[1] = 10;   

    cout<<*a<<endl;

   
    cout<< *(a  + 1)<<endl;   // a[i] = *(a + i)   is same as i[a] = *(i + a)

    int *p = &a[0];
    cout<<a<<endl;
    cout<<p<<endl;

    cout<<&a<<endl;
    cout<<&p<<endl;

    int a[] = {1, 2, 3, 4};
    int *p = a + 1;
    cout << *p << endl;

}