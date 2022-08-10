#ifndef CONTROLLER_H_
#define CONTROLLER_H_

#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "monsalbo.h"
#include "parser.h"
#include "Auxiliares.h"

int controller_Menu(void);

int controller_Cargar(LinkedList* listaMain, char* path);

int controller_ModificarValorDeAtaque(LinkedList* listaMain);

int controller_listar(LinkedList* listaMain);

int controller_filtrarPorFuego(LinkedList* listaMain);

int controller_filtrarExtragrandesVenenosos(LinkedList* listaMain);

#endif /* CONTROLLER_H_ */
