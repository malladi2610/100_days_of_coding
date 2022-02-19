#include<iostream>

using namespace std;

int main(){
    int m,n;
    cin >> m >> n;
    int** p = new int*[m];
    for (int i = 0;i<m;i++){
        p[i] = new int[n];  //This creates the rows
        for(int j = 0; j < n; j++){
            cin >> p[i][j];  //This creates the columns and add data
        }
    }

    //Now to delete memory
    for (int i = 0; i <m ;i++){
        delete [] p[i];
    }

    delete [] p;
    
}