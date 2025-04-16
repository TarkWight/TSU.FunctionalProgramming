#ifndef MODERNSOLUTION_HPP
#define MODERNSOLUTION_HPP

#include <vector>
#include <memory>

namespace ModernSolution {

struct Node {
    int key;
    std::unique_ptr<Node> left;
    std::unique_ptr<Node> right;

    Node(int k, std::unique_ptr<Node>&& l, std::unique_ptr<Node>&& r);
};

std::unique_ptr<Node> makeRoot(const std::vector<int>& vector, int start, int end);

std::unique_ptr<Node> vectorToBST(const std::vector<int>& vector, int start, int end);

int printDFS(const std::unique_ptr<Node>& node);

int midOfVector(int start, int end);

void run(const std::vector<int>& data);

}; // namespace ModernSolution

#endif // MODERNSOLUTION_HPP
