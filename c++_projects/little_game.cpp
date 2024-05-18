/*Elaborar un algoritmo en pseudocódigo para el juego Adivina el Personaje, el cual consiste en una secuencia de preguntas que la computadora le realiza al usuario para adivinar el personaje que está pensando. Las preguntas son precisas, no ambiguas, cerradas con respuesta de si/no ó con selección de alternativas enumeradas. Por ejemplo: 1) Tu personaje es hombre o mujer (H/M)?

2) Color de Cabello del personaje:

1. Negro

2. Marrón

3. Amarillo

4. Rojo

5. Ninguna de las anteriores (No lo se)

Para no hacer infinitas preguntas, cuestión que va en contra con la característica de finitud de un algoritmo, debes iniciar dando una lista de 6 personajes para que el usuario piense en uno de ellos y comience la ronda de preguntas en el orden de arriba abajo como están en el algoritmo, NO DE FORMA ALEATORIA. Por lo tanto, cada vez que se ejecute dependerá de las respuestas que el usuario suministre a la máquina.

El orden o estructura de las preguntas es personal por lo tanto, cada proyecto que ustedes entregan será diferente, unos mas extensos que otros. Tome como referencia el juego adivina quien pero con solo 6 personajes e escoger. Al final la computadora indica el nombre del personaje que el usuario pensó al inicio o indica un mensaje "No pude precisar tu personaje...."*/


/*Solo usaremos condicionales(ejecucion lineal)*/

/* 
FUNCIONAMIENTO MODO DIFICIL
"respuesta1" es para preguntar el genero, "respuesta2" es para preguntar la altura, "respuesta3" es para preguntar el peso, "respuesta4" es para preguntar la raza, "respuesta5" es para preguntar el color de cabello, "respuesta6" es para preguntar tipo de historia(manga,anime,peliculas,animacion,comic)
    
    PERSONAJES QUE USAREMOS:Goku,Link,Shreck,Saitama,Superman,Yujiro
    
    
    Usaremos un sistema numerico para definir las opciones para adivinar, y solo tendremos 6 combinaciones de opciones(6 combinaciones numericas), una para cada personaje
    
    OPCIONES DISPONIBLES PARA CABELLO, calvo, rojo, negro, amarillo,marron,azul

FUNJCIONAMIENTO MODO FACIL

Las respuestas solo son "si", "no" o "no lo se"
tenemos una lista de 6 personajes,  si el usuario da datos no registardos escribimos "No pude precisar tu personaje...."

PERSONAJES QUE USAREMOS:Finn,Steven,mordekai,Seiya,Tony Stark,Frezer

daremos preguntas, minimo una que nos diga el nombre de la serie a la que pertenece,cabello,genero,una caracteristica unica del personaje, personalidad,raza
OPCIONES DISPONIBLES PARA CABELLO, azul, marron, calvo,negro,amarillo


    */

#include<iostream>

using namespace std;

