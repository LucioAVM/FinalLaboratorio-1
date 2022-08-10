#ifndef AUXILIARES_H_
#define AUXILIARES_H_

#include <stdio.h>
#include <stdlib.h>
#include "pokemones.h"
#include "LinkedList.h"
#include "monsalbo.h"

int auxiliares_mostrarPokemones(LinkedList* listaMain);

int auxiliares_mostrarUnPokemon(ePokemones* pokemon);

int auxiliar_modificarAtaque(LinkedList* listaMain);

#endif /* AUXILIARES_H_ */
