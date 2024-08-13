//
// Created by gerso on 08/08/2024.
//

#include <iostream>
using namespace std;

int main()
{
    int numValores = 0;
    int maioresElementos[2] = {0, 0};
    int aux = 0;
    int somarPares = 0;

    while(true){
        cout << "Quantos valores vao ser inseridos (de 0 a 10)?" << endl;
        cin >> numValores;

        if (numValores <= 10) {
            break;
        }
    }
    cout << "Insira os " << numValores << " valores:" << endl;
    int variavelComposta[numValores];

    for (int i = 0; i < numValores; ++i) {
        cin >> variavelComposta[i];
        if (i == 0 || i == 1) {
            maioresElementos[i] = variavelComposta[i];
            if (maioresElementos[0] <= maioresElementos[1]) {
                aux = maioresElementos[1];
                maioresElementos[1] = maioresElementos[0];
                maioresElementos[0] = aux;
            }
        }
        if (maioresElementos[0] <= variavelComposta[i]) {
            maioresElementos[0] = variavelComposta[i];
        }
        else if (maioresElementos[1] <= variavelComposta[i]) {
                maioresElementos[1] = variavelComposta[i];
        }
    }

    for (int i = 0; i < numValores; ++i) {
        if (i%2 != 0 && i > 0) {
            cout << "Posicao impar considerando o zero como posicao inicial: " << i <<
            "\t" << "Valor na posicao: " << variavelComposta[i] << endl;
            if (variavelComposta[i]%2 == 0) {
                somarPares += variavelComposta[i];
            }
        }
    }

    cout << "Maiores elementos: Primeiro maior: " << maioresElementos[0] << "\t|\tSegundo maior: "
    << maioresElementos[1] << "\n" << "Soma total dos elementos pares nas posicoes impares: "
    << somarPares << endl;

    return 0;
}
