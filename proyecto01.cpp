# include <iostream>
# include <cmath>
//#include <windows.h>
//#include <mmsystem.h>
using namespace std;

string hexadecimal(char c){
	switch (c){
		case '0':
			return "0000";
		case '1':
			return "0001";
		case '2':
			return "0010";
		case '3':
			return "0011";
		case '4':
			return "0100";
		case '5':
			return "0101";
		case '6':
			return "0110";
		case '7':
			return "0111";
		case '8':
			return "1000";
		case '9':
			return "1001";
		case 'A':
			return "1010";
		case 'B':
			return "1011";
		case 'C':
			return "1100";
		case 'D':
			return "1101";
		case 'E':
			return "1110";
		case 'F':
			return "1111";
		default:
			return "";
	}
}

int main(){
	string mensaje;
	string respuesta = "N";
	string receptores= "";

	while(respuesta != "Y"){
		cout << "Ingrese el mensaje, asegurese de tener BLOQMAYUS activado" << endl;
	    cin >> mensaje;
	    cout << "El mensaje que usted envió es: " << mensaje << endl;
	    cout << "¿Está seguro que quiere enviar este mensaje? Y/N" << endl;
	    cin >> respuesta;
	}

	while(receptores.size() != mensaje.size()){
		cout << "Ahora ingrese los receptores para cada elemento del mensaje respectivamente" << endl;
		cin >> receptores;
		if(receptores.size() != mensaje.size()){
			cout << "Asegurese de que el numero de receptores sea igual al numero de elementos en el mensaje, en este caso es " << mensaje.size() << endl;
		}
	}

	//PlaySound(TEXT("magnum.wav"), NULL, SND_ASYNC);

	for (int i = 0; i < mensaje.size(); ++i)
	{
		string hex = hexadecimal(mensaje[i]);

		//----- Pare detectar receptor----------------------
		if(receptores[i] == '1'){
			//Reproduce sonido de receptor 1
		}else if (receptores[i] == '2'){
			//Reproduce sonido de receptor 2
		}else if (receptores[i] == '3'){
			//Reproduce sonido de receptor 3
		}
		cout << "Para receptor: " << receptores[i] << "-->" << mensaje[i] << endl;

		//-------Para enviar fragmento de mensaje-------------------
		string respuesta2 = "Y";
		while (respuesta2 == "Y"){
			for (int j = 0; j < hex.size(); ++j)
			{
				if (hex[j] == '0')
				{
					//Reproduce sonido de 0
					cout << ":0:";
				}else{
					//Reproduce sonido de 1
					cout << ":1:";
				}
				
			}
			cout << "¿Desea repetir el fragmento? Y/N" << endl;
			cin >> respuesta2;
			cout << endl;
		}
		
	}

	//Reproducir sonido de final
}
