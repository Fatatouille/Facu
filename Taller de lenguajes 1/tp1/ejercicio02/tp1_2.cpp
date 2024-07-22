#include <iostream>
using namespace std;

int cuadrado(int a){
    return (a*a);
}
void cuavoid(int *b){
    *b= *b * *b;
}
void invertir(int a, int b){
    int c=a;
    a=b;
    b=c;
    cout << "a= " << a << endl << "b= " << b << endl;
}
void orden (int a, int b){
    int c;
    if(b<a){
        c=a;
        a=b;
        b=c;
        cout << "a= " << a << endl << "b= " << b;
    }else{
        cout << "a= " << a << endl << "b= " << b;
    }
}


int main(){
    int a, *b=&a, c;
    cin >> a;
    cout << a << endl << &a << endl;
    cout << "Cuadrado comun " << cuadrado(a) << endl;
    cuavoid(b);
    cout << "Cuadrado void " << *b << endl;
    cout << "Dos numeros: ";
    cin >> a >> c;
    invertir(a, c);
    orden(a, c);
    return 0;
}