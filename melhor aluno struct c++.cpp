#include <iostream>
using namespace std;

struct Alunos {
    string nome;
    double nota_ap;
    double nota_prova;
};

void ler_alunos(Alunos vet[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << "Nome do " << i + 1 << "° aluno: ";
        cin >> vet[i].nome;
        cout << "Nota participativa: ";
        cin >> vet[i].nota_ap;
        cout << "Nota da prova: ";
        cin >> vet[i].nota_prova;
    }
}

void gerar_medias(Alunos vet[], int medias[], int tam) {
    for (int i = 0; i < tam; i++) {
        medias[i] = (vet[i].nota_prova + vet[i].nota_ap) / 2;
    }
}

int melhor_aluno(int medias[], int tam) {
    int melhor = medias[0];
    int pos_melhor = 0;
    for (int i = 1; i < tam; i++) {
        if (medias[i] > melhor) {
            melhor = medias[i];
            pos_melhor = i;
        }
    }
    return pos_melhor;
}
void aprovados_reprovados(int medias[], int reprovados[], int aprovados[], int tam) {
    for (int i = 0; i < tam; i++) {
        if (medias[i] >= 7) {
            aprovados[i] = medias[i]; 
            reprovados[i] = 0; 
        } else {
            reprovados[i] = medias[i]; 
            aprovados[i] = 0; 
        }
    }
}

int main(void) {
    const int tam = 4;
    int medias[tam],reprovados[tam],aprovados[tam], melhor;
    Alunos vet_alunos[tam];
    ler_alunos(vet_alunos, tam);
    gerar_medias(vet_alunos, medias, tam);
    melhor = melhor_aluno(medias, tam);
    cout << "O Aluno com a melhor média é " << vet_alunos[melhor].nome;
    
}


