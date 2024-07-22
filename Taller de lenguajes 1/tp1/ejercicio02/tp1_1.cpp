#include <iostream>
using namespace std;

int main(){
    cout << "hola mundo";

    int a=78, *b = &a;
    cout << endl << *b << endl << &b << endl << b << endl << &a << endl << sizeof(a);
    return 0;
}