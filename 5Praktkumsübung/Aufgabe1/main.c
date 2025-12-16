#include <stdio.h>
#include "bintree.h"

int main(void) {
    /* Beispielbaum:
              A
             / \
            B   C
           / \
          D   E
    */

    bintree* nodeD = bintree_create('D', NULL, NULL);
    bintree* nodeE = bintree_create('E', NULL, NULL);
    bintree* nodeB = bintree_create('B', nodeD, nodeE);
    bintree* nodeC = bintree_create('C', NULL, NULL);
    bintree* root  = bintree_create('A', nodeB, nodeC);

    /* Test Selektoren */
    printf("Root: %c\n", bintree_get_value(root));
    printf("Left child: %c\n", bintree_get_value(bintree_get_left(root)));
    printf("Right child: %c\n", bintree_get_value(bintree_get_right(root)));

    /* Test Inorder */
    printf("Inorder: ");
    print_inorder(root);
    printf("\n");

    /* Test count */
    printf("Anzahl der Knoten: %d\n", count(root));

    return 0;
}
