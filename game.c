// Joguinho da velha em linguagem C
#include <stdio.h>

// Variáveis do sistema
int gameOver = 0;

char view[3][3] = {
    '1', '2', '3', 
    '4', '5', '6', 
    '7', '8', '9'
};

int player;
int choice;
int champion;
int i, j;

// Variáveis do jogador 1
char player1 [30];
// Variáveis do jogador 2
char player2 [30];

//Procedimento para pegar os nomes dos players
void loadNames() {
    printf ("\nWrite your nickname player 1: ");
    gets (player1);
    printf ("\nWrite your nickname player 2: ");
    gets (player2);
}

void showView() {
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%c ", view[i][j]);
        }
        printf("\n");
    }
    printf("--------------\n");
}

void verify() {
    if (view[0][0] == 'X' && view[0][1] == 'X' && view[0][2] == 'X') {
        gameOver = 1;
        champion = 1;
    }
    
    if (view[1][0] == 'X' && view[1][1] == 'X' && view[1][2] == 'X') {
        gameOver = 1;
        champion = 1;
    }
    
    if (view[2][0] == 'X' && view[2][1] == 'X' && view[2][2] == 'X') {
        gameOver = 1;
        champion = 1;
    }
    
    if (view[0][0] == 'X' && view[1][1] == 'X' && view[2][2] == 'X') {
        gameOver = 1;
        champion = 1;
    }
    
    if (view[0][2] == 'X' && view[1][1] == 'X' && view[2][0] == 'X') {
        gameOver = 1;
        champion = 1;
    }
    
    if (view[0][0] == 'X' && view[1][0] == 'X' && view[2][0] == 'X') {
        gameOver = 1;
        champion = 1;
    }

    if (view[1][0] == 'X' && view[1][1] == 'X' && view[1][2] == 'X') {
        gameOver = 1;
        champion = 1;
    }
    
    if (view[2][0] == 'X' && view[2][1] == 'X' && view[2][2] == 'X') {
        gameOver = 1;
        champion = 1;
    }

    //--------------------------------------------------------------------
    
    if (view[0][0] == 'O' && view[0][1] == 'O' && view[0][2] == 'O') {
        gameOver = 1;
        champion = 2;
    }
    
    if (view[1][0] == 'O' && view[1][1] == 'O' && view[1][2] == 'O') {
        gameOver = 1;
        champion = 2;
    }
    
    if (view[2][0] == 'O' && view[2][1] == 'O' && view[2][2] == 'O') {
        gameOver = 1;
        champion = 2;
    }
    
    if (view[0][0] == 'O' && view[1][1] == 'O' && view[2][2] == 'O') {
        gameOver = 1;
        champion = 2;
    }
    
    if (view[0][2] == 'O' && view[1][1] == 'O' && view[2][0] == 'O') {
        gameOver = 1;
        champion = 2;
    }
    
    if (view[0][0] == 'O' && view[1][0] == 'O' && view[2][0] == 'O') {
        gameOver = 1;
        champion = 2;
    }

    if (view[1][0] == 'O' && view[1][1] == 'O' && view[1][2] == 'O') {
        gameOver = 1;
        champion = 2;
    }
    
    if (view[2][0] == 'O' && view[2][1] == 'O' && view[2][2] == 'O') {
        gameOver = 1;
        champion = 2;
    }    
}

