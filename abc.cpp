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
    cout << "SEJA BEM-VINDO AO SHOW DE PERGUNTAS E RESPOSTAS" << endl << "QUANTO MAIS ACERTAR MAIS VOC� GANHA!!!" << endl;
    cout << "(Digite as respostas em letra min�scula)" << endl << "----------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "1� Pergunta: O que � globaliza��o?" << endl;
    cout << "A) Um processo que busca o isolamento de culturas." << endl << "B) Uma tend�ncia de descentraliza��o econ�mica." << endl;
    cout << "C) A interconex�o crescente de pa�ses em termos econ�micos, culturais e sociais." << endl << "D) Um movimento pol�tico para fortalecer fronteiras nacionais." << endl;
    cout << "Resposta: ";
    cin >> resposta1;
    pontos += certo_errado(corretas[0], resposta1,acertos);

    cout << "2� Pergunta: Qual setor tem sido mais impactado pela globaliza��o?" << endl;
    cout << "A) Agricultura de subsist�ncia." << endl << "B) Tecnologias de informa��o." << endl;
    cout << "C) Com�rcio local de artesanato." << endl << "D)  Ind�stria tradicional de pequena escala." << endl;
    cout << "Resposta: ";
    cin >> resposta2;
    pontos += certo_errado(corretas[1], resposta2,acertos);

    cout << "3� Pergunta: Quais s�o algumas das principais implica��es culturais da globaliza��o?" << endl;
    cout << "A) Fortalecimento das tradi��es locais." << endl << "B) Homogeneiza��o cultural." << endl;
    cout << "C) Isolamento de comunidades �tnicas." << endl << "D) Diminui��o da intera��o cultural." << endl;
    cout << "Resposta: ";
    cin >> resposta3;
    pontos += certo_errado(corretas[2], resposta3,acertos);

    cout << "4� Pergunta: Qual � uma cr�tica comum � globaliza��o?" << endl;
    cout << "A) Falta de acesso a produtos e ideias de outras culturas." << endl << "B) Aumento das oportunidades de emprego a n�vel local." << endl;
    cout << "C) Redu��o da desigualdade econ�mica global." << endl << "D) Diminui��o das trocas culturais entre na��es." << endl;
    cout << "Resposta: ";
    cin >> resposta4;
    pontos += certo_errado(corretas[3], resposta4,acertos);

    cout << "5� Pergunta: Qual � um exemplo de uma institui��o internacional relacionada � globaliza��o?" << endl;
    cout << "A) Fundo Monet�rio Nacional (FMN)." << endl << "B) Organiza��o Mundial do Com�rcio (OMC)." << endl;
    cout << "C) Liga das Na��es Africanas (LNA)." << endl << "Uni�o Sul-Americana de Na��es (USAN)." << endl;
    cout << "Resposta: ";
    cin >> resposta5;
    pontos += certo_errado(corretas[4], resposta5,acertos);

    cout << "Pontua��o Total: " << pontos << " pontos " << "Acertos: "<<acertos<<endl;
}
