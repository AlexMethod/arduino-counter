int A = 0;
int B = 1;
int C = 2;
int D = 3;
//int A0 = 0;
int Counter =  0;

void setup() {
  // put your setup code here, to run once:
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(C,OUTPUT);
  pinMode(D,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //Counter += digitalRead(A0);
  randomNumbers();
}

void writeNumber(int a, int b, int c, int d){
  digitalWrite(A,a);
  digitalWrite(B,b);
  digitalWrite(C,c);
  digitalWrite(D,d);
}

void randomNumbers(){
  writeNumber(0,0,0,0);
  delay(2000);
  writeNumber(1,0,0,0);
  delay(2000);
  writeNumber(0,1,0,0);
  delay(2000);
  writeNumber(1,1,0,0);
  delay(2000);
  writeNumber(0,0,1,0);
  delay(2000);
  writeNumber(1,0,1,0);
  delay(2000);
  writeNumber(0,1,1,0);
  delay(2000);
  writeNumber(1,1,1,0);
  delay(2000);
  writeNumber(0,0,0,1);
  delay(2000);
  writeNumber(1,0,0,1);
}
