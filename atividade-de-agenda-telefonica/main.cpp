#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    int opcao;
    
    do {
        cout << "Escolha uma opção: \n1 - Cadastrar novo contato\n2 - Buscar contato pelo telefone\n3 - Buscar contato pelo nome\n4 - Sair\n";
        cin >> opcao;
        
        if (opcao == 1) {
            string nome, telefone;
            cout << "Digite o nome do contato: ";
            cin >> nome;
            cout << "Digite o telefone do contato: ";
            cin >> telefone;
            
            ofstream arquivo("agenda.txt", ios::app);
            arquivo << nome << " " << telefone << endl;
            arquivo.close();
        } else if (opcao == 2) {
            string telefone;
            cout << "Digite o telefone do contato que deseja buscar: ";
            cin >> telefone;
            
            ifstream arquivo("agenda.txt");
            string nome, num;
            bool encontrado = false;
            while (arquivo >> nome >> num) {
                if (num == telefone) {
                    cout << "Contato encontrado - Nome: " << nome << ", Telefone: " << num << endl;
                    encontrado = true;
                    break;
                }
            }
            if (!encontrado) {
                cout << "Contato não encontrado.\n";
            }
            arquivo.close();
        } else if (opcao == 3) {
            string nome;
            cout << "Digite o nome do contato que deseja buscar: ";
            cin >> nome;
            
            ifstream arquivo("agenda.txt");
            string n, telefone;
            bool encontrado = false;
            while (arquivo >> n >> telefone) {
                if (n == nome) {
                    cout << "Contato encontrado - Nome: " << n << ", Telefone: " << telefone << endl;
                    encontrado = true;
                    break;
                }
            }
            if (!encontrado) {
                cout << "Contato não encontrado.\n";
            }
            arquivo.close();
        }
    } while (opcao != 4);
    
    return 0;
}