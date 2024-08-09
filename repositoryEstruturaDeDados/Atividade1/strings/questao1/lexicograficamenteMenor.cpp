////
//// Created by gerso on 08/08/2024.
////
//
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//int main() {
//    char nome[51];
//    char menor_nome[51] = "";
//
//    cout << "Insira os nomes (para sair, pressione Enter!)" << endl;
//
//    while (true) {
//        cin.getline(nome, sizeof(nome));
//
//        if (strlen(nome) == 0) {
//            break;
//        }
//
//        if (strlen(menor_nome) == 0 || strcmp(nome, menor_nome) < 0) {
//            strcpy(menor_nome, nome);
//        }
//    }
//
//    if (strlen(menor_nome) > 0) {
//        cout << "O nome lexicograficamente menor e: " << menor_nome << endl;
//    } else {
//        cout << "Nenhum nome foi inserido." << endl;
//    }
//
//    return 0;
//}
