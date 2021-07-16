#include <iostream>
# include  < stdlib.h >

usando el  espacio de nombres  std ;
# include  " colaborador1.h "
# include  " colaborador2.h "
# include  " colaborador3.h "
# include  " colaborador4.h "
# include  " colaborador5.h "

int  main ()
{
    int opcion;
     float altura, peso, IMC;

    int c = 0 ;
    bool repetir = verdadero ;

    
    
    hacer {
        sistema ( " cls " );
 
           cout << "        " << endl;
     cout << "          ================================== MENU =========== ================================ " << endl
     cout << "          << 1. Ingresar y mostrar los datos personales >> " << endl;
     cout << "          << 2. Mostrar la edad de la persona >> " << endl;
     cout << "          >> 3. Mostrar el índice componente y felicilitarlo si se encuentra bien << " << endl;
     cout << "          << 4. Guardar los datos en un archivo .txt >> " << endl;
     cout << "          >> 5. Recuperar los datos desde el archivo .txt << " << endl;
     cout << "          >> 6. SALIR << " << endl;
     cout << "          ============================================ ===================================== " << endl;
        cout << " \ n Ingrese una opción del menú: " << endl;
        cin >> opcion;
        
        cambiar (opcion) {
            caso  1 :
               
                sistema ( " pausa> nulo " );
                romper ;
                
            caso  2 :
            
                sistema ( " pausa> nulo " );
                romper ;
                
            caso  3 :
                      
                
                sistema ( " pausa> nulo " );            
                romper ;
                
            caso  4 :
           	           
                
                sistema ( " pausa> nulo " );              
                romper ;
                
            caso  5 :
           	
                sistema ( " pausa> nulo " );              
                romper ;
            
            caso  6 :
            	  cout << endl << endl << endl << endl << endl;
   cout << " ============================================ == " << endl;
   cout << " >> << " << endl;
   cout << " << TRABAJO REALIZADO POR: >> " << endl;
   cout << " >> << " << endl;
   cout << " << * romario varnaza cañola>> " << endl;
   cout << " << * kerly george charcopa >> " << endl;
   cout << " << * fernanda valencia jaen>> " << endl;
   cout << " << * Kevin ismael valdez mendoza >> " << endl;
   cout << " >> << " << endl;
   cout << " << Programa finalizado ... >> " << endl;
   cout << " ============================================ == " << endl;

            	repetir = falso ;
            	romper ;
        }        
    } while (repetir);
	 
    return  0 ;
}

//Valencia Jaen Fernanda
void calcularEdad( int anioAct , int mesAct, int fechAct, int anioNac, int mesNac, int fechNac);
 
int main ()
{
    int anioAct;  //Año Actual
    int mesAct; //Mes actual
    int fechAct; //Fecha actual
 
    int anioNac; //Año nacimiento
    int mesNac; //Mes nacimiento
    int fechNac; //Fecha nacimiento
 
    cout << "\n\tPrograma que calcula la Edad, Mes y Dia\n\n";
    cout << "Ingrese Año Actual: ";   cin >> anioAct;
    cout << "Ingrese Mes Actual: ";   cin >> mesAct;
    cout << "Ingrese Fecha Actual: ";  cin >> fechAct;
 
    cout << "\nIngrese Año Nacimiento: ";  cin >> anioNac;
    cout << "Ingrese Mes de Nacimiento: ";  cin >> mesNac;
    cout << "Ingrese Fecha de Nacimiento: ";  cin >> fechNac;
 
    calcularEdad( anioAct , mesAct, fechAct, anioNac, mesNac, fechNac);
 
    return 0;
}

