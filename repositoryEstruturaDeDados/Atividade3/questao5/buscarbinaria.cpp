////
//// Created by gerso on 22/08/2024.
////
//
//#include <iostream>
//using namespace std;
//
//int pesquisaBinaria(int vetor[], int tamanho, int valor) {
//    int low = 0;
//    int high = tamanho - 1;
//
//    while (low <= high) {
//        int mid = (low + high) / 2;
//
//        if (vetor[mid] == valor)
//            return mid; // Valor encontrado
//        else if (vetor[mid] < valor)
//            low = mid + 1; // Pesquisar na metade direita
//        else
//            high = mid - 1; // Pesquisar na metade esquerda
//    }
//
//    return -1; // Valor não encontrado
//}
//
//int main() {
//    int vetor[] = {0, 18, 22, 25, 34, 40, 51, 66, 75, 87};
//    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
//
//    int valores[] = {75, 22, 90};
//    for (int i = 0; i < 3; i++) {
//        int resultado = pesquisaBinaria(vetor, tamanho, valores[i]);
//        if (resultado != -1)
//            cout << "Valor " << valores[i] << " encontrado na posicao " << resultado << endl;
//        else
//            cout << "Valor " << valores[i] << " nao encontrado no vetor." << endl;
//    }
//
//    return 0;
//}
