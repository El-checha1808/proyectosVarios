// Esto es una prueba
// Seguimos haciendo pruebas desde vsc online

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void crearArchivo();
void palabra();

int main(){
	
	crearArchivo();
	palabra();
	
	return 0;
}

void palabra(){
	
	ifstream file;
	ofstream file2;
	string texto;
	string respuesta;
	
	file.open("entrada.txt", ios::in);
	
	if (file.fail()){
		
		cout << "El archivo no se pudo abrir" << endl;
		
		exit(1);
	}
	
	while (!file.eof()){
		
		getline(file, texto);
		
		if (texto == string(texto.rbegin(), texto.rend())){
			
			file2.open("salida.txt", ios::out);
			
			respuesta = "El texto es palindromo";
			cout << respuesta << endl;
			
			file2 << respuesta << endl;
			
		} else {
			
			cout << "El texto " << texto << " no es palindroma " << endl;
		}
		
		break;
	}
	
	file.close();
	file2.close();
	
}

void crearArchivo(){
	
	ofstream file;
	file.open("entrada.txt", ios::out);
	string texto;
	
	cout << "Ingrese texto: " << endl;
	cin >> texto;
	
	file << texto << endl;
	file.close();
}
