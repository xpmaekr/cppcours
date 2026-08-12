#pragma once

struct node{
    int inf;
    node* parent;
    node* left;
    node* rigth;
};

struct heap {
    node* root;
    heap();

    void add(int);
    void remove(int);
    bool find(int);
    void print();

private:
    void add_(int, node*);
};
