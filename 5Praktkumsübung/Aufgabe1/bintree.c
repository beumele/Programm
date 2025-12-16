#include <stdio.h>
#include <stdlib.h>
#include "bintree.h"

/* Konstruktor */
bintree* bintree_create(char node, bintree* left, bintree* right) {
    bintree* tree = malloc(sizeof(bintree)); /* Speicher für neuen Knoten reservieren */
    if (tree == NULL) {
        return NULL;
    }

    tree->node = node;
    tree->left = left;  /* -> greift auf den die Felder der Struktur zu*/
    tree->right = right;

    return tree;
}

/* Selektoren */
char bintree_get_value(bintree* tree) {
    return tree->node;
}

bintree* bintree_get_left(bintree* tree) {
    return tree->left;
}

bintree* bintree_get_right(bintree* tree) {
    return tree->right;
}

/* c) Inorder-Traversierung */
void print_inorder(bintree* tree) {
    if (tree == NULL) {
        return;
    }

    print_inorder(tree->left);
    printf("%c ", tree->node);
    print_inorder(tree->right);
}

/* e) Anzahl der Knoten zählen */
int count(bintree* tree) {
    if (tree == NULL) {
        return 0;
    }

    return 1 + count(tree->left) + count(tree->right);
}
