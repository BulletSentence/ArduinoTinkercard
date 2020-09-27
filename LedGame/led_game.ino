#define RED_LED 2
#define YELLOW_LED 4
#define GREEN_LED 7
#define BLUE_LED 8
#define QTY_LED 4

#define ON 1
#define OFF 0
#define ONE_SECOND 1000

int ledSequence[QTY_LED];

// Variables Defined
// ON	
// OFF
// ONE_SECOND

void portStart(){
  Serial.begin(9600);
  pinMode(RED_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
}

void led_flash(int led_port){
  digitalWrite(led_port, ON);
  delay(ONE_SECOND);
  digitalWrite(led_port, OFF); 
  delay(ONE_SECOND);
}

void flashSequence1(){
  led_flash(RED_LED);
  led_flash(YELLOW_LED);
  led_flash(GREEN_LED);
  led_flash(BLUE_LED);
}

void allLightsOn(){
  digitalWrite(RED_LED, ON);
  digitalWrite(BLUE_LED, ON);
  digitalWrite(GREEN_LED, ON);
  digitalWrite(YELLOW_LED, ON);
  delay(ONE_SECOND);
}

void allLightsOff(){
  digitalWrite(RED_LED, OFF);
  digitalWrite(BLUE_LED, OFF);
  digitalWrite(GREEN_LED, OFF);
  digitalWrite(YELLOW_LED, OFF); 
  delay(ONE_SECOND);
}

void serialView(){
  Serial.println(RED_LED);
  Serial.println(YELLOW_LED);
  Serial.println(GREEN_LED);
  Serial.println(YELLOW_LED);
}

void startGame(){
  ledSequence = {RED_LED, BLUE_LED, GREEN_LED, YELLOW_LED};
}

void setup(){
  portStart();
}

void loop(){
  startGame();
  led_flash(ledSequence[1]);
}

