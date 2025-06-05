#include <stdio.h>

int main() {

    const int tamTabuleiro = 10;
    const int tamNavio = 3;

    // inicialização do tabuleiro com tamanho 10x10
    int tabuleiro[10][10] = {0};

    // Posicionamento inicial navio horizontal
    int xHor = 2;
    int yHor = 4;

    // Posicionamento inicial navio vertical
    int xVert = 5;
    int yVert = 1;

    // navio horizontal cabe dentro do tabuleiro?
    if(yHor + tamNavio <= tamTabuleiro){
        // tem sobreposição?
        int sobreposicao = 0;
        for(int i = 0; i < tamNavio; i++) {
            if(tabuleiro[xHor][yHor + 1] != 0){
                sobreposicao = 1;
                break;
            }
        }
        if(!sobreposicao){
            for(int i = 0; i < tamNavio; i++){
                tabuleiro[xHor][yHor+i] = 3;
            }
        }
    }

    // navio vertical cabe dentro do tabuleiro?
    if(xVert + tamNavio <= tamTabuleiro){
        // tem sobreposição?
        int sobreposicao = 0;
        for(int i = 0; i < tamNavio; i++) {
            if(tabuleiro[xVert + 1][yVert] != 0){
                sobreposicao = 1;
                break;
            }
        }
        if(!sobreposicao){
            for(int i = 0; i < tamNavio; i++){
                tabuleiro[xVert+1][yVert] = 3;
            }
        }
    }

    //mostrando o tabuleiro
    printf("Tabuleiro de Batalha Naval (0 = água, 3 = navio):\n\n");
    for (int linha = 0; linha < tamTabuleiro; linha++) {
        for (int coluna = 0; coluna < tamTabuleiro; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }
    return 0;
}
