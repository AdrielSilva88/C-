#include <iostream>
#include <locale>
using namespace std;

struct Usuario {
    string email, senha;
    double saldo;
};

void registrar(Usuario& info_usuario) {
    cout << "----------Tela de registro----------" << endl;
    cout << "Email: ";
    cin >> info_usuario.email;
    cout << "Senha: ";
    cin >> info_usuario.senha;
    cout << "Valor do depósito de abertura de conta: ";
    cin >> info_usuario.saldo;
}

bool login(const Usuario& info_usuario) {
    bool logou = false;
    int tentativa = 0;
    string email_log, senha_log;
    cout << "----------Tela de login----------" << endl;
    while (!logou && tentativa < 3) {
        cout << "Email: ";
        cin >> email_log;
        cout << "Senha: ";
        cin >> senha_log;
        tentativa++;
        if (email_log == info_usuario.email && senha_log == info_usuario.senha) {
            logou = true;
        } else {
            cout << "Senha e/ou email incorretos (mais de 3 tentativas bloquearão o programa)" << endl;
        }
    }
    return logou;
}

int mostrar_opcoes() {
    int opcao;
    cout << "[1] Verificar extrato bancário" << endl;
    cout << "[2] Realizar depósito" << endl;
    cout << "[3] Realizar saque" << endl;
    cout << "[4] Trocar de usuário" << endl;
    cout << "[5] Sair" << endl;
    cout << "Ação desejada: ";
    cin >> opcao;
    return opcao;
}

void exibir_extrato(const Usuario& info_usuario) {
    cout << "Saldo em conta: R$" << info_usuario.saldo << ",00" << endl;
}

void realizar_deposito(Usuario& info_usuario) {
    double valor_dep;
    cout << "Valor do depósito: ";
    cin >> valor_dep;
    info_usuario.saldo += valor_dep;
}

void realizar_saque(Usuario& info_usuario) {
    double valor_saque;
    cout << "Valor do saque: ";
    cin >> valor_saque;
    if (valor_saque > info_usuario.saldo) {
        cout << "Saldo insuficiente." << endl;
    } else {
        info_usuario.saldo -= valor_saque;
    }
}

int main(void) {
    setlocale(LC_ALL, "Portuguese_Brazil");
    int opcao_usuario;
    Usuario info_usuario;
    bool sair = false;
    bool sistemaBloqueado = false;

    while (!sair) {
        cout << "-----MENU PRINCIPAL-----" << endl;
        cout << "[1] Registrar novo usuário" << endl;
        cout << "[2] Fazer login" << endl;
        cout << "[3] Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao_usuario;

        if (opcao_usuario == 1) {
            registrar(info_usuario);
        } else if (opcao_usuario == 2) {
            if (!sistemaBloqueado) {
                if (login(info_usuario)) {
                    while (!sair) {
                        opcao_usuario = mostrar_opcoes();
                        if (opcao_usuario == 1) {
                            exibir_extrato(info_usuario);
                        } else if (opcao_usuario == 2) {
                            realizar_deposito(info_usuario);
                        } else if (opcao_usuario == 3) {
                            realizar_saque(info_usuario);
                        } else if (opcao_usuario == 4) {
                            sistemaBloqueado = true;
                            break;
                        } else if (opcao_usuario == 5) {
                            sair = true;
                        } else {
                            cout << "Opção inválida. Tente novamente." << endl;
                        }
                    }
                } else {
                    sistemaBloqueado = true;
                    cout << "SISTEMA BLOQUEADO" << endl;
                }
            } else {
                cout << "SISTEMA BLOQUEADO" << endl;
            }
        } else if (opcao_usuario == 3) {
            sair = true;
        } else {
            cout << "Opção inválida. Tente novamente." << endl;
        }
    }
    return 0;
}
