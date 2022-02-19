#include <iostream>
using namespace std;

int main(){
    int i = 10;
    int *p = &i;

    cout<<p<<endl;
    p = p + 1;  //It tries to point to the next integer of the p it is increased by 4 bytes
    cout<<p<<endl;

    cout<<p<<endl;
    p = p - 1;  //It tries to point to the next integer of the p it is decreased by 4 bytes
    cout<<p<<endl;

    double d = 10.28;
    double *dp = &d;

    cout<<dp<<endl;
    dp = dp + 1;  //It tries to point to the next integer of the p it is increased by 8 bytes
    cout<<dp<<endl;

    cout<<dp<<endl;
    dp = dp - 1;  //It tries to point to the next integer of the p it is decreased by 8 bytes
    cout<<dp<<endl;

}