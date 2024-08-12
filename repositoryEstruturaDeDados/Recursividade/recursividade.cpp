////
//// Created by gerso on 10/08/2024.
////
//
//#include <iostream>
//#include <stdlib.h>
//
//using namespace std;
//
//double fatorialRecursivo(int n) {
//    double result;
//
//    if (n < 0) return -1; //erro
//
//    if (n == 0 || n == 1) return 1;
//
//    result = fatorialRecursivo(n - 1) * n;
//
//    return result;
//}
//
//double fatorialIterativo(int n) {
//
//    double result = 1;
//
//    if (n < 0) return -1;
//
//    for (int i = 2; i <= n; i++)
//        result = result * i;
//
//    return result;
//}
//
//int main() {
//    int num;
//    double result;
//
//    cout << "Entre com o valor para o calculo do fatorial: ";
//    cin >> num;
//
//    result = fatorialRecursivo(num);
//    cout << "Fatorial Recursivo: " << result << "\n\n";
//
//    result = fatorialIterativo(num);
//    cout << "Fatorial Iterativo: " << result << "\n\n";
//
//    system("pause");
//    return 0;
//}