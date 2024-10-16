#include <iostream>
#include <queue>

struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Função para imprimir todos os nodos em um determinado nível
void ArvoreBinariaBusca_Imprimir_Por_Nivel(Node* root, int nivel) {
    if (root == nullptr) return;
    
    std::queue<Node*> fila;
    fila.push(root);
    int nivel_atual = 0;
    
    while (!fila.empty()) {
        int tamanho = fila.size();
        if (nivel_atual == nivel) {
            for (int i = 0; i < tamanho; ++i) {
                Node* nodo = fila.front();
                fila.pop();
                std::cout << nodo->data << " ";
            }
            std::cout << std::endl;
            return;
        }
        
        for (int i = 0; i < tamanho; ++i) {
            Node* nodo = fila.front();
            fila.pop();
            if (nodo->left) fila.push(nodo->left);
            if (nodo->right) fila.push(nodo->right);
        }
        ++nivel_atual;
    }
}

// Função auxiliar para inserir um nó na árvore
Node* inserir(Node* root, int val) {
    if (root == nullptr) return new Node(val);
    if (val < root->data) root->left = inserir(root->left, val);
    else root->right = inserir(root->right, val);
    return root;
}

int main() {
    // Construindo a árvore com os elementos
    Node* root = nullptr;
    root = inserir(root, 10);
    root = inserir(root, 5);
    root = inserir(root, 15);
    root = inserir(root, 3);
    root = inserir(root, 7);
    root = inserir(root, 12);
    root = inserir(root, 18);
    root = inserir(root, 2);
    root = inserir(root, 6);
    root = inserir(root, 4);
    
    // Imprimindo os nodos do nível 2
    std::cout << "Nodos do nível 2: ";
    ArvoreBinariaBusca_Imprimir_Por_Nivel(root, 2);
    
    return 0;
}
