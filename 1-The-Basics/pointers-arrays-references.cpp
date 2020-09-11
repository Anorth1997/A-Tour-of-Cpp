#include<iostream>
using namespace std;

void copy_fct() {
    int v1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int v2[10];

    for (auto i=0; i < 10; ++i) {
        v2[i] = v1[i];
    }
}

void print() {
    int v[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (auto x: v) {
        cout << x << '\n';
    }
}

void increment() {
    int v[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    for (auto& x: v) {
        ++x;
    }
}

int main(int argc, char const *argv[]) {
    // array of elements of type char
    char v[6];    // array of 6 characters
    // a pointer
    char* p; // pointer to character

    p = &v[3]; // p points to v's fourth element
    char x = *p; // *p is the object that p points to

    increment();
    return 0;
}
