/*****************************************************************
**                                                              **
**                        Títol:                                **
**           Encesa de 3 leds amb i sense for                   **
**                                                              **
** NOM:Martin Herranz Cruz                     Data:05/03/2018  **
*****************************************************************/
//****************************INCLUDE*****************************


//***************************VARIABLES****************************
const int led=9;
signed long retard=500;
//*****************************SETUP******************************

void setup() {                 //Configura el final de salida
  
pinMode(led,OUTPUT);
digitalWrite(led,HIGH);
delay(retard);
digitalWrite(led,LOW);
delay(retard);
digitalWrite(led,HIGH);
delay(retard);
digitalWrite(led,LOW);
delay(retard);
digitalWrite(led,HIGH);
delay(retard);
digitalWrite(led,LOW);
delay(retard);
}

//******************************LOOP******************************

void loop() {                 //Inicia el bucle del programa


}

//****************************FUNCIONS****************************
