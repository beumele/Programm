#ifndef BINTREE_H
#define BINTREE_H

/* Datentyp Binärbaum */
typedef struct bintree {
    struct bintree* left;
    char node;
    struct bintree* right;
} bintree;

/* Konstruktor */
bintree* bintree_create(char node, bintree* left, bintree* right);

/* Selektoren */
char bintree_get_value(bintree* tree);
bintree* bintree_get_left(bintree* tree);
bintree* bintree_get_right(bintree* tree);

/* Traversierung */
void print_inorder(bintree* tree);

/* Zählen der Knoten */
int count(bintree* tree);

#endif /* BINTREE_H */
