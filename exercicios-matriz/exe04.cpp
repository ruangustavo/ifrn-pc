#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    const int NUM_ALUNOS = 2;
    const int NUM_BIMESTRES = 4;

    string alunos[NUM_ALUNOS];

    for (int i = 0; i < NUM_ALUNOS; i++) {
        cout << "Nome do aluno " << i + 1 << ": ";
        getline(cin, alunos[i]);
    }

    int notas[NUM_ALUNOS][NUM_BIMESTRES];

    for (int i = 0; i < NUM_ALUNOS; i++) {
        for (int j = 0; j < NUM_BIMESTRES; j++) {
            cout << "Nota do bimestre " << j + 1 << " do aluno " << i + 1
                 << ": ";
            cin >> notas[i][j];
        }
    }

    double media_turma = 0;
    double medias[NUM_ALUNOS];

    for (int i = 0; i < NUM_ALUNOS; i++) {
        medias[i] = 0;

        for (int j = 0; j < NUM_BIMESTRES; j++) {
            medias[i] += notas[i][j];
            media_turma += notas[i][j];
        }

        medias[i] /= NUM_BIMESTRES;
    }

    cout << "Média da turma: " << media_turma / (NUM_ALUNOS * NUM_BIMESTRES)
         << endl;

    cout << "Médias por aluno:" << endl;
    for (int i = 0; i < NUM_ALUNOS; i++) {
        cout << "Aluno " << i + 1 << ": " << alunos[i] << endl;
        cout << "Media: " << medias[i] << endl;
        cout << endl;
    }

    return 0;
}
