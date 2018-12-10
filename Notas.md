# Notas Lenguaje C
 > Notas del libro de lenguaje de Programación de C y otros documentos

## Introducción
Muchas veces queremos aprender pero ignoramos el hecho de no estamos solos. Existen otras personas que estubieron donde estás, tuvieron las mismas dudas, se desesperaron igualmente y por lo que escuchar sus problemas y ver como lo solucionan te permitirá ampliar tu visión de lo que lo que te gustaría hacer además de tener un lugar en donde compartir lo que creas

Esta es una lista de algunas comunidades que he econtrado
 - [Desarrolladores/Cpp (Facebook)](https://www.facebook.com/groups/467783429968410/post_tags/?post_tag_id=1998231400256931) 
 - [foro.elhacker](https://foro.elhacker.net/programacion_cc-b49.0/) 
 

## 1.4 Constantes simbólicas
### Números Mágicos
Una mala práctica es dejar constantes sin documentacion, por ejemplo un `13` carece de sentido si no se tiene un contexto. Una mejor práctica sería

```c
#define PAISES_SURAMERICA 13
```
Estas constantes que se incluyen directamente en el código fuente se les conocen como [números mágicos][1.4.1] y son un [antipatrón de diseño][1.4.2]

Adicionalmente, para saber que direferencias existen entre `#define` y `const` en Cpp, se puede revisar el artículo [const contra #define][vitaminacpp_constvsdef]

### Convenciones
Los nombres de constantes simbólicas, por convención se escriben con letras mayusculas

```c
#define DECK_SIZE 52
#define STEP 20
#define STR_LEN 32
```
## 1.5 Entrada y salida de caracteres
```c
c = getchar();
putchar()
EOF //End Of File
```
La función `getchar()` devuelve un valor distintivo cuando no hay más elementos en la entrada, un valor que no puede ser confundido con ningún otro carácter. Este valor se llama `EOF` por "end of file (fin de linea)" y normalmente posee valor de [-1](https://stackoverflow.com/a/4705984/468132). Este entero esta definido en `<stio.h>`

Para generar el caracter `EOF`

|OS     |Keys       |
|------:|:---------:|
|win    |`Ctrl`+`Z` |
|Linux  |`Ctrl`+`D` | 

Fuente: [Stackoverflow](https://stackoverflow.com/a/3646298/4681320)


[//]: # ( https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet#tables) 

### Float sin punto

```c
printf("%f\n",100.0);
printf("%.0f\n",100.0);
```
>100.000000  
>100

### ASCII
'\n' es un carácter simple con un valor ASCII de 10, mientras que "\n" es una cadena constante que contiene un solo carácter

## 1.7 Funciones

### Return 0;

`main()` tiene un `return` al final, puesto que `main` es una función como cualquier otra, también puede regresar un valor a quien la invoca, que es el efecto el medio ambiente en que el programa se ejecuta.  
Un valor `0` implica una terminación normal; los valores diferentes de cero indican condiciones de terminación no comunes o erróneas.
### Funciones Prototipos

```c
int power(int m, int n); /*(1) Prototipo*/

int main(){
    power() /*(3) uso*/
    ...
}

int power(int m, int n){ /*(2) definición*/
    ...
}
```
La declaración `(1)` se le conococe como *Función Prototipo* y  debe coincidir con la definición `(2)` y uso `(3)` de `power`

Y aunque el nombre de los parámetros no sean obligatorios

```c 
int power(int, int) 
```
Es recomendable para tener una buena documentación


[1.4.1]:https://en.wikipedia.org/wiki/Magic_number_(programming)#Unnamed_numerical_constants
[1.4.2]:https://es.wikipedia.org/wiki/Antipatr%C3%B3n_de_dise%C3%B1o
[vitaminacpp_constvsdef]:https://vitaminacpp.wordpress.com/2013/01/06/const-contra-define/