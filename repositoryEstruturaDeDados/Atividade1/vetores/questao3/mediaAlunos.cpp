////
//// Created by gerso on 07/08/2024.
////

//#include <iostream>
//#include <cmath> // Para a função sqrt
//using namespace std;
//
//int main()
//{
//    const int NUM_ALUNOS = 5;
//    double notas[NUM_ALUNOS];
//    double desvios[NUM_ALUNOS];
//    double desvios_quadrados[NUM_ALUNOS];
//    double soma = 0.0, media = 0.0, variancia = 0.0, desvio_padrao = 0.0;
//
//    cout << "Digite as notas dos " << NUM_ALUNOS << " alunos:\n";
//    for (int i = 0; i < NUM_ALUNOS; ++i) {
//        cin >> notas[i];
//        soma += notas[i];
//    }
//    media = soma / NUM_ALUNOS;
//
//    for (int i = 0; i < NUM_ALUNOS; ++i) {
//        desvios[i] = notas[i] - media;
//        desvios_quadrados[i] = desvios[i] * desvios[i];
//    }
//
//    for (int i = 0; i < NUM_ALUNOS; ++i) {
//        variancia += desvios_quadrados[i];
//    }
//    variancia /= NUM_ALUNOS;
//
//    desvio_padrao = sqrt(variancia);
//
//    cout << "\nNotas: ";
//    for (int i = 0; i < NUM_ALUNOS; ++i) {
//        cout << notas[i] << " ";
//    }
//
//    cout << "\nDesvios: ";
//    for (int i = 0; i < NUM_ALUNOS; ++i) {
//        cout << desvios[i] << " ";
//    }
//
//    cout << "\nDesvios ao Quadrado: ";
//    for (int i = 0; i < NUM_ALUNOS; ++i) {
//        cout << desvios_quadrados[i] << " ";
//    }
//
//    cout << "\nVariancia: " << variancia << endl;
//    cout << "Desvio Padrao: " << desvio_padrao << endl;
//
//    return 0;
//}
