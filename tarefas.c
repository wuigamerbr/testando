#include "tarefas.h"
#include <stdio.h>

Erro criar(Tarefa t[], int *pos){
  if(*pos >= TOTAL)
    return MAX_TAREFAS;

  
  printf("Digite a prioridade: ");
  scanf("%d", &t[*pos].prioridade);
  clearBuffer();
  
  printf("Entre com a descricao: ");
  fgets(t[*pos].descricao, 300, stdin);
  clearBuffer();

  printf("Entre com a categoria: ");
  fgets(t[*pos].categoria, 100, stdin);

  printTarefa(t[*pos]);
  *pos = *pos + 1;
  
  return OK;
}
Erro deletar(Tarefa t[], int *pos){
  printf("funcao deletar tarefa");
  return OK;
}
Erro listar(Tarefa t[], int pos){
  printf("funcao listar tarefa");
  return OK;
}
Erro salvar(Tarefa t[], int pos, int tamanho){
  printf("funcao salvar tarefa");
  return OK;
}
Erro carregar(Tarefa t[], int *pos, int tamanho){
  printf("funcao carregar tarefa");
  return OK;
}

void printTarefa(Tarefa t){
  printf("Prioridade: %d\t Categoria: %s\n", t.prioridade, t.categoria);
  printf("Descricao: %s\n", t.descricao);
}

void clearBuffer(){
  int c;
  while ((c = getchar()) != '\n' && c != EOF) {}
}