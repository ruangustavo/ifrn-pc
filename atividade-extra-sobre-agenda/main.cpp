#include <algorithm>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Acao {
    string tipo;
    string data;
    string hora;
    string descricao;
};

vector<Acao> agenda;

void adicionar_acao() {
    Acao nova_acao;
    cout << "Tipo (compromisso, tarefa, lembrete, evento): ";
    cin >> nova_acao.tipo;
    cout << "Data (DD/MM/AAAA): ";
    cin >> nova_acao.data;
    cout << "Hora (HH:MM): ";
    cin >> nova_acao.hora;
    cin.ignore();
    cout << "Descrição: ";
    getline(cin, nova_acao.descricao);
    agenda.push_back(nova_acao);
    cout << "Ação adicionada com sucesso!" << endl;
}

void buscar_por_data() {
    string data_busca;
    cout << "Digite a data para buscar (DD/MM/AAAA): ";
    cin >> data_busca;
    for (const auto& acao : agenda) {
        if (acao.data == data_busca) {
            cout << acao.tipo << " - " << acao.data << " " << acao.hora << " - "
                 << acao.descricao << endl;
        }
    }
}

void buscar_por_tipo() {
    string tipo_busca;
    cout << "Digite o tipo de ação para buscar: ";
    cin >> tipo_busca;
    for (const auto& acao : agenda) {
        if (acao.tipo == tipo_busca) {
            cout << acao.tipo << " - " << acao.data << " " << acao.hora << " - "
                 << acao.descricao << endl;
        }
    }
}

void buscar_por_palavra_chave() {
    string palavra_chave;
    cout << "Digite a palavra-chave para buscar: ";
    cin >> palavra_chave;
    for (const auto& acao : agenda) {
        if (acao.descricao.find(palavra_chave) != string::npos) {
            cout << acao.tipo << " - " << acao.data << " " << acao.hora << " - "
                 << acao.descricao << endl;
        }
    }
}

void editar_acao() {
    string data, hora;
    cout << "Digite a data da ação a ser editada (DD/MM/AAAA): ";
    cin >> data;
    cout << "Digite a hora da ação a ser editada (HH:MM): ";
    cin >> hora;

    for (auto& acao : agenda) {
        if (acao.data == data && acao.hora == hora) {
            cout << "Nova descrição: ";
            cin.ignore();
            getline(cin, acao.descricao);
            cout << "Ação editada com sucesso!" << endl;
            return;
        }
    }
    cout << "Ação não encontrada." << endl;
}

void remover_acao() {
    string data, hora;
    cout << "Digite a data da ação a ser removida (DD/MM/AAAA): ";
    cin >> data;
    cout << "Digite a hora da ação a ser removida (HH:MM): ";
    cin >> hora;

    auto it = remove_if(agenda.begin(), agenda.end(), [&](const Acao& acao) {
        return acao.data == data && acao.hora == hora;
    });

    if (it != agenda.end()) {
        agenda.erase(it, agenda.end());
        cout << "Ação removida com sucesso!" << endl;
    } else {
        cout << "Ação não encontrada." << endl;
    }
}

void listar_acoes() {
    for (const auto& acao : agenda) {
        cout << acao.tipo << " - " << acao.data << " " << acao.hora << " - "
             << acao.descricao << endl;
    }
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    string comando;
    while (true) {
        cout << "\nComandos disponíveis: adicionar, buscar_data, buscar_tipo, "
                "buscar_palavra, editar, remover, listar, sair"
             << endl;
        cout << "Digite um comando: ";
        cin >> comando;

        if (comando == "adicionar") {
            adicionar_acao();
        } else if (comando == "buscar_data") {
            buscar_por_data();
        } else if (comando == "buscar_tipo") {
            buscar_por_tipo();
        } else if (comando == "buscar_palavra") {
            buscar_por_palavra_chave();
        } else if (comando == "editar") {
            editar_acao();
        } else if (comando == "remover") {
            remover_acao();
        } else if (comando == "listar") {
            listar_acoes();
        } else if (comando == "sair") {
            break;
        } else {
            cout << "Comando inválido. Tente novamente." << endl;
        }
    }

    return 0;
}