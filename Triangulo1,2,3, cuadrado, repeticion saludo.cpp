#include <iostream>
using namespace std;


void ejercicio1(){
	int numero=0;
	
	cout<<"** Repetir saludo de 5 en 5 ** "<<endl;
	cout << "Ingrese un numero por teclado (Ejmp: 100): "<<endl;
	cin>>numero;
	
	for(int j=5; j<=numero;j+=5){ //j++ es j=j+1 es j+=1
		cout << "N.- " <<j<< " Hola mundo" <<endl;
	}
}


void ejercicio2(){
	int numero=0;
	
	cout<<"** Repetir saludo orden invertido ** "<<endl;	
	cout<<"Ingrese un numero por teclado: "<<endl;
	cin>>numero;
	
	for(int j=numero; j>=0;j--){
		cout << "N.- "<<j<< " Hola Mundo "<<endl;
	}
}

void bucleForAnidado(){
	int numero=0;
	
    cout<<"** Cuadrado ** "<<endl;	
	cout<<"Ingrese un numero por teclado"<<endl;
	cin>>numero;
	
	for(int j=1; j<=numero;j+=1){ //j++ es j=j+1 es j+=1
	//bucle anidado
		for(int l=1; l<=numero;l+=1){ //j++ es j=j+1 es j+=1
		cout<< "*";
		}
	cout<<endl; // "\n"
	}
}

void ejerciciobucleForAnidado(){
	int numero=0;
	
	cout<<"** Triangulo 1 ** "<<endl;	
	cout<<"Ingrese un numero por teclado"<<endl;
	cin>>numero;
	
	for(int j=1; j<=numero;j+=1){ 

		for(int l=1; l<=j;l+=1){ 
		cout<< "*";
		}
	cout<<endl;
	}
}



void ejerciciobucleForAnidado1(){
	int numero=0;
	
	cout<<"** Triangulo 2 ** "<<endl;		
	cout<<"Ingrese un numero por teclado"<<endl;
	cin>>numero;
	
	for(int j=numero; j>=1;j-=1){ 

		for(int l=1; l<=j;l+=1){ 
		cout<< "*";
		}
	cout<<endl; 
	}
}


void ejerciciobucleForAnidado2(){
	int numero=0;
	
	cout<<"** Triangulo 3 ** "<<endl;		
	cout<<"Ingrese un numero impar por teclado"<<endl;
	cin>>numero;
	
	
	for(int i=1; i<=numero;i += 2){ 
		
		for(int j=0; j<(numero-i)/2;
		j++){
			cout << " ";
		}

		for(int j=0; j<i; j++ ){
		cout<< "*";
		}
	cout<<endl; 
	}
}



int main(){
	ejercicio1();	
	cout<<" "<<endl;
	
	ejercicio2();
	cout<<" "<<endl;

	bucleForAnidado();
	cout<<" "<<endl;	
	
	ejerciciobucleForAnidado();
	cout<<" "<<endl;	
	
    ejerciciobucleForAnidado1();
	cout<<" "<<endl;    
    
	ejerciciobucleForAnidado2();
	cout<<" "<<endl;	
	
	return 0;
	}

