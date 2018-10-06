#include <stdio.h>
#define NAME "PROG"

int main(int argc,char* argv[])
{
    int word;
    for(word=0;word<=argc;++word)
    {
        switch(argv[word])
        {
            case '.': //Este es el caso del nombre del archivo
            check(argv[word]);
            //FUNCIONES
            break;
            case '-': //Este es el caso de una operacion
            //FUNCIONES
            ++word; //Aumentamos ya que la siguiente palabra es el valor
            break;
            default: //Este es el caso de un parametro

            break;
        }
    }
    return 0;
}

void check(char *p)
{
    
}
