#include <iostream>
using namespace std;

int main() {
    // with pointers or without pointers 
    int num = 20;
    int &num_1 = num;

    int *ptr = &num;

    cout <<"Number:" << num << endl;
    cout <<"Memory location:" <<&num_1 << endl;

    cout <<"Memory location using pointer:" << ptr << endl;

};