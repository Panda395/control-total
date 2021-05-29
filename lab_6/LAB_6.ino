//LABORATORIO 6
int ledpin = 13; //led
int estado = 0; // lectura de datos


void setup()
{
  pinMode(ledpin, OUTPUT); //pin como salida
  digitalWrite(ledpin, LOW); //Normalmente apagado
  Serial.begin(9600);
}

void loop() 
{
if(Serial.available() > 0)//comprobar si el puerto serial esta disponible
{estado = Serial.read();};// Se asigana el valor del serial leido a estado

if (estado == 'E')//el caracter para activar es la letra E
{digitalWrite(ledpin, HIGH);//enciende led
estado = 0; // se resetea el estado a cero
}

if (estado == 'A')//el caracter para activar es la letra A
{digitalWrite(ledpin, LOW);//apaga el led
estado = 0; // se resetea el estado a cero
}
}
