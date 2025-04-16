#ifndef CSTYLESOLUTION_HPP
#define CSTYLESOLUTION_HPP

#include <vector>

namespace CStyleSolution {

struct Node {
    int key;
    Node* left = nullptr;
    Node* right = nullptr;

    Node(int key, Node* left, Node* right);
};

Node* addNode(int key, Node* left, Node* right);

int midOfVector(int start, int end);

Node* newRoot(const std::vector<int>& vector, int start, int end);

Node* vectorToBST(const std::vector<int>& vector, int start, int end);

int printDFS(Node* node);

void deleteTree(Node* node);

void run(const std::vector<int>& data);

}

#endif // CSTYLESOLUTION_HPP
