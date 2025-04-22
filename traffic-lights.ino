int green = 8;
int yellow = 9;
int red = 10;
int buzzer = 11; 

int button = 7;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
 
  pinMode(buzzer, OUTPUT);

  pinMode(button, INPUT);

}

// the loop function runs over and over again forever
void loop() {

  digitalWrite(red, HIGH);
  buzzbuzz();
  delay(5000);
  digitalWrite(red, LOW);
  delay(500);

  digitalWrite(green, HIGH);  
  buzzbuzz();
  delay(4000);
  digitalWrite(green, LOW);
  delay(500);
  
  
  digitalWrite(yellow, HIGH);  
  buzzbuzz();
  delay(2000);                 
  digitalWrite(yellow, LOW);   
  delay(500);



}

void buzzbuzz(){
  tone(buzzer, 200,75);
  delay(300);
  noTone(buzzer);
  delay(300);

}
