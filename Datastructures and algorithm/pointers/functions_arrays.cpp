#include<iostream>
using namespace std;

int sum(int a[], int size){   //Here the array is passed as a pointer So, its size here is 8 not 40
    int ans = 0;
    for(int i = 0; i<size;i++){
        ans += a[i];
    }
    return ans;
}

int main(){
    int a[10];
    cout<<sum(a, 10)<<endl;

    cout<<sum(a+3,7)<<endl; //Here the part of the array is passed, which was due to array being passed as a pointer
}