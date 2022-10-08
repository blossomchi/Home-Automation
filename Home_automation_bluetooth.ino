
#define Lamp 6 // lamp
#define Fan 7 // fan

char bluetooth = 0;
//int lamp = 8;
//int fan = 9;
//int trigger = HIGH;
//int ssron, ssoff;
void setup() {
  // put your setup code here, to run once:
pinMode(Lamp, OUTPUT);
pinMode(Fan, OUTPUT);

Serial.begin(9600);
digitalWrite(Lamp, LOW); // switch relay 1 off
digitalWrite(Fan, LOW); // switch relay 2 off
Serial.print("HOME AUTOMATION PROJECT");
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available() > 0) //Check if there are available bytes to read
{
//put your code here
delay(10); //Delay to make it stable
bluetooth = Serial.read(); 
Serial.print(bluetooth);
Serial.print("\n");

if (bluetooth == 'A')
{digitalWrite(Lamp, LOW);}

else if (bluetooth == 'a')

{digitalWrite(Lamp, HIGH);}

if (bluetooth == 'B')
{digitalWrite(Fan, LOW);}

else if (bluetooth == 'b')

{digitalWrite(Fan, HIGH);}



}
}
