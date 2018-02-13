// Entradas Digitales
// Las entradas digitales solo pueden recibir 2 valores, 0 y 1 (HIGH Y LOW)
// Al igual que las salidas digitales solo pueden enviar 2 valores 0 y 1 
// 
int entrada1, entrada2, entrada3; // definición de variables para guardar los valores de las entradas

void void setup()
{
	pinMode(2, INPUT);  // definimos el pin 2 como entrada 
	pinMode(3, INPUT);	// definimos el pin 3 como entrada 
	pinMode(4, INPUT);	// definimos el pin 4 como entrada 
	pinMode(5, OUTPUT);	// definimos el pin 5 como salida 
	pinMode(6, OUTPUT);	// definimos el pin 6 como salida 
	pinMode(7, OUTPUT);	// definimos el pin 7 como salida 
}

void void loop()
{

entrada1 = digitalRead(2);  //Colocamos el valor de la entrada 2 en la variable entrada1
entrada2 = digitalRead(3);	//...
entrada3 = digitalRead(4);	//...




	
}