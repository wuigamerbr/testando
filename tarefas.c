#include "tarefas.h"
#include <stdio.h>
#include <string.h>

Erro criar(Tarefa t[], int *pos) {
  if (*pos >= TOTAL)
    return MAX_TAREFAS;

  printf("Entre com uma prioridade: ");
  scanf("%d", &t[*pos].prioridade);
  clearBuffer();

  printf("Entre com a descricao: ");
  fgets(t[*pos].descricao, 300, stdin);
  clearBuffer();

  printf("Entre com a categoria: ");
  fgets(t[*pos].categoria, 100, stdin);

  // printTarefa(t[*pos]);
  *pos = *pos + 1;

  return OK;
}
Erro deletar(Tarefa t[], int *pos) {
  if (*pos == 0)
    return SEM_TAREFAS;

  printf("Entre com a posicao da tarefa: ");
  int pos_d;
  scanf("%d", &pos_d);
  pos_d--;
  if (pos_d >= *pos)
    return NAO_ENCONTRADO;

  for (int i = pos_d; i < *pos; i++) {
    t[i].prioridade = t[i + 1].prioridade;
    strcpy(t[i].categoria, t[i + 1].categoria);
    strcpy(t[i].descricao, t[i + 1].descricao);
  }

  *pos = *pos - 1;

  return OK;
}
Erro listar(Tarefa t[], int pos) {
  if (pos == 0)
    return SEM_TAREFAS;

  for (int i = 0; i < pos; i++)
    printTarefa(t[i], i + 1);

  return OK;
}

Erro salvar(Tarefa t[], int pos, int tamanho) {
  printf("funcao salvar tarefas");
  return OK;
}
Erro carregar(Tarefa t[], int *pos, int tamanho) {
  FILE *f = fopen("tarefas", "rb");
  if (f == NULL)
    return ABRIR;

  int i = fread(t, tamanho, sizeof(Tarefa), f);
  if(i <= 0)
    return LER;

  i = fread(pos, 1, sizeof(int), f);
  if(i <= 0)
    return LER;
  
  i = fclose(f);
  if(i == 0)
    return FECHAR;
  
  return OK;
}
void printTarefa(Tarefa t, int pos) {
  printf("\nPosicao: %d\t", pos);
  printf("Prioridade: %d\tCategoria: %s\t", t.prioridade, t.categoria);
  printf("Descricao: %s", t.descricao);
}
void clearBuffer() {
  int c;
  while ((c = getchar()) != '\n' && c != EOF) {
  }
}