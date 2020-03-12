#include <stdio.h>
#include <stdlib.h>

struct NodoColaDoble{
    char dato;
    struct NodoColaDoble *ptrSiguiente;
    struct NodoColaDoble *ptrAnterior;
};

int main(){
    struct NodoColaDoble *ptrCabeza;
    struct NodoColaDoble *ptrTalon;
    
    return 0;
}

void encolar(struct NodoColaDoble **ptrC, struct NodoColaDoble **ptrT){
    struct NodoColaDoble *ptrNuevo;
    char nuevaLetra;
    int opcion;
    opcion = 0;
    ptrNuevo = NULL;
    printf("Ingresa la letra que quieres agregar\n");
    scanf(" %c", &nuevaLetra);
    printf("Por que apuntador deseas ingresar?\n1.- Talon\n2.- Cabeza\n");
    scanf("%d", &opcion);
    
    ptrNuevo = (struct NodoColaDoble *)malloc(sizeof(struct NodoColaDoble *));
    
    if (ptrNuevo != NULL){
        ptrNuevo->dato = nuevaLetra;
        ptrNuevo->ptrSiguiente = NULL;
        ptrNuevo->ptrAnterior = NULL;
        
        if(*ptrC == NULL){
            *ptrC = ptrNuevo;
            *ptrT = ptrNuevo;
        }else{
            if (opcion == 1){
                //ingresa por talon
                (*ptrT)->ptrSiguiente = ptrNuevo;
                ptrNuevo -> ptrAnterior = (*ptrT);
                (*ptrT)= ptrNuevo
            }else if opcion == 2{
                //ingresa por cabeza
                (*ptrC)->ptrAnterior = ptrNuevo;
                ptrNuevo->ptrSiguiente = (*ptrC);
                *ptrC = ptrNuevo
            }
        }
    }
}
