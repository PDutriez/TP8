#include<stdio.h>
#include"checkterm.h"

void checkall(int argc,char* argv[],char* options[2][MAX/2], char* parametros[MAX])
{
    int word,opt=0,param=0;
    for(word=1;word<=argc;++word)   //Se empieza desde el 1 para saltear el nombre
    {
        switch(*argv[word])
        {
            case '-': //Este es el caso de una operacion
            options[0][opt]=argv[word]; //Guardamos el puntero a la clave y su valor
            options[1][opt++]=argv[++word]; //Aumentamos ya que la siguiente palabra es el valor
            break;
            default: //Este es el caso de un parametro
            parametros[param++]=argv[word];
            break;
        }
    }
}

void checkname(const char* name,const char* mainname)
{
    int status=1;    //Inicialmente creemos que ambas son iguales
    while((*name!=0 || *mainname!=0) && status!=0) //No es necesario "!=0" pero ayuda a la comprension
    {
        if(*name++ != *mainname++)
          {
          status=0; //Implica que son distintos sus valore
          printf("\n ERROR: Se ha modificado el nombre original del archivo\n");
          }
    }
}
