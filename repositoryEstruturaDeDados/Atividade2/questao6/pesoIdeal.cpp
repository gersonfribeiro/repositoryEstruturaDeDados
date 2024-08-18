////
//// Created by gerso on 18/08/2024.
////
//
//#include <iostream>
//#include <cctype>
//using namespace std;
//
//struct Paciente {
//    double altura;
//    char sexo;
//    double pesoIdeal;
//};
//
//void pesoIdeal(Paciente &paciente) {
//    if (paciente.sexo == 'm')
//        paciente.pesoIdeal = (72.7 * paciente.altura) - 58;
//
//    if (paciente.sexo == 'f')
//        paciente.pesoIdeal = (62.1 * paciente.altura) - 44.7;
//}
//
//int main() {
//
//    Paciente paciente;
//    cout << "Informe a altura do paciente (por exemplo: 1.70 que equivale a 1 m e 70 cm): " << endl;
//    cin >> paciente.altura;
//
//    cout << "Informe o sexo do paciente (m para masculino e f para feminino: " << endl;
//    cin >> paciente.sexo;
//    paciente.sexo = tolower(paciente.sexo);
//
//    pesoIdeal(paciente);
//    cout << "O peso ideal do paciente e: " << paciente.pesoIdeal << endl;
//
//    return 0;
//}
