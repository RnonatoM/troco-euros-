#include <iostream>
#include <vector>

using namespace std;

int main() {
    //calcula o troco otimizado para um determinado valor em euros
    vector<int> valores_notas = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int valor, quantidade;

    cout << "Digite o valor em euros: ";
    cin >> valor;

    cout << "Troco otimizado:" << endl;

    for (int valor_nota : valores_notas){
        quantidade = valor / valor_nota;
        valor %= valor_nota;

        if(quantidade > 0){
            cout << quantidade << " nota(s) de " << valor_nota << " euros" << endl;
        }
    }
    return 0;
}