void setup() {
  // put your setup code here, to run once:
pinMode(A0,INPUT);
pinMode(7, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int A0=analogRead(A0);
Serial.print(A0);
Serial.print(",");
Serial.print(400);
Serial.println("");
delay(100);

if (A0<400){
  digitalWrite( 7, HIGH );
}else{
  digitalWrite( 7, LOW );
};
}
