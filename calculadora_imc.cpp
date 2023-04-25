//Nombre del Desarrollador: Delgado Yela Bryan Paul
//Developer´s Name: Delgado Yela Bryan Paul
//Pais/Country: Ecuador
//Ciudad/City: Quito

/*Escriba, compile y ejecute un programa en C++ que calcule y valore el �ndice de
masa corporal calculado como imc = m / T �, donde imc es el �ndice de masa
corporal, m es la masa en Kg y T es la talla en m. La valoraci�n de acuerdo con
la OMS (Organizaci�n mundial de la salud) �5 (who s.f) se resume en la tabla:*/

/*Insuficiencia poderal: <18.5
Intevalo Normal> 18.5 - 24.9
Preobesidad: 25 - 29.9
Obesidad Clase I: 30.0 - 34.9
Obesidad Clase II: 35.0 - 39.9
Obseidad Clase III: >40.0*/

#include <iostream>
#include <windows.h> 
#include <string>
#include <math.h>

using namespace std;

//Definimos funcion Gotoxy|Define Gotoxy function
void gotoxy(int x, int y){
	HANDLE hcon;  
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
	COORD dwPos;  
	dwPos.X = x;  
	dwPos.Y= y;  
	SetConsoleCursorPosition(hcon,dwPos);  
}


//Definimos variables generales|Define general variables
int linea_hori, linea_vert, opt, edad;
double talla, masa;
string name;
float imc = masa/pow(talla, 2);
int s = 184;
char car = char(s);


//Protitpado de Funciones|Function Prototyping
void startup();
void actions();
	
//Funcion Principal |Main Function
int main(){
	gotoxy(2, 2); cout<<car<<" Delgado Bryan, 2023";
	startup();
	
}

/*---------------------------------------------------------------------------------------------------------------------------------------------*/
//Definimos funciones principales|Define principal functions
void startup(){
	gotoxy(3, 3); cout<<"--------------------------------------- Calculadora de IMS | IMS Calculator ---------------------------------------";
	
	for(linea_vert=1; linea_vert<=118; linea_vert++){
		gotoxy(linea_vert,1); cout<<"*";
		gotoxy(linea_vert,5); cout<<"*";
	}
	
	gotoxy(2, 7); cout<<"---> Para continuar,seleccione las siguientes acciones: ";
	
	//Recuadro de acciones | Action's Section
	for(linea_vert=1; linea_vert<=118; linea_vert++){
		gotoxy(linea_vert,9); cout<<"=";
		gotoxy(linea_vert,25); cout<<"=";
	}
	for(linea_hori=9; linea_hori<=25; linea_hori++){
		gotoxy(1, linea_hori); cout<<"|";
		gotoxy(118, linea_hori); cout<<"|";
	}
	
	//Seleccion de acciones
	gotoxy(10, 12); cout<<"1. Calcule su IMC";
	gotoxy(10, 14); cout<<"2. Calcule su peso a partir de su IMC";
	gotoxy(10, 16); cout<<"3. Calcule su talla apartir de su IMC";
	gotoxy(10, 18); cout<<"4. Salir";
	
	actions();
	
}

void actions(){
	
	gotoxy(10, 21); cout<<"------> Opcion Seleccionada: "; cin>>opt;
	
	switch(opt){
		case 1:{
			system("cls");
			
			gotoxy(3, 2); cout<<"--------------------------------------- CALCULO DE IMC | BMI CALCULATION ----------------------------------------";
			
			gotoxy(1, 4); cout<<"Para continuar, calcular su IMC se necesitan los siguientes datos: ";
			gotoxy(3, 6); cout<<"* Masa Corporal (Peso/Weigth en Kilogramos)";
			gotoxy(3, 7); cout<<"* Talla (Altura/Heigth en metros)";
			
				//Recuadro de acciones | Action's Section
				for(linea_vert=1; linea_vert<=118; linea_vert++){
					gotoxy(linea_vert,9); cout<<"=";
					gotoxy(linea_vert,25); cout<<"=";
				}
					
				for(linea_hori=9; linea_hori<=25; linea_hori++){
					gotoxy(1, linea_hori); cout<<"|";
					gotoxy(118, linea_hori); cout<<"|";
				}
			
			//Seccion de operaciones|Operation's Section
			gotoxy(5, 11); cout<<"Ingrese su nombre: "; cin>> name;
			gotoxy(5, 12); cout<<"Ingrese su edad: "; cin>>edad;
			gotoxy(8, 14); cout<<"Ingrese su peso en Kg: "; cin>>masa;
			gotoxy(8, 16); cout<<"Ingrese su talla en m: "; cin>>talla;
			
			//Dentro de este apartado vamos a representar la formula como una variable
			float imc = masa/pow(talla, 2);
			
			gotoxy(8,19); cout<<"--------------> SU INDICE DE IMC ES: "<<imc;
			cout<<endl;
			
				//Condicionales para analisis de IMC
				if(imc <= 18.5){
					gotoxy(8, 21); cout<<"Analisis Obtenido: Usted posee Inuficiencia Poderal";
				}
				if(18.5 > imc && imc <= 24.9){
					gotoxy(8, 21); cout<<"Analisis Obtenido: Usted posee IMC Normal";
				}
				if(25 >= imc && imc <= 29.9){
					gotoxy(8, 21); cout<<"Analisis Obtenido: Usted posee Preobesidad";
				}
				if(30 >= imc && imc <= 34.9){
					gotoxy(8, 21); cout<<"Analisis Obtenido: Usted posee Obesidad Clase I";
				}
				if(35 >= imc && imc <= 39.9){
					gotoxy(8, 21); cout<<"Analisis Obtenido: Usted posee Obesidad Clase II";
				}
				if(imc >= 40){
					gotoxy(8, 21); cout<<"Analisis Obtenido: Usted posee Obesidad Clase III";
				}
	
			break;
		}
			
		default:
			gotoxy(15, 23); cout<<"ERROR! Esta opcion es invalida, intente nuevamente";
			break;
	}
}
	