int main(){

    int respuesta1,respuesta2,respuesta3,respuesta4,respuesta5,respuesta6,respuestaSimple,blockSetter;

    cout << "Bienvenido a Adivina el personaje Iniciaremos facil, yo te dire 6 personajes y luego tu responderas con si o no mis preguntas para precisar cual es el que tienes en mente "<<endl;

    /* Lista de personajes */
    cout << "Los personajes que hay son:" << endl;
    cout << "Frezeer"  << endl;
    cout << "Tony Stark"  << endl;
    cout << "Seiya"  << endl;
    cout << "Finn"  << endl;
    cout << "Steven"  << endl;
    cout << "Mordekai"  << endl;

    /* Seleccion de la dificultad 
    cout << "Listo?, elije 1 para si, 2 para no" << endl;
    cin >> respuestaSimple;*/


                /* Contenedor de la primeras preguntas 
                if(respuestaSimple == 1){*/

                                                                                /* BLOQUE DE SEIYA */
                    /* Pregunta 1 sobre Seiya */
                    cout << "Tu personaje pertenece a la franquicia de los caballeron del zodiaco ?, elije 1 para decir si, 2 para decir no" << endl;
                    cin >> respuestaSimple;

                    /* Asignamos un valor para identificar la respuesta correspondiente a Seiya */
                     if(respuestaSimple == 1){

                         /* Reseteamos nuestra respuesta */
                        respuestaSimple = 0;    
                        respuesta1 = 9;} 

                    else if(respuestaSimple > 1) {

                        /* Reseteamos nuestra respuesta */
                        respuestaSimple = 0;   
                                                                            /* BLOQUE DE FREEZER */
                        /* Pregunta 1 sobre Freezer */
                        cout << "Tu personaje pertenece a la franquicia de Dragon Ball ? elije 1 para decir si, 2 para decir no" << endl;
                            cin >> respuestaSimple;}


                        /* Asignamos un valor para identificar la respuesta correspondiente a Freezer */
                    else if(respuestaSimple == 1){
                        
                        respuestaSimple = 0;
                        respuesta1 = 7;} 
                    
                    else if(respuestaSimple > 1){

                        respuestaSimple = 0;

                                                                            /* BLOQUE DE FINN */
                        /* Pregunta 1 sobre Finn */
                        cout << "Tu personaje pertenece a la franquicia de Hora de Aventura? elije 1 para decir si, 2 para decir no" << endl;
                        cin >> respuestaSimple;}

                        /* Asignamos un valor para identificar la respuesta correspondiente a Finn */
                        else if(respuestaSimple == 1){
                            
                            respuesta1 = 3;}
                            respuestaSimple = 0;}

                         else if(respuestaSimple > 1){

                            /* Reseteamos nuestra respuesta */
                            respuestaSimple = 0;

                                                                            /* BLOQUE DE TONY STARK *

                            /* Pregunta 1 sobre Tony Stark */
                            cout <<"Tu personaje pertenece a Marvel?, elije 1 para decir si, 2 para decir no" << endl;
                            cin >> respuestaSimple;}

                            /* Asignamos un valor para identificar la respuesta correspondiente a Tony Stark */
                            if(respuestaSimple == 1){ respuesta1 = 5;} 
                            
                             else if(respuestaSimple > 1){

                                /* Reseteamos nuestra respuesta */
                                respuestaSimple = 0;

                                                                            /* BLOQUE DE MORDEKAI */

                                /* Pregunta 1 sobre Mordekai */
                                cout << "Tu personaje pertenece a la franquicia de un show mas ,elije 1 para decir si, 2 para decir no ?" << endl;
                                cin >> respuestaSimple;

                                /* Asignamos un valor para identificar la respuesta correspondiente a Mordekai */
                                if(respuestaSimple == 1){ respuesta1 = 2;} else{

                                    /* Reseteamos nuestra respuesta */
                                    respuestaSimple = 0;

                                                                            /* BLOQUE DE STEVEN*/
                                    /* Pregunta 1 sobre Steven */
                                    cout << "Tu personaje pertence a la franquicia de steven universe?, elije 1 para decir si, 2 para decir no" << endl;
                                    cin >> respuestaSimple;

                                    /* Asignamos un valor para identificar la respuesta correspondiente a Steven */
                                if(respuestaSimple == 1){ respuesta1 = 8;} 
                                } 
                            }
                        }
                    /*}*/


                                    /* BLOQUE DE SEIYA */
                            /* Condicion para la pregunta 2 sobre Seiya */
                            if(respuesta1 == 9){
                                
                                cout << "Tu personaje tiene el cabello de color marron ?, elije 1 para si 2 para no" << endl;
                                cin >> respuestaSimple;

                            /* Condicion para asignar la respuesta 2 sobre Seiya */
                            } else if(respuestaSimple == 1){
                                
                                respuestaSimple = 0;
                                respuesta2 = 6;} else {


                                            /* BLOQUE DE FINN */
                            /* Condicion para la pregunta 2 sobre Finn */
                            if(respuesta1 == 3){

                                cout << "Tu personaje es rubio? , elije 1 para si 2 para no" << endl;
                                cin >> respuestaSimple;

                            /* Condicion para asignar la respuesta 2 sobre Finn */
                            } else if (respuestaSimple == 1){
                                
                                respuestaSimple = 0;
                                respuesta2 = 7;} else {


                                            /* BLOQUE DE MORDEKAI */
                            /* Condicion para la pregunta 2 sobre Mordekai */
                            if(respuesta1 == 2){

                            cout << "Tu personaje tiene plumas azules? , elije 1 para si 2 para no" << endl;
                                cin >> respuestaSimple;

                            /* Condicion para asignar la respuesta 2 sobre Mordekai */
                            } else if (respuestaSimple == 1){
                                
                                respuestaSimple = 0;
                                respuesta2 = 8;} else {


                                            /* BLOQUE DE  FREEZER*/
                            /* Condicion para la pregunta 2 sobre Freezer */
                            if(respuesta1 == 7){

                                cout << "Tu personaje es calvo? , elije 1 para si, 2 para no";
                                cin >> respuestaSimple;

                            /* Condicion para asignar la respuesta 2 sobre Freezer */
                            } else if (respuestaSimple == 1){
                                
                                respuestaSimple = 0;
                                respuesta2 = 4;} else {


                                            /* BLOQUE DE STEVEN */
                            /* Condicion para la pregunta 2 sobre Steven */
                            if(respuesta1 == 2){

                                cout << " Tu personaje Tiene cabello negro?, elije 1 para si, 2 para no" << endl;
                                cin >> respuestaSimple;

                            /* Condicion para asignar la respuesta 2 sobre Steven */
                            } else if (respuestaSimple == 1){

                                respuestaSimple = 0;
                                respuesta2 = 6;

                            } else {


                                        /* BLOQUE DE TONY STARK */
                                /* Condicion para la pregunta 2 sobre Tony Stark */
                                if(respuesta1 == 5){

                                cout << "Tu personaje tiene el cabello negro ?, elije 1 para si, 2 para no" << endl;
                                cin >> respuestaSimple;

                                /* Condicion para asignar la respuesta 2 sobre Tony Stark */
                                } else if (respuestaSimple == 1){

                                    respuestaSimple = 0;
                                respuesta2 = 1;

                                            } 
                                        }
                                    }    
                                }
                            }
                        }


                                    /* BLOQUE DE TONY STARK */
                                /* Condicion para la pregunta 3 sobre Tony Stark */
                                if(respuesta2 == 1){

                                cout << "Tu personaje es hombre ?, elije 1 para decir si, 2 para decir no" << endl; 
                                    cin >> respuestaSimple;

                                } else if(respuestaSimple == 1){ 

                                    respuestaSimple = 0;
                                    respuesta3 = 7;

                                    } else {


                                    /* BLOQUE DE FINN */
                                /* Condicion para la pregunta 3 sobre Finn */
                                if(respuesta2 = 7){

                                    cout << "Tu personaje es hombre? elije 1 para decir si, 2 para decir no" << endl;
                                    cin >> respuestaSimple;

                                } else if(respuestaSimple == 1){ 

                                    respuestaSimple = 0;
                                    respuesta3 = 2;

                                    } else {


                                    /* BLOQUE DE STEVEN */
                                /* Condicion para la pregunta 3 sobre Steven */
                                if(respuesta2 == 6){

                                    cout << "Tu personaje es hombre?, elije 1 para decir si, 2 para decir no" << endl;
                                    cin >> respuestaSimple;

                                } else if(respuestaSimple == 1){ 
                                    
                                    respuestaSimple = 0;
                                    respuesta3 = 5; 
                                    
                                    } else {


                                    /* BLOQUE DE FREEZER */
                                /* Condicion para la pregunta 3 sobre Freezer */
                                if(respuesta2 == 4){

                                    cout << "Tu personaje no tiene genero definido?, elije 1 para decir si, 2 para decir no" << endl;
                                    cin >> respuestaSimple;

                                } else if(respuestaSimple == 1){ 

                                    respuestaSimple = 0;
                                    respuesta3 = 9;

                                    } else {


                                    /* BLOQUE DE SEIYA */
                                /* Condicion para la pregunta 3 sobre Seiya */
                                if(respuesta2 == 6){

                                    cout << "Tu personaje es hombre?, elije 1 para decir si, 2 para decir no" << endl;
                                    cin >> respuestaSimple;

                                } else if(respuestaSimple == 1){ 
                                    
                                    respuestaSimple = 0;
                                    respuesta3 = 5; 
                                    
                                    } else { 


                                    /* BLOQUE DE MORDEKAI */
                                /* Condicion para la pregunta 3 sobre Mordekai */
                                if(respuesta2 == 8 ){

                                    cout << "Tu personaje es un ave?, elije 1 para decir si, 2 para decir no" << endl;
                                    cin >> respuestaSimple;

                                } else if(respuestaSimple == 1){
                                    
                                    respuestaSimple = 0;
                                     respuesta3 = 7; 
                                     
                                            }
                                        }
                                    }
                                } 
                            }
                        }


                                            /* BLOQUE DE MORDEKAI */
                                        /* condicion para la pregunta 4 de Mordekai */
                                        if(respuesta3 == 7){

                                            cout << "Tu personaje siempre acaba en problemas totalmente desproporcionados a su problema original? , elije 1 para decir si, 2 para decir no" << endl;
                                            cin >> respuestaSimple ;
                                        } else if(respuestaSimple == 1){

                                            respuestaSimple = 0;
                                            respuesta4 = 1;

                                        } else {


                                            /* BLOQUE DE FREEZER */
                                        /* Condicion para la pregunta 4 de freezer */
                                        if(respuesta3 ==9){

                                            cout << "Tu personaje es un villano despiadado y le conocen como el emperador del universo?, elije 1 para decir si, 2 para decir no" << endl;
                                            cin >> respuestaSimple;

                                        } else if(respuestaSimple == 1){

                                            respuestaSimple = 0;
                                            respuesta4 = 5;

                                        } else {

                                            /* BLOQUE DE SEIYA */
                                        /* Condicion para la pregunta 4 sobre seiya*/
                                        if(respuesta3 == 5){

                                            cout << "Tu personaje se le conoce por estar estrechamente relacionado con el pegaso? , elije 1 para decir si, 2 para decir no" << endl;
                                            cin >> respuestaSimple;

                                        } else if(respuestaSimple == 1){

                                            respuestaSimple = 0;
                                            respuesta4 = 8;

                                        } else {

                                            /* BLOQUE DE FINN */
                                        /* Condicion para la pregunta 4 sobre Finn */
                                        if(respuesta3 == 2){

                                            cout << "Tu personaje tiene de compañero un perro amarillo ? , elije 1 para decir si, 2 para decir no" << endl;
                                            cin >> respuestaSimple;

                                        } else if(respuestaSimple == 1){

                                            respuestaSimple = 0;
                                            respuesta4 = 6;

                                        } else {

                                            /* BLOQUE DE STEVEN */
                                        /* Condicion para la preunta 4 sobre Steven */
                                        if(respuesta3 == 5){

                                            cout << "Tu personaje se caracteriza por usar un escudo? , elije 1 para decir si, 2 para decir no" << endl;
                                            cin >> respuestaSimple;

                                        } else if(respuestaSimple == 1){

                                            respuestaSimple = 0;
                                            respuesta4= 4;

                                        } else{

                                            /* BLOQUE DE TONY STARK */
                                        /* Condicion para la pregunta 4 sobre Tony Stark */
                                        if(respuesta3 == 7){

                                            cout << "Tu personaje es multimillonario? , elije 1 para decir si, 2 para decir no" << endl;
                                            cin >> respuestaSimple ;

                                        } else if(respuestaSimple == 1){

                                            respuestaSimple = 0;
                                            respuesta4 = 3;

                                        }
                                    }
                                }
                            }
                        }
                    }


                                        /* BLOQUE DE  STARK */
                                    /* Condicional para la pregunta 5 sobre Tony Stark */
                                    if(respuesta4 == 3){

                                        cout << "Tu personaje es humano , elije 1 para decir si, 2 para decir no" << endl;
                                        cin >> respuestaSimple;

                                    } else if(respuestaSimple == 1){

                                        respuestaSimple = 0;
                                        respuesta5 = 8;

                                    } else {

                                        /* BLOQUE STEVEN */
                                    /* Condicional para la pregunta 5 sobre Steven */
                                    if(respuesta4 == 4){

                                        cout << "Tu personaje es mitad gema, mitad humano? , elije 1 para decir si, 2 para decir no" << endl;
                                        cin >> respuestaSimple;

                                    } else if(respuestaSimple == 1 ){

                                        respuestaSimple = 0;
                                        respuesta5 = 6;

                                    } else {

                                        /* BLOQUE DE FINN */
                                    /* Condicional para la pregunta 5 sobre Finn */
                                if(respuesta4 == 6){

                                    cout << "Tu personaje es humano? , elije 1 para decir si, 2 para decir no" << endl;
                                    cin >> respuestaSimple;

                                } else if(respuestaSimple == 1){

                                    respuestaSimple = 0;
                                    respuesta5 = 8;

                                } else {

                                    /* BLOQUE DE SEIYA */
                                /* Condicional para la pregunta 5 spbre Seiya */
                                if(respuesta4 == 8){

                                    cout << "Tu personaje es un humano ? , elije 1 para decir si, 2 para decir no" << endl ;
                                    cin >> respuestaSimple;

                                } else if (respuestaSimple == 1){

                                    respuestaSimple = 0;
                                    respuesta5 = 5;

                                } else {

                                    /* BLOQUE DE FREEZER */
                                if(respuesta4 == 5 ){

                                    cout << "Tu personaje es un alienigena? , elije 1 para decir si, 2 para decir no" << endl;
                                    cin >> respuestaSimple;

                                } else if(respuestaSimple == 1){

                                    respuestaSimple = 0;
                                    respuesta5 = 7;

                                } else {

                                    /* BLOQUE MORDEKAI */
                                /* Condicional 5 para la pregunta 5 sobre Mordekai */
                                if(respuesta4 == 1){

                                    cout << "Tu personaje es un azulejo , elije 1 para decir si, 2 para decir no" << endl;
                                    cin >> respuestaSimple;

                                } else if(respuestaSimple == 1){

                                    respuestaSimple = 0;
                                    respuesta5 = 4;

                                } 
                            }
                        }
                    }
                }
            }

                                            /* BLOQUE DE MORDEKAI */
                                        /* Condicional 6 para la pregunta 6 sobre Mordekai */
                                        if(respuesta5 == 4){

                                            cout << "Tu personaje es alguien que intenta ser sensato y que suele deprimirse mucho por sus relaciones amorosas? , elije 1 para decir si, 2 para decir no" << endl;
                                            cin >> respuestaSimple;

                                        } else if(respuestaSimple == 1){

                                            respuestaSimple = 0;
                                            respuesta6 = 5;

                                        } else {

                                            /* BLOQUE DE FREEZER*/
                                        /* Condicional 6 para la pregunta 6 sobre Freezer */
                                        if(respuesta5 == 7){

                                            cout << "Tu personaje es alguien que es frio, calculador y despiadado? , elije 1 para decir si, 2 para decir no" << endl;
                                            cin >> respuestaSimple;

                                        } else if(respuestaSimple == 1){

                                            respuestaSimple = 0;
                                            respuesta6 = 1;

                                        } else {

                                            /* BLOQUE DE SEIYA */
                                        /* Condicional 6 para la pregunta 6 sobre Seiya */
                                        if(respuesta5 == 5){

                                            cout << "Tu personaje es leal y resiliente? , elije 1 para decir si, 2 para decir no" << endl;
                                            cin >> respuestaSimple;

                                        } else if(respuestaSimple == 1){

                                            respuestaSimple = 0;
                                            respuesta6 = 3;

                                        } else {

                                            /* BLOQUE DE FINN */
                                        /* Condicional 6 para la pregunta 6 sobre Finn */
                                        if(respuesta5 == 8){

                                            cout << "Tu personaje se caracteriza por se alguien heroico y valiente? , elije 1 para decir si, 2 para decir no" << endl;
                                            cin >> respuestaSimple;

                                        } else if(respuestaSimple == 1){

                                            respuestaSimple = 0;
                                            respuesta6 = 9;

                                        } else {

                                            /* BLOQUE  DE STEVEN */
                                        /* Condicional 6 para la pregunta 6 sobre Steven */
                                        if(respuesta5 == 6){

                                            cout << "Tu personaje se caracteriza por ser alguien sensible y amable incluso con sus enemigos? , elije 1 para decir si, 2 para decir no" << endl;
                                            cin >> respuestaSimple;

                                        } else if(respuestaSimple == 1){

                                            respuestaSimple = 0;
                                            respuesta6 = 4;

                                        } else {

                                            /* BLOQUE DE TONY STARK */
                                        /* Condicional 6 para la pregunta sobre Steven */
                                        if(respuesta5 == 8){

                                            cout << "Tu personaje se caracteriza por ser alguien , elije 1 para decir si, 2 para decir no" << endl;
                                            cin >> respuestaSimple;

                                        } else if(respuestaSimple == 1){

                                            respuestaSimple = 0;
                                            respuesta6 = 7;

                                        }
                                    }
                                }
                            }
                        }
                    }

    /* RESPUESTAS FINALES */

    /* Seiya  codigo de seiya 965853*/ 
    if(respuesta1 == 9 && respuesta2 == 6 && respuesta3 == 5 && respuesta4 == 8 && respuesta5 == 5 && respuesta6 == 3){

        cout << "Tu personaje es Seiya"<< endl;}

    /* Freezer  codigo de Freezer 749571*/
    if(respuesta1 == 7 && respuesta2 == 4 && respuesta3 == 9 && respuesta4 == 5 && respuesta5 == 7 && respuesta6 == 1){

        cout << "Tu personaje es Seiya" << endl;}

    /* codigo Steven 865464 */
    if(respuesta1 == 8 && respuesta2 == 6 && respuesta3 == 5 && respuesta4 == 4 && respuesta5 == 6 && respuesta6 == 4){

        cout << "Tu personaje es Steven" << endl;}

    /* codigo Finn 372689 */
    if(respuesta1 == 3 && respuesta2 == 2 && respuesta3 == 2 && respuesta4 == 8 && respuesta5 == 8 && respuesta6 == 9){

    cout << "Tu personaje es Finn" << endl;}

// codigo Tony Stark 517387
    if(respuesta1 == 5 && respuesta2 == 1 && respuesta3 == 7 && respuesta4 == 3 && respuesta5 == 8 && respuesta6 == 7){

    cout << "Tu personaje es Tony Stark" << endl;}

/* codigo Mordekai 287145 */    
    if(respuesta1 == 2 && respuesta2 == 8 && respuesta3 == 7 && respuesta4 == 1 && respuesta5 == 4 && respuesta6 == 5){


    cout << "Tu personaje es Mordekai" << endl;}



//     } else {



//         /* Pregunta para acceder al modo dificil */
//         cout << "Entonces, quieres ir directamente al modo dificil?, elije 1 para decir si, 2 para decir no " << endl;