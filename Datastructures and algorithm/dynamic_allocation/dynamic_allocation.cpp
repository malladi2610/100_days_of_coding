#include<iostream>
using namespace std;

int main(){
    int *p = new int;
    *p = 10;
    cout<<*p<<endl;

    double *pd = new double;

    char *c = new char;

    int *pa = new int[50];

    // int n;

    // cin >> n;

    // int *pa2 = new int[n];

    // pa2[0] = 10; // *pa2[0] this is the zerith element of the array, it will store the value in the zeroth place of array


    int n;
    cout<<"Enter the num of elements "<<endl;
    cin >> n;

    int *pa2 = new int[n];
    for (int i = 0; i<n; i++){

        cin>>pa2[i];
    }

    int max = -1;
    for(int i = 0; i< n; i++){
        if(max < pa2[i]){
            max = pa2[i];
        }
    }

    cout << max <<endl;
}