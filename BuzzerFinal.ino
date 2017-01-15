//#include "pitches.h"

const int buzzer1 = 2;    // buzzer1 pin
const int player1 = 3;    // player1 pin
const int buzzer2 = 4;    // buzzer2 pin
const int player2 = 5;    // player2 pin
const int buzzer3 = 6;    // buzzer3 pin
const int player3 = 7;    // player3 pin
const int buzzer4 = 8;    // buzzer4 pin
const int player4 = 9;    // player4 pin
const int buzzer5 = 10;    // buzzer5 pin
const int player5 = 11;    // player5 pin
const int buzzer6 = 12;    // buzzer6 pin
const int player6 = 13;    // player6 pin
const int buzzer7 = A0;    // buzzer7 pin
//const int player7 = A1;    // player7 pin
const int buzzer8 = A2;    // buzzer8 pin
//const int player8 = A3;    // player8 pin

/*
int melody1[] = {
  NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4, 8, 8, 4, 4, 4, 4, 4
};
*/

void setup() 
{
  // put your setup code here, to run once:
  
  Serial.begin(9600);
   
  pinMode(buzzer1, INPUT);
  pinMode(buzzer2, INPUT);
  pinMode(buzzer3, INPUT);
  pinMode(buzzer4, INPUT);
  pinMode(buzzer5, INPUT);
  pinMode(buzzer6, INPUT);
  pinMode(buzzer7, INPUT);
  pinMode(buzzer8, INPUT);

  
  pinMode(player1, OUTPUT);
  pinMode(player2, OUTPUT);
  pinMode(player3, OUTPUT);
  pinMode(player4, OUTPUT);
  pinMode(player5, OUTPUT);
  pinMode(player6, OUTPUT);
  //pinMode(player7, OUTPUT);
  //pinMode(player8, OUTPUT);

}

void loop() 
{
  // put your main code here, to run repeatedly:
  int buzzer1state, buzzer2state, buzzer3state, buzzer4state, buzzer5state, buzzer6state, buzzer7state, buzzer8state; 
  int player1state, player2state, player3state, player4state, player5state, player6state, player7state, player8state;

  buzzer1state = digitalRead(buzzer1);
  buzzer2state = digitalRead(buzzer2);
  buzzer3state = digitalRead(buzzer3);
  buzzer4state = digitalRead(buzzer4);
  buzzer5state = digitalRead(buzzer5);
  buzzer6state = digitalRead(buzzer6);
  buzzer7state = digitalRead(buzzer7);
  buzzer8state = digitalRead(buzzer8);
 
  
  player1state = digitalRead(player1);
  player2state = digitalRead(player2);
  player3state = digitalRead(player3);
  player4state = digitalRead(player4);    
  player5state = digitalRead(player5);
  player6state = digitalRead(player6);
  //player7state = digitalRead(player7);
  //player8state = digitalRead(player8);


  if (buzzer1state == LOW)
  {
    /*digitalWrite(player1, HIGH);
    Serial.print("Player 1");
    Serial.println();
    // iterate over the notes of the melody:
   /*
    for (int thisNote = 0; thisNote < 8; thisNote++) 
    {
      // to calculate the note duration, take one second
      // divided by the note type.
      //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
      int noteDuration = 1000 / noteDurations[thisNote];
      tone(8, melody1[thisNote], noteDuration);
  
      // to distinguish the notes, set a minimum time between them.
      // the note's duration + 30% seems to work well:
      int pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);
      // stop the tone playing:
      noTone(8);
    }
    */
    //delay(1);
    //digitalWrite(player1, LOW);
  }

  if (buzzer2state == LOW)
  {
    digitalWrite(player2, HIGH);
    Serial.print("Player 2");
    Serial.println();
  }
 /* if (buzzer3state == LOW)
  {
    digitalWrite(player3, HIGH);
    Serial.print("Player 3");
    Serial.println();
  }
  if (buzzer4state == LOW)
  {
    digitalWrite(player4, HIGH);
    Serial.print("Player 4");
    Serial.println();
  }
  if (buzzer5state == LOW)
  {
    digitalWrite(player5, HIGH);
    Serial.print("Player 5");
    Serial.println();
  }
  if (buzzer6state == LOW)
  {
    digitalWrite(player6, HIGH);
    Serial.print("Player 6");
    Serial.println();
  }
  */
  /*
  if (buzzer7state == LOW)
  {
    //digitalWrite(player7, HIGH);
    Serial.print("Player 7");
    Serial.println();
  }
  if (buzzer8state == LOW)
  {
    //digitalWrite(player8, HIGH);
    Serial.print("Player 8");
    Serial.println();
  }
*/

  delay(75); 
  digitalWrite(player1, LOW);
  digitalWrite(player2, LOW); 
  digitalWrite(player3, LOW);
  digitalWrite(player4, LOW);
  digitalWrite(player5, LOW);
  digitalWrite(player6, LOW);
  //digitalWrite(player7, LOW);
  //digitalWrite(player8, LOW);

  
}
