int pushButton = 2;

int reset = 2500, time = 0;
int deger = 0;
bool buton_durum = 0;

void setup(){
  Serial.begin(9600);  
  pinMode(pushButton, INPUT);
}

void loop() {
  int buton_durum = digitalRead(pushButton);
if (buton_durum == HIGH)
deger = deger + 1;

if (time == reset){
Serial.print("BUTON BASMA SURESI = ");
  Serial.print(deger);
Serial.println(" (ms)");
  time = 0;
deger = 0;
}
delay(1);
time = time + 1;
}
