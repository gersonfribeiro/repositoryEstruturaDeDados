////
//// Created by gerso on 22/08/2024.
////
//
//#include <iostream>
//using namespace std;
//
//double calcularFatorialRecursivo(int fatorial) {
//    double resultadoFatorial;
//
//    if (fatorial < 0 ) return -1;
//
//    if (fatorial == 0 || fatorial == 1) return 1;
//
//    resultadoFatorial = calcularFatorialRecursivo(fatorial - 1) * fatorial;
//    return resultadoFatorial;
//}
//
//double calcularFatorialIterativo(int fatorial) {
//    double resultadoFatorial = 1;
//
//    if (fatorial == 0 || fatorial == 1) return 1;
//
//    for (int i = 2; i < fatorial; ++i) {
//        resultadoFatorial = resultadoFatorial * i;
//    }
//    return resultadoFatorial;
//}
//
//int main() {
//    double valorFatorial;
//
//    cout << "Insira o valor para ser realizado o calculo fatorial: " << endl;
//    cin >> valorFatorial;
//
//    cout << "Fatorial recursivo: " << calcularFatorialRecursivo(valorFatorial) << endl;
//
//    cout << "Fatorial iterativo" << calcularFatorialIterativo(valorFatorial) << endl;
//
//    return 0;
//}
