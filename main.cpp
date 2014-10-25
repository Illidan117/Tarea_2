#include "Evaluador.h"
#include <iostream>
using namespace std;

//Desrefencia ptr (dado) y devuelve su valor
int obtenerValor(int *ptr)
{
    return *ptr; //desreferencia de la variable *ptr
}

//Desreferencia a (dado) y b (dado) y devuelve la suma de ambos
int sumar(int* a, int* b)
{
    return *a + *b;
}

//Devuelve true si a (dado) y b (dado) apuntan al mismo espacio de memoria
bool compararApuntadores(string *a, string *b)
{
    if(a==b) //se comparan las variables
    return true; // devuelve true si son los mismos valores
}

//Desrefencia a (dado) y b (dado), devuelve true si ambos valores son iguales de lo contrario devuelve false
bool comparar(string *a, string *b)
{
    if(*a==*b) //comparacion de las variables
    return true; //devuelve true si son los mismos valores
}


//Desreferencia a (dado) y devuelve su primera letra
char getPrimeraLetra(string* a)
{
    char first = a->at(0);//Empleo de la funcion at para destacar la posicion de la letra.
    return first;
}

//Desreferencia a (dado) y devuelve true si es palindroma de lo contrario devuelve false
//Definicion de palindromo: http://es.wikipedia.org/wiki/Pal%C3%ADndromo
//Ejemplos de palindromos: Ana, arenera, arepera, anilina, ananá, Malayalam, Neuquén, Oruro, oso, radar, reconocer, rotor, salas, seres, somos, sometemos
bool esPalindromo(string* a)
{
    string *backwards = new string(""); //creacion de una variable apuntador
    for(int c = a->length()-1; c>= 0; c--)//empezara a contar desde la ultima posicion usando la funcion length
    {
        backwards+= a->at(c); //se hace una resta 1 para que coincida con el numero de cada elemento
    }
    if(backwards==a) //se comparan las cadenas almacenadas
        return true; //se coincide devuelve true

}

//Desreferencia base (dado) y exponente (dado) y devuelve la base elevado al exponente
int getExponente(int* base, int* exponente)
{
    int x=1;
    for(int i=0;i<*exponente;i++){// el contador es 0, llegara hasta el valor del exponente
        x=x*(*base);// almacena lo que hay en la misma variable.
    }
    return x;//devuelve la potencia
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
