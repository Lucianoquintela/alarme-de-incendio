// Sensor de incêndio

int sensor = A5; 
int led = 0;
int piezzo = 1;

void setup()
{
  pinMode(sensor, INPUT);
  pinMode(led, OUTPUT);
  pinMode(piezzo, OUTPUT);

}

void loop()
{
  if (analogRead(sensor) > 600) {
    digitalWrite(led, HIGH);
    digitalWrite(piezzo, HIGH); 
    tone(piezzo,1000 );
    delay(150);    
    digitalWrite(led, LOW);
    digitalWrite(piezzo, LOW);
    noTone(piezzo);
    delay(150); 
  } else {   
    digitalWrite(led, LOW);
    digitalWrite(piezzo, LOW);

  }
} 