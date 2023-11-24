#include <iostream>
#include <list>
#include <stack>
using namespace std;

bool eRetangulo(int a, int b, int c, int d) {
    int lista[4] = {a, b, c, d};
    list<int> organizado[4];
    organizado->push_back(a);


    for (int i = 0; i < 4; i++) {
        if (lista[i] >= organizado[0]) {
            organizado->push_front(lista[i]);
        } else {
            organizado->push_back(lista[i]);
        }
    }
    
    if (organizado[0] == organizado[1] && organizado[2] == organizado[3]) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int a, b, c, d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    if (eRetangulo(a, b, c, d)) {
        cout << "RETANGULO";
    } else {
        cout << "NAO EH UM RETANGULO";
    }
}