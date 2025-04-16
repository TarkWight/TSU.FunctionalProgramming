#include "CStyleSolution.hpp"

#include <iostream>

namespace CStyleSolution {
Node::Node(int key, Node* left, Node* right) {
    this->key = key;
    this->left = left;
    this->right = right;
}

Node* addNode(int key, Node* left, Node* right) {
    Node* node = new Node(key, left, right);
    return node;
}

int midOfVector(int start, int end) {
    return start + (end - start) / 2;
}

void deleteTree(Node* node) {
    if (node == nullptr) return;
    deleteTree(node->left);
    deleteTree(node->right);
    delete node;
}

Node* newRoot(const std::vector<int>& vector, int start, int end) {
    return addNode(vector[midOfVector(start, end)],
                      vectorToBST(vector, start, midOfVector(start, end) - 1),
                      vectorToBST(vector, midOfVector(start, end) + 1, end)
    );
}

Node* vectorToBST(const std::vector<int>& vector, int start, int end) {
    return start > end ? nullptr : newRoot(vector, start, end);
}

int printDFS(Node* node) {
    node == nullptr ? std::cout << "null " : std::cout << node->key << " ";
    return (!node ? 0 : (printDFS(node->left), printDFS(node->right), 1));
}

void run(const std::vector<int>& data) {
    // Проблема данного метода в том, что он не освобождает память
    // поэтому необходимо создать промежуточную переменную для хранения
    // указателя на корень дерева, а затем освободить память
    // с помощью deleteTree

    // иначе м ожно создать обёртку над указателем,
    // которая будет освобождать память автоматически
    auto root = vectorToBST(data, 0, data.size() - 1);
    printDFS(root);
    deleteTree(root);
}
} // namespace CStyleSolution
