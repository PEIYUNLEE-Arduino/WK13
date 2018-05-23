int ledcount=10;
int ledpins[]={2,3,4,5,6,7,8,9,10,11};
void setup() {
  // put your setup code here, to run once:
  for(int thisled=0;thisled<ledcount;thisled++){
    pinMode(ledpins[thisled],OUTPUT);
    digitalWrite(ledpins[thisled],LOW);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int thisledone=0,thisledtwo=9;thisledone<=4&&thisledtwo>=5;thisledone++,thisledtwo--){
    digitalWrite(ledpins[thisledone],HIGH);
    digitalWrite(ledpins[thisledtwo],HIGH);
    delay(45);
    digitalWrite(ledpins[thisledone],LOW);
    digitalWrite(ledpins[thisledtwo],LOW);
  }
  for(int thisledone=5,thisledtwo=4;thisledone<=9&&thisledtwo>=0;thisledone++,thisledtwo--){
    digitalWrite(ledpins[thisledone],HIGH);
    digitalWrite(ledpins[thisledtwo],HIGH);
    delay(45);
    digitalWrite(ledpins[thisledone],LOW);
    digitalWrite(ledpins[thisledtwo],LOW);
  }
}
