////
//// Created by gerso on 18/08/2024.
////
//
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//struct Nadador {
//    int idade;
//    char categoria[20];
//};
//
//void categoriaNadador(Nadador &nadador) {
//    if (nadador.idade >= 18) {
//        strcpy(nadador.categoria, "Adulto");
//    } else if (nadador.idade >= 14) {
//        strcpy(nadador.categoria, "Juvenil B");
//    } else if (nadador.idade >= 11) {
//        strcpy(nadador.categoria, "Juvenil A");
//    } else if (nadador.idade >= 8) {
//        strcpy(nadador.categoria, "Infantil B");
//    } else if (nadador.idade >= 5) {
//        strcpy(nadador.categoria, "Infantil A");
//    } else {
//        strcpy(nadador.categoria, "Sem categoria");
//    }
//
//    cout << "A categoria do nadador e: " << nadador.categoria << endl;
//}
//
//int main() {
//    Nadador nadador;
//    cout << "Informe a idade do nadador: " << endl;
//    cin >> nadador.idade;
//
//    categoriaNadador(nadador);
//
//    return 0;
//}
