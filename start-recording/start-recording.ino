const int buttonPin =10;
int buttonState = 0;
int lastButtonState = 0;

void setup() 
{
  Serial.begin(9600);         //Sets the data rate in bits per second (baud) for serial data transmission
  pinMode(buttonPin, INPUT_PULLUP);        //button input
  pinMode(13, OUTPUT);
}
void loop()
{
  buttonState = digitalRead(buttonPin);
  sendButtonData();
  digitalWrite(13, buttonState);
  lastButtonState = buttonState;
}

void sendButtonData()
{
    //puts # before the values so our app knows what to do with the data
    if (buttonState != lastButtonState && digitalRead(buttonPin) == LOW) {
        Serial.println("#");
    }
    delay(200);        //added a delay to eliminate missed transmissions
}
