////
//// Created by gerso on 11/08/2024.
////
//
//#include <iostream>
//#include <cstring>
//#include <cctype>
//using namespace std;
//
//void calcularNovoSalario(char cargo[], double &salario, double &percentual){
//    if(strcmp(cargo, "gerente") == 0) {
//        percentual = 10.0;
//        salario *= percentual / 100 + 1;
//    } else if(strcmp(cargo, "engenheiro") == 0) {
//        percentual = 20.0;
//        salario *= percentual / 100 + 1;
//    } else if (strcmp(cargo, "tecnico") == 0) {
//        percentual = 30.0;
//        salario *= percentual / 100 + 1;
//    } else {
//        percentual = 5.0;
//        salario *= percentual / 100 + 1;
//    }
//}
//
//int main()
//{
//    char cargo[100];
//    double percentual;
//    double salario = 0.0;
//
//    cout << "Infome o cargo do funcionario: " << endl;
//    cin.getline(cargo, size(cargo));
//    cout << "E tambem o seu salario: " << endl;
//    cin >> salario;
//
//    for (int i = 0; cargo[i] != '\0'; ++i) {
//        cargo[i] = tolower(cargo[i]);
//    }
//
//    calcularNovoSalario(cargo, salario, percentual);
//
//    cout << "O salario do " << cargo << " foi ajustado para o novo valor de: R$" << salario
//    << "\n" << "O funcinario obteve um aumento de: " << percentual << "%." <<  endl;
//
//    return 0;
//}
