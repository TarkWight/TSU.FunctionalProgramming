#include "ModernSolution.hpp"

#include <iostream>
#include <string>

namespace ModernSolution {

Node::Node(int k, std::unique_ptr<Node>&& l, std::unique_ptr<Node>&& r)
    : key(k), left(std::move(l)), right(std::move(r)) {}

std::unique_ptr<Node> makeRoot(const std::vector<int>& vector, int start, int end) {
	return std::make_unique<Node>(vector[midOfVector(start, end)],
            vectorToBST(vector, start, midOfVector(start, end) - 1),
            vectorToBST(vector, midOfVector(start, end) + 1, end));
}

std::unique_ptr<Node> vectorToBST(const std::vector<int>& vector, int start, int end) {
    return (start > end ? nullptr : makeRoot(vector, start, end));
}

int printDFS(const std::unique_ptr<Node>& node) {
    std::cout << (!node ? "null " : std::to_string(node->key) + " " );
    return (!node ? 0 : (printDFS(node->left), printDFS(node->right), 1));
}

int midOfVector(int start, int end) {
    return start + (end - start) / 2;
}

void run(const std::vector<int>& data) {
    printDFS(vectorToBST(data, 0, static_cast<int>(data.size()) - 1));
}

}
