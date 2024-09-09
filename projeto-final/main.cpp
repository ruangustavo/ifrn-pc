#include <fstream>
#include <iomanip>
#include <ios>
#include <iostream>
#include <limits>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

struct Aluno {
    string nome;
    string matricula;
    string turma;
};

struct Disciplina {
    string nome;
    string codigo;
};

vector<Aluno> alunos;
vector<Disciplina> disciplinas;
vector<vector<float>> notas;

void carregar_alunos() {
    ifstream arquivo("alunos.txt");
    if (!arquivo) {
        cout << "Arquivo alunos.txt não encontrado. Iniciando com lista vazia."
             << endl;
        return;
    }

    string linha;
    while (getline(arquivo, linha)) {
        istringstream iss(linha);
        string nome, matricula, turma;
        if (getline(iss, nome, ',') && getline(iss, matricula, ',') &&
            getline(iss, turma)) {
            alunos.push_back({nome, matricula, turma});
        }
    }
    arquivo.close();
}

void carregar_disciplinas() {
    ifstream arquivo("disciplinas.txt");
    if (!arquivo) {
        cout << "Arquivo disciplinas.txt não encontrado. Iniciando com lista "
                "vazia."
             << endl;
        return;
    }

    string linha;
    while (getline(arquivo, linha)) {
        istringstream iss(linha);
        string nome, codigo;
        if (getline(iss, nome, ',') && getline(iss, codigo)) {
            disciplinas.push_back({nome, codigo});
        }
    }
    arquivo.close();
}

void inicializar_notas() {
    notas.clear();
    notas.resize(alunos.size(), vector<float>(disciplinas.size(), 0.0f));
}

void carregar_notas() {
    ifstream arquivo("notas.txt");
    if (!arquivo) {
        cout
            << "Arquivo notas.txt não encontrado. Inicializando notas com zero."
            << endl;
        inicializar_notas();
        return;
    }

    string linha;
    notas.clear();
    while (getline(arquivo, linha)) {
        istringstream iss(linha);
        string valor;
        vector<float> notas_aluno;
        while (getline(iss, valor, ',')) {
            notas_aluno.push_back(stof(valor));
        }
        notas.push_back(notas_aluno);
    }
    arquivo.close();

    if (notas.size() != alunos.size() ||
        (notas.size() > 0 && notas[0].size() != disciplinas.size())) {
        cout << "Inconsistência detectada nos dados de notas. Reinicializando."
             << endl;
        inicializar_notas();
    }
}

void inicializar_sistema() {
    carregar_alunos();
    carregar_disciplinas();
    carregar_notas();
}

void salvar_alunos() {
    ofstream arquivo("alunos.txt");
    if (!arquivo) {
        cout << "Erro ao abrir o arquivo alunos.txt para escrita." << endl;
        return;
    }
    for (const auto& aluno : alunos) {
        arquivo << aluno.nome << "," << aluno.matricula << "," << aluno.turma
                << endl;
    }
    arquivo.close();
}

void salvar_disciplinas() {
    ofstream arquivo("disciplinas.txt");
    if (!arquivo) {
        cout << "Erro ao abrir o arquivo disciplinas.txt para escrita." << endl;
        return;
    }
    for (const auto& disciplina : disciplinas) {
        arquivo << disciplina.nome << "," << disciplina.codigo << endl;
    }
    arquivo.close();
}

void salvar_notas() {
    ofstream arquivo("notas.txt");
    if (!arquivo) {
        cout << "Erro ao abrir o arquivo notas.txt para escrita." << endl;
        return;
    }
    for (const auto& notas_aluno : notas) {
        for (int i = 0; i < notas_aluno.size(); ++i) {
            arquivo << notas_aluno[i];
            if (i < notas_aluno.size() - 1) arquivo << ",";
        }
        arquivo << endl;
    }
    arquivo.close();
}

void cadastrar_aluno() {
    Aluno novo_aluno;
    cout << "Nome do aluno: ";
    getline(cin, novo_aluno.nome);
    cout << "Matrícula: ";
    getline(cin, novo_aluno.matricula);
    cout << "Turma: ";
    getline(cin, novo_aluno.turma);
    alunos.push_back(novo_aluno);
    notas.push_back(vector<float>(disciplinas.size(), 0.0f));
    salvar_alunos();
    salvar_notas();
    cout << "Aluno cadastrado com sucesso." << endl;
}

void cadastrar_disciplina() {
    Disciplina nova_disciplina;
    cout << "Nome da disciplina: ";
    getline(cin, nova_disciplina.nome);
    cout << "Código da disciplina: ";
    getline(cin, nova_disciplina.codigo);
    disciplinas.push_back(nova_disciplina);
    for (auto& notas_aluno : notas) {
        notas_aluno.push_back(0.0f);
    }
    salvar_disciplinas();
    salvar_notas();
    cout << "Disciplina cadastrada com sucesso." << endl;
}

