const int ain=A0; // Capacitive Touch Pin
const int LED=D4; // to indicate touch
int inputVal=0; 
void setup()
{
  pinMode(LED,OUTPUT); 
  Serial.begin(115200);
}
void loop()
{
inputVal=analogRead(ain); // Read Analog value (Ranges from 0 to 1023)

if(inputVal>50 && inputVal<100)  //Turn ON LED when readings are in this range (Change the range for better accuracy)
digitalWrite(LED,HIGH);
else analogWrite(LED,LOW);

Serial.println(inputVal);
}
