#include <iostream>
#include <cstdlib>
#include <locale>
using namespace std;

int certo_errado(char resposta_certa, char resposta_pessoa, int &acertos) {
    if (resposta_pessoa == resposta_certa) {
        cout << "CORRETO!!!" << endl;
        acertos+=1;
        return 1000;
    } else {
        cout << "INCORRETO" << endl;
        return 0;
    }
}
int main(void) {
    setlocale(LC_ALL, "Portuguese");
    int pontos = 0;
    int acertos = 0;
    char resposta1, resposta2, resposta3, resposta4, resposta5;
    char corretas[5] = {'c', 'b', 'b', 'a', 'b'};
    cout << "SEJA BEM-VINDO AO SHOW DE PERGUNTAS E RESPOSTAS" << endl << "QUANTO MAIS ACERTAR MAIS VOCÊ GANHA!!!" << endl;
    cout << "(Digite as respostas em letra minúscula)" << endl << "----------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "1° Pergunta: O que é globalização?" << endl;
    cout << "A) Um processo que busca o isolamento de culturas." << endl << "B) Uma tendência de descentralização econômica." << endl;
    cout << "C) A interconexão crescente de países em termos econômicos, culturais e sociais." << endl << "D) Um movimento político para fortalecer fronteiras nacionais." << endl;
    cout << "Resposta: ";
    cin >> resposta1;
    pontos += certo_errado(corretas[0], resposta1,acertos);

    cout << "2° Pergunta: Qual setor tem sido mais impactado pela globalização?" << endl;
    cout << "A) Agricultura de subsistência." << endl << "B) Tecnologias de informação." << endl;
    cout << "C) Comércio local de artesanato." << endl << "D)  Indústria tradicional de pequena escala." << endl;
    cout << "Resposta: ";
    cin >> resposta2;
    pontos += certo_errado(corretas[1], resposta2,acertos);

    cout << "3° Pergunta: Quais são algumas das principais implicações culturais da globalização?" << endl;
    cout << "A) Fortalecimento das tradições locais." << endl << "B) Homogeneização cultural." << endl;
    cout << "C) Isolamento de comunidades étnicas." << endl << "D) Diminuição da interação cultural." << endl;
    cout << "Resposta: ";
    cin >> resposta3;
    pontos += certo_errado(corretas[2], resposta3,acertos);

    cout << "4° Pergunta: Qual é uma crítica comum à globalização?" << endl;
    cout << "A) Falta de acesso a produtos e ideias de outras culturas." << endl << "B) Aumento das oportunidades de emprego a nível local." << endl;
    cout << "C) Redução da desigualdade econômica global." << endl << "D) Diminuição das trocas culturais entre nações." << endl;
    cout << "Resposta: ";
    cin >> resposta4;
    pontos += certo_errado(corretas[3], resposta4,acertos);

    cout << "5° Pergunta: Qual é um exemplo de uma instituição internacional relacionada à globalização?" << endl;
    cout << "A) Fundo Monetário Nacional (FMN)." << endl << "B) Organização Mundial do Comércio (OMC)." << endl;
    cout << "C) Liga das Nações Africanas (LNA)." << endl << "União Sul-Americana de Nações (USAN)." << endl;
    cout << "Resposta: ";
    cin >> resposta5;
    pontos += certo_errado(corretas[4], resposta5,acertos);

    cout << "Pontuação Total: " << pontos << " pontos " << "Acertos: "<<acertos<<endl;
}
