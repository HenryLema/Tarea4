//Numeros Primos
const int D=11;//mas significativo
const int C=10;
const int B=9;
const int A=8;// menosignificativo
const int decenas=13;
const int unidades=12;
const int s1=6;
const int btn=7;

int cont=0;
int cont2=0;
int dec;
int uni;
void setup() {
pinMode(D,OUTPUT);
pinMode(C,OUTPUT);
pinMode(B,OUTPUT);
pinMode(A,OUTPUT);
pinMode(decenas,OUTPUT);
pinMode(unidades,OUTPUT);

pinMode(btn,INPUT);
pinMode(s1,INPUT);
}

void loop() {
 


    
  if(digitalRead(btn)==LOW ){
    delay(100);

    if(cont<98)
    
    cont=cont+3;
    
    else
    cont=0;
    dec=cont/10;//15/10---1.5---coje la parte entera  5/10...0.5 coje cero
    uni=cont-(dec*10);// 15-10--5
    }cont++;

    digitalWrite(decenas,HIGH);
    digitalWrite(unidades,LOW);
    //imprime valor decenas
    primo(dec);
    segmentos(dec);
    delay(200);
    
    digitalWrite(decenas,LOW);
    digitalWrite(unidades,HIGH);
    primo(uni);
    segmentos(uni);
    delay(200);
       
     }
     bool primo (int cont){
      bool condicion;
      for(int i=2; 1<cont;i++){
        if(cont % i==0){
          if(cont==1){
            condicion= true;
            }
            else {
              condicion= false;
              }
          }
        } 
        //else 
        condicion=false;
        
           return condicion;
      }
  void segmentos(int i){//no retorna nada
    switch(i){
      case 0:
    digitalWrite(D,LOW);
    digitalWrite(C,LOW);
    digitalWrite(B,LOW);
    digitalWrite(A,LOW);
    break ;
      case 1:
    digitalWrite(D,HIGH);
    digitalWrite(C,LOW);
    digitalWrite(B,LOW);
    digitalWrite(A,LOW);
    break ;
      case 2:
    digitalWrite(D,LOW);
    digitalWrite(C,HIGH);
    digitalWrite(B,LOW);
    digitalWrite(A,LOW);
    break ;
      case 3:
    digitalWrite(D,HIGH);
    digitalWrite(C,HIGH);
    digitalWrite(B,LOW);
    digitalWrite(A,LOW);
    break ;
      case 4:
    digitalWrite(D,LOW);
    digitalWrite(C,LOW);
    digitalWrite(B,HIGH);
    digitalWrite(A,LOW);
    break ;
      case 5:
    digitalWrite(D,HIGH);
    digitalWrite(C,LOW);
    digitalWrite(B,HIGH);
    digitalWrite(A,LOW);
    break ;
      case 6:
    digitalWrite(D,LOW);
    digitalWrite(C,HIGH);
    digitalWrite(B,HIGH);
    digitalWrite(A,LOW);
    break ;
      case 7:
    digitalWrite(D,HIGH);
    digitalWrite(C,HIGH);
    digitalWrite(B,HIGH);
    digitalWrite(A,LOW);
    break ;
      case 8:
    digitalWrite(D,LOW);
    digitalWrite(C,LOW);
    digitalWrite(B,LOW);
    digitalWrite(A,HIGH);
    break ;
      case 9:
    digitalWrite(D,HIGH);
    digitalWrite(C,LOW);
    digitalWrite(B,LOW);
    digitalWrite(A,HIGH);
    break ;
      }
    }
