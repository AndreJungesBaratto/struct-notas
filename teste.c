#include <stdio.h>
#include <time.h>
#include <stdlib.h>

typedef struct{
    int id;
    int nota;
}t_aluno;

int maior(t_aluno aluno[]){
    int maiornota=INT_MIN;
    for(int e=0; e<10; e++){
        if(aluno[e].nota>=maiornota){
            maiornota=aluno[e].nota;
        }
    }
    return maiornota;
}

int repete(t_aluno aluno[]){

}

void main(){
    t_aluno aluno[10];
    int nota[10];
    int maiornota;
    srand(time(NULL));

    for(int a=0; a<10; a++){
        aluno[a].id=a+1;
        aluno[a].nota= rand()%10;
        printf("Id do aluno: %d\nNota do aluno: %d\n", aluno[a].id, aluno[a].nota);
    }

    maiornota = maior(aluno);
    printf("A maior nota da turma eh: %d", maiornota);


}
