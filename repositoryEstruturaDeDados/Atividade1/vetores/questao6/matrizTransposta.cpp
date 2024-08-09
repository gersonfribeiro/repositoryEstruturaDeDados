////
//// Created by gerso on 08/08/2024.
////
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int linhasMatriz = 0;
//    int colunasMatriz = 0;
//
//    cout << "Quais sao as dimensoes da matriz que gostaria de trabalhar? " << endl;
//    cout << "Linhas: " << endl;
//    cin >> linhasMatriz;
//    cout << "Colunas: " << endl;
//    cin >> colunasMatriz;
//
//    int matriz[linhasMatriz][colunasMatriz];
//    int matrizTransposta[linhasMatriz][colunasMatriz];
//    int fatorMultiplicativo = 0;
//    int matrizFatorConstante[linhasMatriz][colunasMatriz];
//    int matrizSomar[linhasMatriz][colunasMatriz];
//    int matrizSomada[linhasMatriz][colunasMatriz];
//
//    cout << "Insira as informacoes para preencher a matriz: " << endl;
//    for (int i = 0; i < linhasMatriz; ++i) {
//        for (int j = 0; j < colunasMatriz; ++j) {
//            cout << "Matriz [" << i << "][" << j << "]: " << endl;
//            cin >> matriz[i][j];
//        }
//    }
//
//    cout << "Calculo da matriz transposta: " << endl;
//    for (int i = 0; i < linhasMatriz; ++i) {
//        for (int j = 0; j < colunasMatriz; ++j) {
//            matrizTransposta[j][i] = matriz[i][j];
//        }
//    }
//
//    for (int i = 0; i < colunasMatriz; ++i) {
//        for (int j = 0; j < linhasMatriz; ++j) {
//            matrizTransposta[j][i] = matriz[i][j];
//            cout << "Matriz Transposta [" << i << "][" << j << "]: " << matrizTransposta[i][j] << endl;
//        }
//    }
//
//    cout << "Insira o fator constante multiplicativo: " << endl;
//    cin >> fatorMultiplicativo;
//    for (int i = 0; i < linhasMatriz; ++i) {
//        for (int j = 0; j < colunasMatriz; ++j) {
//            cout << "Matriz [" << i << "][" << j << "]: " << matriz[i][j] * fatorMultiplicativo << endl;
//            matrizFatorConstante[i][j] = matriz[i][j] * fatorMultiplicativo;
//        }
//    }
//
//    cout << "Insira as informacoes para preencher a matriz que sera somada: " << endl;
//    for (int i = 0; i < linhasMatriz; ++i) {
//        for (int j = 0; j < colunasMatriz; ++j) {
//            cout << "Matriz [" << i << "][" << j << "]: " << endl;
//            cin >> matrizSomar[i][j];
//        }
//    }
//
////    Soma das matrizes:
//    for (int i = 0; i < linhasMatriz; ++i)
//        for (int j = 0; j < colunasMatriz; ++j)
//            matrizSomada[i][j] = matriz[i][j] + matrizSomar[i][j];
//
//
//    for (int i = 0; i < linhasMatriz; ++i) {
//        for (int j = 0; j < colunasMatriz; ++j) {
//            cout << "Matriz [" << i << "][" << j << "]: " << matrizSomada[i][j] << endl;
//        }
//    }
//
//    return 0;
//}
