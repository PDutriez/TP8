#include <stdio.h>
#include"checkterm.h"
#define NAME "checkterm" //Nombre original del programa

int main(int argc,char* argv[])
{
    int count;
    char* options[2][MAX/2],char* parametros[MAX];
    checkname(argv[0],NAME);
    checkall(argc,argv,options,parametros);
    for(count=0;count<=MAX;++count)
        printf("El parametro numero %d, es: %s\n",count,parametros[count]);
    for(count=0;count<=MAX/2;++count)
        printf("El operando numero %d, clave: %s, valor:%s ",count,options[0][count],options[1][count]);

}
