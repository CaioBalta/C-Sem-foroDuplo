int verm = 13;
int tempo = 2500;
int tempos = 250;
int ama = 12;
int verd = 11;
int vermv = 10;
int amav = 9;
int verdv = 8;
void setup() {
  Serial.begin(9600);
  pinMode(verm, OUTPUT);
  pinMode(ama, OUTPUT);
  pinMode(verd, OUTPUT);
  pinMode(vermv, OUTPUT);
  pinMode(amav, OUTPUT);
  pinMode(verdv, OUTPUT);
}

void loop() {
  digitalWrite(verm, 0);
  digitalWrite(ama, 0);
  digitalWrite(verd, 1);
  digitalWrite(vermv, 1);
  digitalWrite(amav, 0);
  digitalWrite(verdv, 0);

  delay(tempo);

  digitalWrite(verm, 0);
  digitalWrite(ama, 0);
  digitalWrite(verd, 0);
  digitalWrite(vermv, 1);
  digitalWrite(amav, 0);
  digitalWrite(verdv, 0);

  delay(tempos);

  digitalWrite(ama, 1);
  digitalWrite(verm, 0);
  digitalWrite(verd, 0);
  digitalWrite(vermv, 1);
  digitalWrite(amav, 0);
  digitalWrite(verdv, 0);

  delay(tempo);

  digitalWrite(ama, 0);
  digitalWrite(verm, 0);
  digitalWrite(verd, 0);
  digitalWrite(vermv, 0);
  digitalWrite(amav, 0);
  digitalWrite(verdv, 0);

  delay(tempos);

  digitalWrite(verm, 1);
  digitalWrite(ama, 0);
  digitalWrite(verd, 0);
  digitalWrite(vermv, 0);
  digitalWrite(amav, 0);
  digitalWrite(verdv, 1);

  delay(tempo);


  digitalWrite(ama, 0);
  digitalWrite(verm, 1);
  digitalWrite(verd, 0);
  digitalWrite(vermv, 0);
  digitalWrite(amav, 0);
  digitalWrite(verdv, 0);

  delay(tempos);

  digitalWrite(ama, 0);
  digitalWrite(verm, 1);
  digitalWrite(verd, 0);
  digitalWrite(vermv, 0);
  digitalWrite(amav, 1);
  digitalWrite(verd, 0);

  delay(tempo);
}
