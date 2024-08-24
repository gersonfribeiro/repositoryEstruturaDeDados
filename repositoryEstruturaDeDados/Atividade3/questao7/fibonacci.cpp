////
//// Created by gerso on 22/08/2024.
////
//
//#include <iostream>
//using namespace std;
//
//int fibonacciRecursivo(int n) {
//    if (n <= 1)
//        return n;
//    else
//        return fibonacciRecursivo(n - 1) + fibonacciRecursivo(n - 2);
//}
//
//int fibonacciIterativo(int n) {
//    if (n <= 1)
//        return n;
//
//    int a = 0, b = 1, fib;
//    for (int i = 2; i <= n; i++) {
//        fib = a + b;
//        a = b;
//        b = fib;
//    }
//    return fib;
//}
//
//int main() {
//    int n;
//    cout << "Informe a posicao desejada na sequencia de Fibonacci (n >= 0): " << endl;
//    cin >> n;
//
//    if (n < 0) {
//        cout << "A posicao deve ser maior ou igual a zero." << endl;
//        return 1;
//    }
//
//    int resultadoRecursivo = fibonacciRecursivo(n);
//    cout << "Valor da sequencia de Fibonacci na posicao " << n << " (Recursivo): " << resultadoRecursivo << endl;
//
//    int resultadoIterativo = fibonacciIterativo(n);
//    cout << "Valor da sequencia de Fibonacci na posicao " << n << " (Iterativo): " << resultadoIterativo << endl;
//
//
//    return 0;
//}
