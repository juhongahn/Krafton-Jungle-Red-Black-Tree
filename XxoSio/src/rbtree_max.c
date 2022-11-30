#include "rbtree.h"

node_t *rbtree_max(const rbtree *t) {
    // TODO: implement find
        
    // 이동하면서 탐색할 노드 선언
    node_t *x = t->root;

    // nil까지 계속 탐색
    while(x->right != t->nil) { 
        // max를 찾아야 하므로 계속해서 오른쪽 자식으로 이동
        x = x->right;
    }

    // max의 노드 반환
    return x;
}