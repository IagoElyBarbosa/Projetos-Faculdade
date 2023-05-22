#include <stdio.h>

// Propriedades de ABB-B

    // Altura da arvore = root->height = 1 + maximum(height(roo->left), height(root->right));
    // Fator de balanceamento = bf(root) == (height(root->left) - height(root->right));
    // Condicoes de balanceamento = - bf(root) == {0, 1, -1} balanceado; - bf(root) < -1 desbalanceado para a direita; bf(root) > 1 desbalanceado para a esquerda;
    
    // Arvore perfeita: 2^{h+1} - 1

// Rotacoes

    // types: L, LR, R, RL;
    
    // L((RR)root): rotacionar o root a esquerda;
    // R(LL)(root): rotacionar o root a direita;
    // LR(root): L(root->left) e R(root);
    // RL(root): R(root->right) e L(root);

/*
    Condicoes de rotacao
    
    bf(root) -- bf(root->right) -- bf(root->left) -- Rotacao
    
    < -1     -- <= 0            --                -- L
    
    < -1     -- > 0             --                -- LR
    
    > 1      --                 -- >= 0           -- R
    
    > 1      --                 -- < 0            -- RL
    
*/