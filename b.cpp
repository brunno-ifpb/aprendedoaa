#include <iostream>
#include <sstream>
using namespace  std;

int distancia(int lista[4]) {
    return ((lista[2]-lista[0]) * 2 + (lista[3]-lista[1]) * 2) * 0.5;
}

int main() {
    int lista[4];
    getline(cin, lista);
    distancia(distancia);
}