float ler_nota() {
    float nota;
    while (true) {
        if (cin >> nota && nota >= 0 && nota <= 100) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return nota;
        }
        cout << "Nota inválida. Digite um valor entre 0 e 100: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

void lancar_notas() {
    string matricula;
    cout << "Matrícula do aluno: ";
    getline(cin, matricula);

    int aluno_index = -1;
    for (int i = 0; i < alunos.size(); i++) {
        if (alunos[i].matricula == matricula) {
            aluno_index = i;
            break;
        }
    }

    if (aluno_index == -1) {
        cout << "Aluno não encontrado." << endl;
        return;
    }

    if (disciplinas.size() == 0) {
      cout << "Não há disciplinas cadastradas." << endl;
      return;
    }

    for (int i = 0; i < disciplinas.size(); i++) {
        cout << "Nota para " << disciplinas[i].nome << ": ";
        notas[aluno_index][i] = ler_nota();
    }

    salvar_notas();
    cout << "Notas lançadas com sucesso." << endl;
}

void calcular_medias() {
    if (alunos.empty() || disciplinas.empty()) {
        cout << "Não há dados suficientes para calcular médias." << endl;
        return;
    }

    for (int i = 0; i < alunos.size(); i++) {
        float soma = 0;
        for (int j = 0; j < disciplinas.size(); j++) {
            soma += notas[i][j];
        }
        float media_geral = disciplinas.empty() ? 0 : soma / disciplinas.size();
        cout << "Média geral de " << alunos[i].nome << ": " << fixed
             << setprecision(2) << media_geral << endl;
    }
}

void consultar_notas_aluno() {
    string matricula;
    cout << "Matrícula do aluno: ";
    getline(cin, matricula);

    int aluno_index = -1;
    for (int i = 0; i < alunos.size(); i++) {
        if (alunos[i].matricula == matricula) {
            aluno_index = i;
            break;
        }
    }

    if (aluno_index == -1) {
        cout << "Aluno não encontrado." << endl;
        return;
    }

    cout << "Notas de " << alunos[aluno_index].nome << ":" << endl;
    for (int i = 0; i < disciplinas.size(); i++) {
        cout << disciplinas[i].nome << ": " << notas[aluno_index][i] << endl;
    }
}

void consultar_notas_disciplina() {
    string codigo;
    cout << "Código da disciplina: ";
    getline(cin, codigo);

    int disciplina_index = -1;
    for (int i = 0; i < disciplinas.size(); i++) {
        if (disciplinas[i].codigo == codigo) {
            disciplina_index = i;
            break;
        }
    }

    if (disciplina_index == -1) {
        cout << "Disciplina não encontrada." << endl;
        return;
    }

    cout << "Notas de " << disciplinas[disciplina_index].nome << ":" << endl;
    for (int i = 0; i < alunos.size(); i++) {
        cout << alunos[i].nome << ": " << notas[i][disciplina_index] << endl;
    }
}

void gerar_relatorio() {
    ofstream arquivo("relatorio.txt");
    if (!arquivo) {
        cout << "Erro ao criar o arquivo de relatório." << endl;
        return;
    }

    arquivo << "Relatório de Notas e Médias" << endl << endl;

    for (int i = 0; i < alunos.size(); i++) {
        arquivo << "Aluno: " << alunos[i].nome
                << " (Matrícula: " << alunos[i].matricula << ")" << endl;
        float soma = 0;
        for (int j = 0; j < disciplinas.size(); j++) {
            arquivo << disciplinas[j].nome << ": " << notas[i][j] << endl;
            soma += notas[i][j];
        }
        float media_geral = disciplinas.empty() ? 0 : soma / disciplinas.size();
        arquivo << "Média Geral: " << fixed << setprecision(2) << media_geral
                << endl
                << endl;
    }

    arquivo.close();
    cout << "Relatório gerado com sucesso." << endl;
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    inicializar_sistema();

    int opcao;
    do {
        cout << "\nMenu Principal:" << endl;
        cout << "1. Cadastrar Aluno" << endl;
        cout << "2. Cadastrar Disciplina" << endl;
        cout << "3. Lançar Notas" << endl;
        cout << "4. Calcular Médias" << endl;
        cout << "5. Consultar Notas de Aluno" << endl;
        cout << "6. Consultar Notas de Disciplina" << endl;
        cout << "7. Gerar Relatório" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opção: ";

        while (!(cin >> opcao)) {
            cout << "Opção inválida. Tente novamente: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),
                       '\n');  // limpa o buffer de entrada
        }

        cin.ignore(numeric_limits<streamsize>::max(),
                   '\n');  // limpa o buffer de entrada

        switch (opcao) {
            case 1:
                cadastrar_aluno();
                break;
            case 2:
                cadastrar_disciplina();
                break;
            case 3:
                lancar_notas();
                break;
            case 4:
                calcular_medias();
                break;
            case 5:
                consultar_notas_aluno();
                break;
            case 6:
                consultar_notas_disciplina();
                break;
            case 7:
                gerar_relatorio();
                break;
            case 0:
                cout << "Encerrando o programa." << endl;
                break;
            default:
                cout << "Opção inválida." << endl;
        }
    } while (opcao != 0);

    return 0;
}