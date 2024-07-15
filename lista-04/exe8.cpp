#include <iostream>
using namespace std;

// Faça um algoritmo para ler um número que é um código de usuário. Caso este
// código
// seja
// diferente de um código armazenado stringernamente no algoritmo (igual a 1234)
// deve ser apresentada a mensagem ‘Usuário inválido!’. Caso o Código seja
// correto, deve ser lido outro valor que é a senha. Se esta senha estiver
// incorreta (a certa é 9999) deve ser mostrada a mensagem ‘senha incorreta’.
// Caso a senha esteja correta, deve ser mostrada a mensagem ‘Acesso permitido’.

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    string codigo;
    cin >> codigo;

    if (codigo != "1234") {
        cout << "Usuário inválido!" << '\n';
        return 0;
    }

    string senha;
    cin >> senha;

    if (senha != "9999") {
        cout << "senha incorreta" << '\n';
        return 0;
    }

    cout << "Acesso permitido" << '\n';
    return 0;
}
