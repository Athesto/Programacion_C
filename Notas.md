# Notas
 > Notas del libro

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
putchar();
EOF
```

[1.4.1]:https://en.wikipedia.org/wiki/Magic_number_(programming)#Unnamed_numerical_constants
[1.4.2]:https://es.wikipedia.org/wiki/Antipatr%C3%B3n_de_dise%C3%B1o
[vitaminacpp_constvsdef]:https://vitaminacpp.wordpress.com/2013/01/06/const-contra-define/