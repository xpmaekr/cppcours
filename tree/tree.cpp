#include <iostream>
#include "tree.hpp"
#include <ctime>
using namespace std;

heap::heap() {
    root = nullptr;
}

void heap::add_(int x, node* n) {
    if (n->left == nullptr) {
        n->left = new node;

        n->left->inf = x;
        n->left->parent = n;
        n->left->left = nullptr;
        n->left->rigth = nullptr;
    }
    else if (n->rigth == nullptr) {
        n->rigth = new node;

        n->rigth->inf = x;
        n->rigth->parent = n;
        n->rigth->left = nullptr;
        n->rigth->rigth = nullptr;
    } 
    else {
        int rint = rand()%2;
        if (rint == 0) {
            add_(x, n->left);
        }
        else {
            add_(x,n->rigth);
        }
    }
}

void heap::add(int x) {
    if (root == nullptr) {
        root = new node ;
        root->inf = x;
        root->parent = nullptr;
        root->left = nullptr;
        root->rigth = nullptr;
    } 
    else {
        
    }
} 