//******************************************************************************/
//Este programa promedia velocidades siguiendo las sig condiciones
/*
•	El valor de velocidad calculado deberá ser el promedio de las últimas 5 mediciones, siempre y cuando haya al menos 5 mediciones disponibles.
•	Si hay menos de 5 mediciones disponibles, el valor de velocidad calculado deberá ser el promedio de los valores disponibles.
•	Si el dato de la última medición es mayor que el doble del promedio calculado o menor que la mitad del promedio calculado, deberá ser reemplazado por el valor promedio calculado.
•	El resultado deberá ser entregado en una variable de tipo int.

*/
/*******************************************************************************************************/
//Librerias
#include <stdio.h> 
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
/********************************************************************************************************/
//Funcion para obtener promedio
void prom(int n,int v[],int datUl){
    if (n>=5){//Se comprueba la primera condicion
       //Iniciar variables
       int sumatoria=0;
       int promedio=0;
       int prome=0;
       int sumato=0;
       int nActual=0;
       int z=0;
           for (int x =(n-5); x<n; x++) {//Este ciclo for forma parte de la 1era condicion
               int numeroActual = v[x];
               sumatoria = sumatoria + numeroActual;
               promedio=sumatoria/5;//Promedio sin contemplar la 3ra condicion
           }
              z=promedio*2;
              int di=promedio/2;
                  if (datUl>z || datUl<di){//datUl se refiere al ultimo dato del vector introducido
                      v[n-1]=promedio;//Se sustituye el ultimo digito
                           for (int j=(n-5); j<n; j++) {
                               int nActual = v[j];
                               sumato = sumato + nActual;
                               prome=sumato/5;  
                               
                            }
                           printf("Esta es el promedio solicitado: %i ",prome);  //Finalmente se muestra el promedio
                        } 
                    else{
        printf("Este es el promedio solicitado: %i ",promedio);
        }
                    } 
     //Este else if aplica cuando el vector tiene menos de 5 elementos
   else if(n<5){
       //Se inician las variables 
       int nActual=0;
       int sumato=0;
       int prome=0;
       int suma=0;
       int promed=0;
       int z=0;
       int di=0;
       for(int y=0;y<n;y++){//Este for obtiene el promedio sin contemplar la 3era condicion
         int numActual=v[y];
         suma+=numActual;
         promed=suma/n;
        }
            z=promed*2;
                di=promed/2;
                    if (datUl>z || datUl<di){//Se sustituye el valor del ultimo dato si se cumple alguna de las condiciones
                        v[n-1]=promed;
                         //int r=n;
                            for (int j=0; j<n; j++) {
                                nActual = v[j];
                                sumato = sumato + nActual;
                                prome=sumato/n;  
                            }
                           printf("Este es el promedio solicitado: %i ",prome); //Promedio 
                        } 
        else{
        printf("Este es el promedio solicitado: %i ",promed);
        }
    }
}
    
/**********************************************************************************************/
//Programa principal
int main(){
    int velocidades[]={ 1 ,1,88,5,8,9,8,5,7};//Array de velocidades
    int nv=sizeof velocidades/sizeof velocidades[0];
    int largo=sizeof(velocidades);
    int ultimo = (largo / sizeof(velocidades[nv]) ) - 1;
    int datUl=(velocidades[ultimo]);//Obtencion de ultimo digito
    prom(nv,velocidades,datUl);//Llamado de funcion
        }
