
# Notas Lenguaje C
 > Notas del libro de lenguaje de Programación de C y otros documentos

## Introducción

![Educacion, Piaget](assets/images/Educacion_Jean_Piaget.jpg | width: 200px)

<p align="center">
  <img alt="Educacion - Jean Piaget" src="assets/images/Educacion_Jean_Piaget.jpg" width=400rem>
</p>
<p align="center">
  <img alt="Educacion - Jean Piaget" src="assets/images/Educacion_Jean_Piaget.jpg" width=20%>
</p>
<p align="center">
  <img alt="Educacion - Jean Piaget" src="assets/images/Educacion_Jean_Piaget.jpg" width=250px>
</p>




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
Estas constantes que se incluyen directamente en el código fuente se les conocen como [números mágicos][1.4.1] y son un [antipatrón de diseño][1.4.2]sdfasdfd

Adicionalmente, para saber que direferencias existen entre `#define` y `const` en Cpp, se puede revisar el artículo [const contra #define][taminacpp_constvsdef]

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
putchar();
EOF //End Of File
```
EOF es una etiqueta con valor de [1](https://stackoverflow.com/a/4705984/468132)

[1.4.1]:https://en.wikipedia.org/wiki/Magic_number_(programming)#Unnamed_numerical_constants
[1.4.2]:https://es.wikipedia.org/wiki/Antipatr%C3%B3n_de_dise%C3%B1o
[vitaminacpp_constvsdef]:https://vitaminacpp.wordpress.com/2013/01/06/const-contra-define/