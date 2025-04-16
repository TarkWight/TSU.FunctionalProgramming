# Binary Search Tree – Modern vs Raw Memory

## Description

This project is an educational lab assignment aimed at comparing two approaches to memory management when building and working with a binary search tree (BST):

- **Modern C++ Solution**: using `std::unique_ptr`, RAII, and move semantics  
- **C-Style Solution**: classic approach with manual `new`/`delete` management

---

## Implemented Features

- Reading a sorted list of integers in ascending order  
- Building a balanced binary search tree  
- Recursive DFS traversal

---

## Solution Variants

### Modern Solution (`std::unique_ptr`)
- All nodes are managed via `std::unique_ptr`
- Full lifecycle is handled through RAII
- No manual `delete` calls
- Uses `std::make_unique`, `std::move`, and rvalue references

### C-Style Solution (`T*`)
- Nodes are manually created using `new`
- Manual memory cleanup using `delete`

---

Author: Tark Wight
