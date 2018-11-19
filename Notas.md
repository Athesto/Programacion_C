# Notas
 > Notas del libro

## 1.4 Constantes simbólicas
Una mala práctica es dejar constantes sin documentacion, por ejemplo un `13` carece de sentido si no se tiene un contexto. Una mejor práctica sería

```c
#define PAISES_SURAMERICA 13
```
Estas constantes que se incluyen directamente en el código fuente se les conocen como [números mágicos][1.4.1] y son un [antipatrón de diseño][1.4.2]

[1.4.1]:https://en.wikipedia.org/wiki/Magic_number_(programming)#Unnamed_numerical_constants
[1.4.2]:https://es.wikipedia.org/wiki/Antipatr%C3%B3n_de_dise%C3%B1o