//Dados que serão inseridos na matriz
void datesOn() {
    switch (choice) {
    case 1:
        if (player == 1) {
            if (view[0][0] != 'X' && view[0][0] != 'O') {
                view[0][0] = 'X';
            } else {
                printf ("You can't rob you little bitch, now you lose.\n");
                gameOver = 1;
                champion = 2;
            } 
        } else if (player == 2) {
            if (view[0][0] != 'X' && view[0][0] != 'O') {
                view[0][0] = 'O';
            } else {
                printf ("You can't rob you little bitch, now you lose.\n");
                gameOver = 1;
                champion = 1;
            }
        }
        break;

    case 2:
        if (player == 1) {
            if (view[0][1] != 'X' && view[0][1] != 'O') {
                view[0][1] = 'X';
            } else {
                printf ("You can't rob you little bitch, now you lose.\n");
                gameOver = 1;
                champion = 2;
            }
        } else if (player == 2) {
            if (view[0][1] != 'X' && view[0][1] != 'O') {
                view[0][1] = 'O';
            } else {
                printf ("You can't rob you little bitch, now you lose.\n");
                gameOver = 1;
                champion = 1;
            }
        }
        break;
    case 3:
         if (player == 1) {
            if (view[0][2] != 'X' && view[0][2] != 'O') {
                view[0][2] = 'X';
            } else {
                printf ("You can't rob you little bitch, now you lose.\n");
                gameOver = 1;
                champion = 2;
            }
        } else if (player == 2) {
            if (view[0][2] != 'X' && view[0][2] != 'O') {
                view[0][2] = 'O';
            } else {
                printf ("You can't rob you little bitch, now you lose.\n");
                gameOver = 1;
                champion = 1;
            }
        }    
        break;
    case 4:
        if (player == 1) {
            if (view[1][0] != 'X' && view[1][0] != 'O') {
                view[1][0] = 'X';
            } else {
                printf ("You can't rob you little bitch, now you lose.\n");
                gameOver = 1;
                champion = 2;
            } 
        } else if (player == 2) { 
            if (view[1][0] != 'X' && view[1][0] != 'O') {
                view[1][0] = 'O';
            } else {
                printf ("You can't rob you little bitch, now you lose.\n");
                gameOver = 1;
                champion = 1;
            }
        }
        break;
    case 5:
        if (player == 1) {
            if (view[1][1] != 'X' && view[1][1] != 'O') {
                view[1][1] = 'X';
            } else {
                printf ("You can't rob you little bitch, now you lose.\n");
                gameOver = 1;
                champion = 2;
            } 
        } else if (player == 2) { 
            if (view[1][1] != 'X' && view[1][1] != 'O') {
                view[1][1] = 'O';
            } else {
                printf ("You can't rob you little bitch, now you lose.\n");
                gameOver = 1;
                champion = 1;
            }
        }
        break;
    case 6:
        if (player == 1) {
            if (view[1][2] != 'X' && view[1][2] != 'O') {
                view[1][2] = 'X';
            } else {
                printf ("You can't rob you little bitch, now you lose.\n");
                gameOver = 1;
                champion = 2;
            } 
        } else if (player == 2) {
            if (view[1][2] != 'X' && view[1][2] != 'O') {
                view[1][2] = 'O';
            } else {
                printf ("You can't rob you little bitch, now you lose.\n");
                gameOver = 1;
                champion = 1;
            }
        }
        break;
    case 7:
        if (player == 1) {
            if (view[2][0] != 'X' && view[2][0] != 'O') {
                view[2][0] = 'X';
            } else {
                printf ("You can't rob you little bitch, now you lose.\n");
                gameOver = 1;
                champion = 2;
            } 
        } else if (player == 2) {
            if (view[2][0] != 'X' && view[2][0] != 'O') {
                view[2][0] = 'O';
            } else {
                printf ("You can't rob you little bitch, now you lose.\n");
                gameOver = 1;
                champion = 1;
            }
        }    
        break;
    case 8:
        if (player == 1) {
            if (view[2][1] != 'X' && view[2][1] != 'O') {
                view[2][1] = 'X';
            } else {
                printf ("You can't rob you little bitch, now you lose.\n");
                gameOver = 1;
                champion = 2;
            }
        } else if (player == 2) { 
            if (view[2][1] != 'X' && view[2][1] != 'O') {
                view[2][1] = 'O';
            } else {
                printf ("You can't rob you little bitch, now you lose.\n");
                gameOver = 1;
                champion = 1;
            } 
        }
        break;
    case 9:
        if (player == 1) {
            if (view[2][2] != 'X' && view[2][2] != 'O') {
                view[2][2] = 'X';
            } else {
                printf ("You can't rob you little bitch, now you lose.\n");
                gameOver = 1;
                champion = 2;
            } 
        }else if (player == 2) {
            if (view[2][2] != 'X' && view[2][2] != 'O') {
                view[2][2] = 'O';
            } else {
                printf ("You can't rob you little bitch, now you lose.\n");
                gameOver = 1;
                champion = 1;
            }
        }    
        break;

    default:
        printf ("\nThis position dont exists!!!");
        gameOver = 1;
        if (player == 1)
            champion = 2;
        else if (player == 2)
            champion = 1;
        break;
    }
}

void input(int p) {
    player = p;
    if (gameOver == 0) {
        switch (player) {
            case 1:
                printf ("\nNow is your turn %s, select one number: ", player1);
                scanf ("%d", &choice);
                break;
            case 2:
                printf ("\nNow is your turn %s, select one number: ", player2);
                scanf ("%d", &choice);
                break;
        }
        datesOn();
    }
}

int main(){
    loadNames();
    printf("Jogadores: %s & %s\n", player1, player2);
    showView();

    do {
        input(1);
        verify();
        showView();
        input(2);
        verify();
        showView();
    } while (gameOver == 0);
    
    if (champion == 1)
        printf ("\nGame Over!!!\n<<<<<<<< %s win >>>>>>>>", player1);
    else if (champion == 2)
        printf ("\nGame Over!!!\n<<<<<<<< %s win >>>>>>>>", player2);
    return 0;
}