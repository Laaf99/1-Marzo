int R = 9;
int V = 10;
int A = 11;

int pot1 = A0;
int pot2 = A1;
int pot3 = A2;

int sensor1 = 0;
int sensor2 = 0;
int sensor3 = 0;

float divisionR;
float divisionV;
float divisionA;

void setup() {
  pinMode(R,OUTPUT);
  pinMode(V,OUTPUT);
  pinMode(A,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  float Constante = (float) 255/1023;
  sensor1 = analogRead(pot1);
  sensor2 = analogRead(pot2);
  sensor3 = analogRead(pot3);

  divisionR = Constante * sensor1;
  divisionV = Constante * sensor2;
  divisionA = Constante * sensor3;

  color(divisionR,divisionV,divisionA);
}

void color(int r, int v, int a) {
  analogWrite(R,255-r);
  analogWrite(V,255-v);
  analogWrite(A,255-a);
  ;
}
