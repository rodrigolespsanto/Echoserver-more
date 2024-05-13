/* echoserver.c*/
//13-maio-2024 13h00 hor�rio de Bras�lia. Este c�digo faz parte dos meus estudos sobre Redes de Computadores,
//e � baseado nos exerc�cios propostos pelo professor Douglas E. Comer, do livro Redes de Computadores e Internet (6� edi��o)

#include <stdio.h>
#include <stdlib.h>


#define BUFFSIZE  256
// Programa: Echoserver
//Objetivo: esperar pela conex�o do Client e ecoar dados
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
                  //Espera pela conex�o do cliente

                  conn = await_contact ((appnum) atoi(argv[1]));
                  if (conn < 0)
                      exit(1);
//Intera��o que ecoa  todos os dados recebidos at� o final do arquivo
while((len = recv(conn, buff, BUFFSIZE, 0)) > 0)
    (void) send(conn, buff, len, 0);
send_eof(conn);
return 0;
}
