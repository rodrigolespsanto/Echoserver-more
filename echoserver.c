/* echoserver.c*/
//13-maio-2024 13h00 horário de Brasília. Este código faz parte dos meus estudos sobre Redes de Computadores,
//e é baseado nos exercícios propostos pelo professor Douglas E. Comer, do livro Redes de Computadores e Internet (6º edição)

#include <stdio.h>
#include <stdlib.h>
#include <cnaiapi.h>

#define BUFFSIZE  256
// Programa: Echoserver
//Objetivo: esperar pela conexão do Client e ecoar dados
//Uso: echoserver <appnum>

int
main(int argc, char *argv[])
{
    connection conn;
    int len;
    char buff[BUFFSIZE]

    if (argc != 2){
            (void) fprintf(stderr, "usage: %s <appnum>\n", argv[0]);
             exit(1);
                  }
                  //Espera pela conexão do cliente

                  conn = await_contact ((appnum) atoi(argv[1]));
                  if (conn < 0)
                      exit(1);
//Interação que ecoa  todos os dados recebidos até o final do arquivo
while((len = recv(conn, buff, BUFFSIZE, 0)) > 0)
    (void) send(conn, buff, len, 0);
send_eof(conn);
return 0;
}
