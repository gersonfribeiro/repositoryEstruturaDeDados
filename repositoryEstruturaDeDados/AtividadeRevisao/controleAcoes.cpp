////
//// Created by gerso on 29/08/2024.
////
//
//#include <iostream>
//#include <iomanip>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//const int MAX_ATIVOS = 100;
//
//struct Ticket {
//    char codeTicket[7];
//    int quantTicket;
//    double activeValue;
//};
//
//Ticket ativos[MAX_ATIVOS];
//int numAtivos = 0;
//
//void registrarCompra() {
//    Ticket novoAtivo;
//    cout << "Informe o codigo do ticket (max 6 caracteres): ";
//    cin.ignore();  // Limpar o buffer do cin
//    cin.getline(novoAtivo.codeTicket, sizeof(novoAtivo.codeTicket));
//
//    cout << "Informe a quantidade comprada: ";
//    cin >> novoAtivo.quantTicket;
//
//    cout << "Informe o valor do ativo no momento da compra: ";
//    cin >> novoAtivo.activeValue;
//
//    int pos = -1;
//    for (int i = 0; i < numAtivos; ++i) {
//        if (strcmp(ativos[i].codeTicket, novoAtivo.codeTicket) == 0) {
//            pos = i;
//            break;
//        }
//    }
//
//    if (pos == -1) {
//        if (numAtivos < MAX_ATIVOS) {
//            ativos[numAtivos++] = novoAtivo;
//        } else {
//            cout << "Numero maximo de ativos alcancado." << endl;
//        }
//    } else {
//        double valorTotal = ativos[pos].activeValue * ativos[pos].quantTicket;
//        valorTotal += novoAtivo.activeValue * novoAtivo.quantTicket;
//        ativos[pos].quantTicket += novoAtivo.quantTicket;
//        ativos[pos].activeValue = valorTotal / ativos[pos].quantTicket;
//    }
//}
//
//void registrarVenda() {
//    char ticketCode[7];
//    cout << "Informe o codigo do ticket (max 6 caracteres): ";
//    cin.ignore();  // Limpar o buffer do cin
//    cin.getline(ticketCode, sizeof(ticketCode));
//
//    int quantidadeVendida;
//    cout << "Informe a quantidade vendida: ";
//    cin >> quantidadeVendida;
//
//    // Verifica se o ativo existe e tem quantidade suficiente para venda
//    int pos = -1;
//    for (int i = 0; i < numAtivos; ++i) {
//        if (strcmp(ativos[i].codeTicket, ticketCode) == 0) {
//            if (ativos[i].quantTicket >= quantidadeVendida) {
//                pos = i;
//            }
//            break;
//        }
//    }
//
//    if (pos == -1) {
//        cout << "Ativo nao encontrado ou quantidade insuficiente." << endl;
//    } else {
//        // Atualiza a quantidade
//        ativos[pos].quantTicket -= quantidadeVendida;
//        if (ativos[pos].quantTicket == 0) {
//            // Remove o ativo se a quantidade chegar a zero
//            for (int i = pos; i < numAtivos - 1; ++i) {
//                ativos[i] = ativos[i + 1];
//            }
//            numAtivos--;
//        }
//    }
//}
//
//void verSaldoAtivo() {
//    char ticketCode[7];
//    cout << "Informe o codigo do ticket (max 6 caracteres): ";
//    cin.ignore();  // Limpar o buffer do cin
//    cin.getline(ticketCode, sizeof(ticketCode));
//
//    int left = 0, right = numAtivos - 1, mid;
//    bool encontrado = false;
//
//    while (left <= right) {
//        mid = (left + right) / 2;
//        int cmp = strcmp(ticketCode, ativos[mid].codeTicket);
//        if (cmp == 0) {
//            cout << "Saldo do ativo " << ativos[mid].codeTicket << ":\n";
//            cout << "Quantidade: " << ativos[mid].quantTicket << endl;
//            cout << "Preco Medio: R$ " << fixed << setprecision(2) << ativos[mid].activeValue << endl;
//            encontrado = true;
//            break;
//        } else if (cmp < 0) {
//            right = mid - 1;
//        } else {
//            left = mid + 1;
//        }
//    }
//
//    if (!encontrado) {
//        cout << "Ativo nao encontrado." << endl;
//    }
//}
//
//void listarPatrimonio() {
//    cout << "Patrimônio:\n";
//    for (int i = 0; i < numAtivos; ++i) {
//        cout << "Ticket: " << ativos[i].codeTicket << endl;
//        cout << "Quantidade: " << ativos[i].quantTicket << endl;
//        cout << "Preco Medio: R$ " << fixed << setprecision(2) << ativos[i].activeValue << endl;
//        cout << "----------------------\n";
//    }
//}
//
//int main() {
//    int option = 0;
//
//    auto compare = [](const Ticket& a, const Ticket& b) {
//        return strcmp(a.codeTicket, b.codeTicket) < 0;
//    };
//    sort(ativos, ativos + MAX_ATIVOS, compare);
//
//    do {
//        cout << "\nFunções da aplicacao:\n\n"
//             << "1- Realizar compra\n"
//             << "2- Registrar venda\n"
//             << "3- Ver saldo de um ativo\n"
//             << "4- Listar patrimonio\n"
//             << "5- Sair\n\n"
//             << "Insira a opcao: ";
//        cin >> option;
//
//        switch (option) {
//            case 1:
//                registrarCompra();
//                break;
//            case 2:
//                registrarVenda();
//                break;
//            case 3:
//                verSaldoAtivo();
//                break;
//            case 4:
//                listarPatrimonio();
//                break;
//            case 5:
//                cout << "Saindo do programa." << endl;
//                break;
//            default:
//                cout << "Opção invalida. Tente novamente." << endl;
//                break;
//        }
//    } while (option != 5);
//
//    return 0;
//}
