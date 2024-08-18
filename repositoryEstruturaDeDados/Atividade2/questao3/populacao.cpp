////
//// Created by gerso on 18/08/2024.
////
//
//#include <iostream>
//using namespace std;
//
//struct Populacao {
//    int habitantes;
//    double taxaCrescimentoAnual;
//};
//
//int anosHabitantes(Populacao populacaoPaisUm, Populacao populacaoPaisDois) {
//    int anos = 0;
//    while (populacaoPaisUm.habitantes < populacaoPaisDois.habitantes) {
//        populacaoPaisUm.habitantes *= (1 + populacaoPaisUm.taxaCrescimentoAnual / 100);
//        populacaoPaisDois.habitantes *= (1 + populacaoPaisDois.taxaCrescimentoAnual / 100);
//        anos++;
//    }
//    return anos;
//}
//
//int main() {
//    Populacao populacaoPaisUm;
//    Populacao populacaoPaisDois;
//    cout << "Informe o numero de habitantes inicial do pais A: " << endl;
//    cin >> populacaoPaisUm.habitantes;
//    cout << "Informe a taxa de crescimento anual do pais A (em decimal ex: 1.5): " << endl;
//    cin >> populacaoPaisUm.taxaCrescimentoAnual;
//    cout << "================================================" << endl;
//
//    cout << "Informe o numero de habitantes inicial do pais B: " << endl;
//    cin >> populacaoPaisDois.habitantes;
//    cout << "Informe a taxa de crescimento anual do pais B (em decimal ex: 1.5): " << endl;
//    cin >> populacaoPaisDois.taxaCrescimentoAnual;
//    cout << "================================================" << endl;
//
//    int anosParaIgualar = anosHabitantes(populacaoPaisUm, populacaoPaisDois);
//    cout << "Seram necessarios " << anosParaIgualar << " anos para que a populacao do pais A, seja maior ou igual que a populacao do pais B!" << endl;
//    cout << "Apos esses " << anosParaIgualar << " anos, teremos as populacoes da cidade A com " << populacaoPaisUm.habitantes << " habitantes" << endl;
//    cout << "Enquanto a populacao da cidade B, " << populacaoPaisUm.habitantes << " habitantes" << endl;
//
//    return 0;
//}
