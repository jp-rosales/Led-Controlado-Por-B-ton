int led = 13;
int boton = 8;
int estadoboton;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(boton, INPUT);
}

void loop() {
  estadoboton = digitalRead(boton);
  if (estadoboton == HIGH){
    digitalWrite(led, HIGH);
  }
  else {
    digitalWrite(led, LOW);
  }
}
  
