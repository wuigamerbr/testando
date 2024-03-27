# Projeto 0 - Vespertino (CC2632)

## Objetivo

Gerenciador de tarefas permite criar, deletar e listar tarefas.

Cada tarefa possui uma prioridade, uma descrição e uma categoria, sendo que o progama permite armazenar até 100 tarefas em um arquivo binário.

## Compilação e execução

Para a compilação é necessário ter um compilador de C (gcc ou clang) com as bibliotecas stdio.h e string.h.
...
gcc *.c -o tarefas.out
...

Para a execução
...
./tarefas.out
...

## Arquivos necessários
O progama salva as tarefas cadastradas no arquivo 'tarefas', um arquivo binário que não é possivel editar em um editor de texto comum.