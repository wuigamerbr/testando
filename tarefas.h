typedef struct Tarefa{
int prioridade;
char categoria[100];
char descricao[300];
} Tarefa;

typedef enum Erro {
OK, ABRIR, FECHAR, LER, ESCREVER, MAX_TAREFAS, SEM_TAREFAS
} Erro;