cmake_minimum_required(VERSION 3.27)
project(repositoryEstruturaDeDados)

set(CMAKE_CXX_STANDARD 17)

add_executable(repositoryEstruturaDeDados Atividade1/vetores/questao1/somarImpares.cpp
        Atividade1/vetores/questao2/totalAPagar.cpp
        Atividade1/vetores/questao3/mediaAlunos.cpp
        Atividade1/vetores/questao4/variavelComposta.cpp
        Atividade1/vetores/questao5/doisVetores.cpp
        Atividade1/vetores/questao6/matrizTransposta.cpp
        Atividade1/strings/questao1/lexicograficamenteMenor.cpp)
