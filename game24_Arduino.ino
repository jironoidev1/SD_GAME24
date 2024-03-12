int x = 1;
int y ;

int A[6] = {A0,A1,A2,A3,A4,A5};



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.available();
  Serial.availableForWrite();
  
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(A0,OUTPUT);
  pinMode(A1,OUTPUT);
  pinMode(A2,OUTPUT);
  pinMode(A3,OUTPUT);
  pinMode(A4,OUTPUT);
  pinMode(A5,OUTPUT);

}

void loop() {

  if (x == 0){
    Serial.println("L");
    delay(11200);
    
    x = 1;
  }

  if (x == 1){
    for (int i = 2; i <= 13; i++){
      int butt1 = digitalRead(i);
      
      if (x == 0){
        return y;
        } 

      if (butt1 == 1){
        x = 0;
        y = i-1;

        Serial.println(100+y);
        
        butt1 = 0;
        
        }
      }
    }

    

    for (int i = 0; i <= 5; i++){
      int butt2 = analogRead(A[i]);

      if (x == 0){
        return y;
      } 
      
      if (butt2 >= 100){
        x = 0;
        y = i+13;

        Serial.println(100+y);
        
        butt2 = 0;
        
        }

    }


}
