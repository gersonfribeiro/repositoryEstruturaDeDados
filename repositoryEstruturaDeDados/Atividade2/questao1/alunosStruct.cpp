////
//// Created by gerso on 18/08/2024.
////
//
//#include <iostream>
//using namespace std;
//
//struct Aluno {
//    char nome[101];
//    char matricula[15];
//};
//
//int main()
//{
//    Aluno alunos[3];
//
//    for (int i = 0; i < sizeof(alunos)/sizeof(alunos[0]); ++i) {
//        cout << "================================================" << endl;
//        cout << "Insira as informacoes do aluno " << i + 1 << ": " << endl;
//
//        cout << "Nome: " << endl;
//        cin.getline(alunos[i].nome, 101);
//
//        cout << "Matricula: " << endl;
//        cin.getline(alunos[i].matricula, 15);
//    }
//
//    cout << "================================================" << endl;
//    cout << "\tInformacoes dos alunos: " << endl;
//    cout << "================================================" << endl;
//    for (int i = 0; i < sizeof(alunos)/sizeof(alunos[0]); ++i) {
//        cout << "Nome: " << alunos[i].nome << endl;
//        cout << "Matricula: " << alunos[i].matricula << endl;
//        cout << "================================================" << endl;
//    }
//
//
//    return 0;
//}
