// C++ code
//

unsigned long timer;

int pir = 2;
int led = 3;

void setup()
{
  pinMode(pir, INPUT);
  pinMode(led, OUTPUT);
  
  Serial.begin(9600);
  // Go to Arduino's documentation to learn how to use attachInterrupt
  attachInterrupt(digitalPinToInterrupt(2), ISRFunction, RISING);
}

void ISRFunction()
{
  // Once the pir sensor is triggered, ISRFunction will come into play
  
  digitalWrite(led, HIGH);
  timer = millis();
  Serial.println(timer);
  digitalWrite(led, LOW);
}

void loop()
{  
}
