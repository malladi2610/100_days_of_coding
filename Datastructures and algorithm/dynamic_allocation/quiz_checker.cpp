// #include <iostream>
// using namespace std;

// void updateValue(int *p){
//     *p = 610 % 255;
//     cout<<*p;
// }

// int main(){
//     char ch = 'A';
//     updateValue((int*)&ch);
//     cout << ch;
// }

// #include <iostream>
// using namespace std;

// void func(int i, int& j, int p){
//     i++;
//     j++;
//     p++;
// }

// int main(){
//     int i = 10;
//     int j = 6;
//     int &p = i;
//     func(i, j, p);
//     cout << i << " " << j << " " << p;
// }

#include <iostream>
using namespace std;

#define MULTIPLY(a, b) a*b

 

int main(){
    cout << MULTIPLY(2+3, 3+5);
    return 0;
}
