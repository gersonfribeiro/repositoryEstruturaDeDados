////
//// Created by gerso on 08/08/2024.
////
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int numValores = 0;
//    int maiorElemento = 0;
//    int somarPares = 0;
//
//    cout << "Quantos valores vao ser inseridos (de 0 a 10)?" << endl;
//    cin >> numValores;
//    cout << "Insira os " << numValores << " valores:" << endl;
//    int variavelComposta[numValores];
//
//    for (int i = 0; i < numValores; ++i) {
//        cin >> variavelComposta[i];
//        if (variavelComposta[i - 1] <= variavelComposta[i])
//            maiorElemento = variavelComposta[i];
//    }
//
//    for (int i = 0; i < numValores; ++i) {
//        if (i%2 != 0 && i > 0) {
//            cout << "Posicao impar considerando o zero como posicao inicial: " << i <<
//            "\n" << "Valor na posicao: " << variavelComposta[i] << endl;
//            somarPares += variavelComposta[i];
//        }
//    }
//
//    cout << "Maior elemento:" << maiorElemento << "\n" <<
//        "Soma total dos elementos pares nas posicoes impares:" << somarPares << endl;
//
//    return 0;
//}