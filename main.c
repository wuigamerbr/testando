#include "tarefas.h"
#include <stdio.h>

int main() {
  int opcao;

  Tarefa tarefas[TOTAL];
  int pos = 0;
  Erro e = carregar(tarefas, &pos, TOTAL);
  if(e == ABRIR || e == LER || e == FECHAR)
    pos = 0;

  do {
    printf("\nMenu principal\n");
    printf("1 - Criar tarefa\n");
    printf("2 - Deletar tarefa\n");
    printf("3 - Listar tarefas\n");
    printf("0 - Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
    printf("Opcao escolhida: %d\n", opcao);

    if (opcao == 1) {
      e = criar(tarefas, &pos);
      if(e == MAX_TAREFAS)
        printf("Maximo de tarefas atingido\n");

    } else if (opcao == 2) {
      e = deletar(tarefas, &pos);
      if(e == SEM_TAREFAS)
        printf("Tarefa nao encontrada\n");
    } else if (opcao == 3) {
      e = listar(tarefas, &pos);
      if(e == SEM_TAREFAS)
        printf("Nao ha tarefas\n");
      listar(tarefas, pos);
    } else if (opcao == 0)
      printf("Sair...\n");
      e = salvar(tarefas, pos, TOTAL);
      if(e == ABRIR || e == ESCREVER || e == FECHAR)
        printf("Erro ao salvar tarefas\n");
    else
      printf("Opcao invalida\n");

  } while (opcao != 0);
}