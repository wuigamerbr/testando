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
      criar(tarefas, &pos);
    } else if (opcao == 2) {
      deletar(tarefas, &pos);
    } else if (opcao == 3) {
      listar(tarefas, pos);
    } else if (opcao == 0)
      printf("Sair...\n");
      salvar(tarefas, pos, TOTAL);
    else
      printf("Opcao invalida\n");

  } while (opcao != 0);
}