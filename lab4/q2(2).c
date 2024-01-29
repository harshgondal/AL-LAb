#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int pusha[9] = {0,0,0,0,0,0,0,0,0};
int popa[9] = {0,0,0,0,0,0,0,0,0};
int visited[9] = {0,0,0,0,0,0,0,0,0};
char vertices[9] = {'A','B','S','C', 'D', 'E', 'F', 'G', 'H'};
    int A [9][9] = {
        {0,1,1,0,0,0,0,0,0},
        {1,0,0,0,0,0,0,0,0},
        {1,0,0,1,0,0,0,1,0},
        {0,0,1,0,1,1,1,0,0},
        {0,0,0,1,0,0,0,0,0},
        {0,0,0,1,0,0,0,0,1}, 
        {0,0,0,1,0,0,0,1,0},
        {0,0,1,0,0,0,1,0,1},
        {0,0,0,0,0,1,0,1,0}
    };
 
void DFS(int i){
    static int pull = 0;
    static int push  =0 ;
    pusha[i] = ++push;
    printf("%c ", vertices[i]);
    visited[i] = 1;
    for (int j = 0; j < 9; j++)
    {
        if(A[i][j]==1 && !visited[j]){
            DFS(j);
        }
    }
    popa[i] = ++pull;
}
 
int main(){
    printf("DFS: " );  
    DFS(0);
    printf("\n" ); 
    printf("push order: \n" );
    for(int k=0; k<9; k++){
        printf("%c : %d \n",vertices[k], pusha[k] );
    }
    printf("pop order: \n" );
    for(int k=0; k<9; k++){
        printf("%c : %d \n",vertices[k], popa[k] );
    }
    return 0;
}