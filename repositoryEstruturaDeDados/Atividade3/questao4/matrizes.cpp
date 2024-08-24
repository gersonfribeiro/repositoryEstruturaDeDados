////
//// Created by gerso on 22/08/2024.
////
//
//#include <iostream>
//using namespace std;
//
//const int MAX_M = 20;
//const int MAX_N = 25;
//
//void lerMatriz(int matriz[MAX_M][MAX_N], int M, int N) {
//    cout << "Informe os elementos da matriz (" << M << "x" << N << "):\n";
//    for (int i = 0; i < M; ++i) {
//        for (int j = 0; j < N; ++j) {
//            cin >> matriz[i][j];
//        }
//    }
//}
//
//void transpostaMatriz(int matriz[MAX_M][MAX_N], int transposta[MAX_N][MAX_M], int M, int N) {
//    for (int i = 0; i < M; ++i) {
//        for (int j = 0; j < N; ++j) {
//            transposta[j][i] = matriz[i][j];
//        }
//    }
//}
//
//void multiplicarPorK(int matriz[MAX_M][MAX_N], int resultado[MAX_M][MAX_N], int M, int N, int K) {
//    for (int i = 0; i < M; ++i) {
//        for (int j = 0; j < N; ++j) {
//            resultado[i][j] = matriz[i][j] * K;
//        }
//    }
//}
//
//void adicionarMatrizes(int matriz1[MAX_M][MAX_N], int matriz2[MAX_M][MAX_N], int resultado[MAX_M][MAX_N], int M, int N) {
//    for (int i = 0; i < M; ++i) {
//        for (int j = 0; j < N; ++j) {
//            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
//        }
//    }
//}
//
//void imprimirMatriz(int matriz[MAX_M][MAX_N], int M, int N) {
//    for (int i = 0; i < M; ++i) {
//        for (int j = 0; j < N; ++j) {
//            cout << matriz[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//void imprimirMatriz(int matriz[MAX_N][MAX_M], int N, int M, bool transposta) {
//    if (transposta) {
//        for (int i = 0; i < N; ++i) {
//            for (int j = 0; j < M; ++j) {
//                cout << matriz[i][j] << " ";
//            }
//            cout << endl;
//        }
//    }
//}
//
//int main() {
//    int M, N, K;
//
//    do {
//        cout << "Informe o numero de linhas (M <= 20): " << endl;
//        cin >> M;
//    } while (M > 20 || M <= 0);
//
//    do {
//        cout << "Informe o numero de colunas (N <= 25): " << endl;
//        cin >> N;
//    } while (N > 25 || N <= 0);
//
//    int matriz1[MAX_M][MAX_N];
//    int matriz2[MAX_M][MAX_N];
//    int transposta[MAX_N][MAX_M];
//    int resultado[MAX_M][MAX_N];
//
//    lerMatriz(matriz1, M, N);
//
//    transpostaMatriz(matriz1, transposta, M, N);
//    cout << "Matriz Transposta:" << endl;
//    imprimirMatriz(transposta, N, M, true);
//
//    cout << "Informe o valor de K para multiplicacao da matriz: " << endl;
//    cin >> K;
//    multiplicarPorK(matriz1, resultado, M, N, K);
//    cout << "Matriz Multiplicada por " << K << endl;
//    imprimirMatriz(resultado, M, N);
//
//    cout << "Informe os valores da segunda matriz (" << M << "x" << N << ")" << endl;
//    lerMatriz(matriz2, M, N);
//    adicionarMatrizes(matriz1, matriz2, resultado, M, N);
//    cout << "Resultado da Adicao das Matrizes: "<< endl;
//    imprimirMatriz(resultado, M, N);
//
//    return 0;
//}
