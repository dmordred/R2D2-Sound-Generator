/*************************************************** 
  Project R2D2 Sound Generator
  
  To all fans of StarWars and Arduino!

  Written by Marcelo Larios
  
  BSD license, all text above must be included in any redistribution
  
  Participated in the Instructable Arduino Contest 2019
  https://www.instructables.com/R2D2-Sound-Generator/
****************************************************/ 

#define speakerPin 11
#define led1Pin 7
#define led2Pin 8
#define led3Pin 9
#define led4Pin 10
#define led5Pin 12
int k1 =1;
int k2 =1; 
int k3 =1;
int k4 =1;
int k5 =1;
int mult=1;
int potpin = A5;  // analog pin used to connect the potentiometer
int val;


void setup() {
    
    Serial.begin(9600);
    pinMode(speakerPin, OUTPUT);
    pinMode(led1Pin, OUTPUT);
    pinMode(led2Pin, OUTPUT);
    pinMode(led3Pin, OUTPUT);
    pinMode(led4Pin, OUTPUT);
    randomSeed(analogRead(0));
Serial.println(mult);
}

void phrase1() {
        Serial.println("start k1");   
    k1 = random(500,2000);
    digitalWrite(led1Pin, HIGH);
    for (int i1a = 0; i1a <=  random(100,200); i1a++){

        tone(speakerPin, k1+(-i1a*2));          
        delay(random(1,2));             
    } 

    digitalWrite(led1Pin, LOW);   
    for (int i1b = 0; i1b <= random(100,200); i1b++){
        
        tone(speakerPin, k1 + (i1b * 10));          
        delay(random(1,2));             
    } 

    Serial.println("exit k1");   
}

void phrase2() {
        Serial.println("start k2");   
    k2 = random(200,2000);
    int k2ta = random(100,800);
    int k2tb = random(100,800);

    digitalWrite(led2Pin, HIGH);  
    for (int i2a = 0; i2a <= k2ta; i2a++){
//      Serial.println("i1");    
//      Serial.println(i);    
        i2a=i2a+mult;
        tone(speakerPin, k2+(i2a*2));          
        delay(random(1,2));             
    } 

    digitalWrite(led2Pin, LOW);   
           
    for (int i2b = 0; i2b <= k2tb; i2b++){
  //    Serial.println("12");    
  //    Serial.println(i);    
  i2b=i2b+mult;
        tone(speakerPin, k2 + (i2b * 10));          
        delay(random(1,2));             
    } 
        Serial.println("exit k2");   
}

void phrase3() {
    //down
        Serial.println("start k3");   
    k3 = random(100,2000);
    digitalWrite(led2Pin, HIGH);  
    for (int i3a = random(100,400); i3a >= 100; i3a--){
    i3a=i3a-10;

       tone(speakerPin, k3+(i3a*2));          
        delay(random(1,2));             
    } 
    digitalWrite(led2Pin, LOW);   
    for (int i3b = 0; i3b <= random(100,400); i3b++){
    
i3b=i3b+10;
        tone(speakerPin, k3 + (i3b * 10));          
        
        delay(random(1,2));             
    } 
    Serial.println("exit k3");   
}
void phrase4() {
    //mono
    Serial.println("start k4");
    k4 = random(10,2000);
    digitalWrite(led4Pin, HIGH);  
    for (int i41a = random(100,400); i41a >= 0; i41a--){
        i41a=i41a-mult;
        tone(speakerPin, k4);          
        delay(random(1,2));             
    } 
    Serial.println("exit k41");  

    for (int i41b = 0; i41b <= random(100,400); i41b++){
        i41b=i41b+mult;
        tone(speakerPin, k4+1000 );          
        delay(random(1,2));             
    } 
    k4 = random(10,2000);
        
    for (int i42a = random(100,400); i42a >= 0; i42a--){
       i42a=i42a-mult; 
        tone(speakerPin, k4);          
        delay(random(1,2));             
    } 
    
    for (int i42b = 0; i42b <= random(100,400); i42b++){
       i42b=i42b+mult; 
        tone(speakerPin, k4+1000 );          
        delay(random(1,2));             
    } 
Serial.println("exit k42");  
    
    for (int i43a = random(100,400); i43a >= 0; i43a--){
      i43a=i43a-mult;  
        tone(speakerPin, k4);          
        delay(random(1,2));             
    } 

    for (int i43b = 0; i43b <= random(100,400); i43b++){
     i43b=i43b+mult;   
        tone(speakerPin, k4+1000 );          
        delay(random(1,2));             
    } 
        digitalWrite(led4Pin, LOW);   
    Serial.println("exit k43");    
}

void phrase5(){
    Serial.println("start k5");    
    k5 = 4000;
    for (int i1 = 0; i1 <= random(3, 12); i1++){
        digitalWrite(led5Pin, HIGH);  
        tone(speakerPin, k5 + random(-1700, 2000));          
        delay(random(70, 170));  
        digitalWrite(led5Pin, LOW);           
        noTone(speakerPin);         
        delay(random(0, 30));             
    } 
        Serial.println("exit k5");    
}  

void loop() {
          Serial.println("start");   

  val = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023)
  val = map(val, 0, 1023, 1, 20);     // scale it to use it with the servo (value between 0 and 180)
  

    int K5 = 2000;
    switch (random(1,20)) {
        //select size of phrase
        case 1:shuffle(); break;
        case 2:shuffle(); break;
        case 3:shuffle(); break;
        case 4:shuffle(); break;
        case 5:shuffle();shuffle(); break;
        case 6:shuffle();shuffle(); break;
        case 7:shuffle();shuffle(); break;
        case 8:shuffle();shuffle(); break;
        case 9:shuffle();shuffle(); break;
        case 10:shuffle();shuffle();shuffle(); break;
        case 11:shuffle();shuffle();shuffle(); break;
        case 12:shuffle();shuffle();shuffle(); break;
        case 13:shuffle();shuffle();shuffle(); break;
        case 14:shuffle();shuffle();shuffle(); break;
        case 15:shuffle();shuffle();shuffle(); break;
        case 16:shuffle();shuffle();shuffle(); break;
        case 17:shuffle();shuffle();shuffle(); break;
        case 18:shuffle();shuffle();shuffle();shuffle(); break;
        case 19:shuffle();shuffle();shuffle();shuffle(); break;
        case 20:shuffle();shuffle();shuffle();shuffle();shuffle(); break;
        
    }
    for (int i1 = 0; i1 <= random(3, 9); i1++){
    Serial.println("start kbase");    
        digitalWrite(led3Pin, HIGH);  
        tone(speakerPin, K5 + random(-1700, 2000));          
        delay(random(70, 170));  
        digitalWrite(led3Pin, LOW);           
        noTone(speakerPin);         
        delay(random(0, 30));             
    } 
  
    noTone(speakerPin);         
    Serial.println("start delay");
    delay(random(2000, 4000)); 
    Serial.println("end delay");                
}

void shuffle(){
  Serial.println("shuffle phrase");    
    switch (random(1,5)) {
        
        case 1:phrase1(); break;
        case 2:phrase2(); break;
        case 3:phrase3(); break;
        case 4:phrase4(); break;
        case 5:phrase4(); break;
        
    }


}
