const int ain=A0; // Capacitive Touch Pin
int inputVal=0; 
void setup()
{
  Serial.begin(115200);
}
void loop()
{
inputVal=analogRead(ain); // Read Analog value (Ranges from 0 to 1023)
Serial.print("Analog value: ");
Serial.println(inputVal);
}
