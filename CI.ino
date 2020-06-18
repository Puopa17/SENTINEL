//00
bool IC74LS00(void){
  // Define as entradas, saídas e alimentação 
  bool resultado = true;
  int nportas = 4;
  int entradas1[4]={3,6,11,14};
  int entradas2[4]={4,7,12,15};              
  int saidas[4]={5,8,13,16};
  int alimentacao[2]={9,10};
  for(int i=0;i<4;i++) pinMode(entradas1[i], OUTPUT); // Configura entradas
  for(int i=0;i<4;i++) pinMode(entradas2[i], OUTPUT); // Configura entradas
  for(int i=0;i<4;i++) pinMode(saidas[i], INPUT);  // Configura saídas
  for(int i=0;i<2;i++) pinMode(alimentacao[i], OUTPUT); //Configura alimentação
  digitalWrite(alimentacao[0], LOW);  // GROUND
  digitalWrite(alimentacao[1], HIGH); // +VCC
  // As entradas e saídas estão configuradas e o chip está alimentado... verificar 
  // se as portas lógicas estão operacionais
  for(int i=0; i<nportas; i++){
    //Teste
    digitalWrite(entradas1[i],LOW);  
    digitalWrite(entradas2[i],LOW);
    if(digitalRead(saidas[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
    
 
    digitalWrite(entradas1[i],LOW); 
    digitalWrite(entradas2[i],HIGH); 
    if(digitalRead(saidas[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
        
 
    digitalWrite(entradas1[i],HIGH);
    digitalWrite(entradas2[i],LOW);  
    if(digitalRead(saidas[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
     
    digitalWrite(entradas1[i],HIGH);
    digitalWrite(entradas2[i],HIGH); 
    if(digitalRead(saidas[i])==LOW) resultado=resultado&true;
    else resultado=resultado&false;
    }
  return(resultado);  
} 
//02

bool IC74LS02(void){
  // Define as entradas, saídas e alimentação 
  bool resultado = true;
  int nportas = 4;
  int entradas1[4]={4,7,12,15};
  int entradas2[4]={5,8,13,16};              
  int saidas[4]={3,6,11,14};
  int alimentacao[2]={9,10};
  for(int i=0;i<4;i++) pinMode(entradas1[i], OUTPUT); // Configura entradas
  for(int i=0;i<4;i++) pinMode(entradas2[i], OUTPUT); // Configura entradas
  for(int i=0;i<4;i++) pinMode(saidas[i], INPUT);  // Configura saídas
  for(int i=0;i<2;i++) pinMode(alimentacao[i], OUTPUT); //Configura alimentação
  digitalWrite(alimentacao[0], LOW);  // GROUND
  digitalWrite(alimentacao[1], HIGH); // +VCC
  // As entradas e saídas estão configuradas e o chip está alimentado... verificar 
  // se as portas lógicas estão operacionais
  for(int i=0; i<nportas; i++){
    //Teste
    digitalWrite(entradas1[i],LOW);  
    digitalWrite(entradas2[i],LOW);
    if(digitalRead(saidas[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
    
 
    digitalWrite(entradas1[i],LOW); 
    digitalWrite(entradas2[i],HIGH); 
    if(digitalRead(saidas[i])==LOW) resultado=resultado&true;
    else resultado=resultado&false;
        
 
    digitalWrite(entradas1[i],HIGH);
    digitalWrite(entradas2[i],LOW);  
    if(digitalRead(saidas[i])==LOW) resultado=resultado&true;
    else resultado=resultado&false;
     
    digitalWrite(entradas1[i],HIGH);
    digitalWrite(entradas2[i],HIGH); 
    if(digitalRead(saidas[i])==LOW) resultado=resultado&true;
    else resultado=resultado&false;
    }
  return(resultado);  
}
//04
       bool IC74LS04(void){
        // Define as entradas, saídas e alimentação 
        bool resultado = true;
        int nportas = 6;
        int entradas[6]={3,5,7,11,13,15};
        int saidas[6]={4,6,8,12,14,16};
        int alimentacao[2]={9,10};
        for(int i=0;i<6;i++) pinMode(entradas[i], OUTPUT); // Configura entradas
        for(int i=0;i<6;i++) pinMode(saidas[i], INPUT);  // Configura saídas
        for(int i=0;i<2;i++) pinMode(alimentacao[i], OUTPUT); //Configura alimentação
        digitalWrite(alimentacao[0], LOW);  // GROUND
        digitalWrite(alimentacao[1], HIGH); // +VCC
        // As entradas e saídas estão configuradas e o chip está alimentado... verificar 
        // se as portas lógicas estão operacionais
        for(int i=0; i<nportas; i++){
          //Teste
          digitalWrite(entradas[i],LOW);  // Coloca entrada com nível lógico 0
      //    Serial.print("Entrada ");
      //    Serial.print(i);
      //    Serial.print(" (LOW) - ");
      //    Serial.println(digitalRead(saidas[i]));
          if(digitalRead(saidas[i])==HIGH) resultado=resultado&true;
          else resultado=resultado&false;
          
       
          digitalWrite(entradas[i],HIGH); // Coloca entrada com nível lógico 1
      //    Serial.print("Entrada ");
      //    Serial.print(i);
      //    Serial.print(" (HIGH) - ");
      //    Serial.println(digitalRead(saidas[i]));  
          if(digitalRead(saidas[i])==LOW) resultado=resultado&true;
          else resultado=resultado&false;
          }
        return(resultado);  
      } 
 //08

 bool IC74LS08(void){
  // Define as entradas, saídas e alimentação 
  bool resultado = true;
  int nportas = 4;
  int entradas1[4]={3,6,11,14};
  int entradas2[4]={4,7,12,15};              
  int saidas[4]={5,8,13,16};
  int alimentacao[2]={9,10};
  for(int i=0;i<4;i++) pinMode(entradas1[i], OUTPUT); // Configura entradas
  for(int i=0;i<4;i++) pinMode(entradas2[i], OUTPUT); // Configura entradas
  for(int i=0;i<4;i++) pinMode(saidas[i], INPUT);  // Configura saídas
  for(int i=0;i<2;i++) pinMode(alimentacao[i], OUTPUT); //Configura alimentação
  digitalWrite(alimentacao[0], LOW);  // GROUND
  digitalWrite(alimentacao[1], HIGH); // +VCC
  // As entradas e saídas estão configuradas e o chip está alimentado... verificar 
  // se as portas lógicas estão operacionais
  for(int i=0; i<nportas; i++){
    //Teste
    digitalWrite(entradas1[i],LOW);  
    digitalWrite(entradas2[i],LOW);
    if(digitalRead(saidas[i])==LOW) resultado=resultado&true;
    else resultado=resultado&false;
    
 
    digitalWrite(entradas1[i],LOW); 
    digitalWrite(entradas2[i],HIGH); 
    if(digitalRead(saidas[i])==LOW) resultado=resultado&true;
    else resultado=resultado&false;
        
 
    digitalWrite(entradas1[i],HIGH);
    digitalWrite(entradas2[i],LOW);  
    if(digitalRead(saidas[i])==LOW) resultado=resultado&true;
    else resultado=resultado&false;
     
    digitalWrite(entradas1[i],HIGH);
    digitalWrite(entradas2[i],HIGH); 
    if(digitalRead(saidas[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
    }
  return(resultado);  
} 
 //32

  bool IC74LS32(void){
  // Define as entradas, saídas e alimentação 
  bool resultado = true;
  int nportas = 4;
  int entradas1[4]={3,6,11,14};
  int entradas2[4]={4,7,12,15};              
  int saidas[4]={5,8,13,16};
  int alimentacao[2]={9,10};
  for(int i=0;i<4;i++) pinMode(entradas1[i], OUTPUT); // Configura entradas
  for(int i=0;i<4;i++) pinMode(entradas2[i], OUTPUT); // Configura entradas
  for(int i=0;i<4;i++) pinMode(saidas[i], INPUT);  // Configura saídas
  for(int i=0;i<2;i++) pinMode(alimentacao[i], OUTPUT); //Configura alimentação
  digitalWrite(alimentacao[0], LOW);  // GROUND
  digitalWrite(alimentacao[1], HIGH); // +VCC
  // As entradas e saídas estão configuradas e o chip está alimentado... verificar 
  // se as portas lógicas estão operacionais
  for(int i=0; i<nportas; i++){
    //Teste
    digitalWrite(entradas1[i],LOW);  
    digitalWrite(entradas2[i],LOW);
    if(digitalRead(saidas[i])==LOW) resultado=resultado&true;
    else resultado=resultado&false;
    
 
    digitalWrite(entradas1[i],LOW); 
    digitalWrite(entradas2[i],HIGH); 
    if(digitalRead(saidas[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
        
 
    digitalWrite(entradas1[i],HIGH);
    digitalWrite(entradas2[i],LOW);  
    if(digitalRead(saidas[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
     
    digitalWrite(entradas1[i],HIGH);
    digitalWrite(entradas2[i],HIGH); 
    if(digitalRead(saidas[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
    }
  return(resultado);  
}
  //46
  bool IC74LS46(void){
  // Define as entradas, saídas e alimentação 
  bool resultado = true;
  int nportas = 1;
  int entradasA[1]={9};//7
  int entradasB[1]={3};//1
  int entradasC[1]={4};//2
  int entradasD[1]={8};//6             
  int saidas1[1]={11};//15
  int saidas2[1]={12};//14
  int saidas3[1]={13};//13
  int saidas4[1]={14};//12
  int saidas5[1]={15};//11
  int saidas6[1]={16};//10
  int saidas7[1]={17};//9
  int alimentacao[5]={18,10,5,6,7};//8,16,3,4,5
  for(int i=0;i<1;i++) pinMode(entradasA[i], OUTPUT); // Configura entradas
  for(int i=0;i<1;i++) pinMode(entradasB[i], OUTPUT); // Configura entradas
  for(int i=0;i<1;i++) pinMode(entradasC[i], OUTPUT); // Configura entradas
  for(int i=0;i<1;i++) pinMode(entradasD[i], OUTPUT); // Configura entradas
  for(int i=0;i<1;i++) pinMode(saidas1[i], INPUT_PULLUP);  // Configura saídas
  for(int i=0;i<1;i++) pinMode(saidas2[i], INPUT_PULLUP);  // Configura saídas
  for(int i=0;i<1;i++) pinMode(saidas3[i], INPUT_PULLUP);  // Configura saídas
  for(int i=0;i<1;i++) pinMode(saidas4[i], INPUT_PULLUP);  // Configura saídas
  for(int i=0;i<1;i++) pinMode(saidas5[i], INPUT_PULLUP);  // Configura saídas
  for(int i=0;i<1;i++) pinMode(saidas6[i], INPUT_PULLUP);  // Configura saídas
  for(int i=0;i<1;i++) pinMode(saidas7[i], INPUT_PULLUP);  // Configura saídas
  for(int i=0;i<5;i++) pinMode(alimentacao[i], OUTPUT); //Configura alimentação
  digitalWrite(alimentacao[0], LOW);  // GROUND
  digitalWrite(alimentacao[1], HIGH); // +VCC
  digitalWrite(alimentacao[2], HIGH); // +VCC
  digitalWrite(alimentacao[3], HIGH); // +VCC
  digitalWrite(alimentacao[4], HIGH); // +VCC
  // As entradas e saídas estão configuradas e o chip está alimentado... verificar 
  // se as portas lógicas estão operacionais
  for(int i=0; i<nportas; i++){
    //Teste
    //0
    digitalWrite(entradasA[i],LOW);  
    digitalWrite(entradasB[i],LOW);
    digitalWrite(entradasC[i],LOW);
    digitalWrite(entradasD[i],LOW);
    if(digitalRead(saidas7[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
    //1
    digitalWrite(entradasA[i],LOW);  
    digitalWrite(entradasB[i],LOW);
    digitalWrite(entradasC[i],LOW);
    digitalWrite(entradasD[i],HIGH);
    if(digitalRead(saidas1[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
    if(digitalRead(saidas4[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
    if(digitalRead(saidas5[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
    if(digitalRead(saidas6[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
    if(digitalRead(saidas7[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
    //2
    digitalWrite(entradasA[i],LOW);  
    digitalWrite(entradasB[i],LOW);
    digitalWrite(entradasC[i],HIGH);
    digitalWrite(entradasD[i],LOW);
    if(digitalRead(saidas4[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;    
    if(digitalRead(saidas5[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
    if(digitalRead(saidas6[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
    if(digitalRead(saidas7[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
    //3
    digitalWrite(entradasA[i],LOW);  
    digitalWrite(entradasB[i],LOW);
    digitalWrite(entradasC[i],HIGH);
    digitalWrite(entradasD[i],HIGH);
    if(digitalRead(saidas5[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
    if(digitalRead(saidas6[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
    //4
    digitalWrite(entradasA[i],LOW);  
    digitalWrite(entradasB[i],HIGH);
    digitalWrite(entradasC[i],LOW);
    digitalWrite(entradasD[i],LOW);
    if(digitalRead(saidas1[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
    if(digitalRead(saidas4[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
    if(digitalRead(saidas5[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
    //5    
    digitalWrite(entradasA[i],LOW);  
    digitalWrite(entradasB[i],HIGH);
    digitalWrite(entradasC[i],LOW);
    digitalWrite(entradasD[i],HIGH);
    if(digitalRead(saidas2[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
    if(digitalRead(saidas3[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
    //6
    digitalWrite(entradasA[i],LOW);  
    digitalWrite(entradasB[i],HIGH);
    digitalWrite(entradasC[i],HIGH);
    digitalWrite(entradasD[i],LOW);
    if(digitalRead(saidas2[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
    //7
    digitalWrite(entradasA[i],LOW);  
    digitalWrite(entradasB[i],HIGH);
    digitalWrite(entradasC[i],HIGH);
    digitalWrite(entradasD[i],HIGH);
    if(digitalRead(saidas4[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;    
    if(digitalRead(saidas5[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;    
    if(digitalRead(saidas6[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;    
    if(digitalRead(saidas7[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
    //8
    digitalWrite(entradasA[i],HIGH);  
    digitalWrite(entradasB[i],LOW);
    digitalWrite(entradasC[i],LOW);
    digitalWrite(entradasD[i],LOW);
    if(digitalRead(saidas7[i])==LOW) resultado=resultado&true;
    else resultado=resultado&false;
    //9
    digitalWrite(entradasA[i],HIGH);  
    digitalWrite(entradasB[i],LOW);
    digitalWrite(entradasC[i],LOW);
    digitalWrite(entradasD[i],HIGH);
    if(digitalRead(saidas5[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;    
}
 return(resultado);  
}
 //48
  bool IC74LS48(void){
  // Define as entradas, saídas e alimentação 
  bool resultado = true;
  int nportas = 1;
  int entradasA[1]={9};//7
  int entradasB[1]={3};//1
  int entradasC[1]={4};//2
  int entradasD[1]={8};//6             
  int saidas1[1]={11};//15
  int saidas2[1]={12};//14
  int saidas3[1]={13};//13
  int saidas4[1]={14};//12
  int saidas5[1]={15};//11
  int saidas6[1]={16};//10
  int saidas7[1]={17};//9
  int alimentacao[5]={18,10,5,6,7};//8,16,3,4,5
  for(int i=0;i<1;i++) pinMode(entradasA[i], OUTPUT); // Configura entradas
  for(int i=0;i<1;i++) pinMode(entradasB[i], OUTPUT); // Configura entradas
  for(int i=0;i<1;i++) pinMode(entradasC[i], OUTPUT); // Configura entradas
  for(int i=0;i<1;i++) pinMode(entradasD[i], OUTPUT); // Configura entradas
  for(int i=0;i<1;i++) pinMode(saidas1[i], INPUT);  // Configura saídas
  for(int i=0;i<1;i++) pinMode(saidas2[i], INPUT);  // Configura saídas
  for(int i=0;i<1;i++) pinMode(saidas3[i], INPUT);  // Configura saídas
  for(int i=0;i<1;i++) pinMode(saidas4[i], INPUT);  // Configura saídas
  for(int i=0;i<1;i++) pinMode(saidas5[i], INPUT);  // Configura saídas
  for(int i=0;i<1;i++) pinMode(saidas6[i], INPUT);  // Configura saídas
  for(int i=0;i<1;i++) pinMode(saidas7[i], INPUT);  // Configura saídas
  for(int i=0;i<5;i++) pinMode(alimentacao[i], OUTPUT); //Configura alimentação
  digitalWrite(alimentacao[0], LOW);  // GROUND
  digitalWrite(alimentacao[1], HIGH); // +VCC
  digitalWrite(alimentacao[2], HIGH); // +VCC
  digitalWrite(alimentacao[3], HIGH); // +VCC
  digitalWrite(alimentacao[4], HIGH); // +VCC
  // As entradas e saídas estão configuradas e o chip está alimentado... verificar 
  // se as portas lógicas estão operacionais
  for(int i=0; i<nportas; i++){
    //Teste
    //0
    digitalWrite(entradasA[i],LOW);  
    digitalWrite(entradasB[i],LOW);
    digitalWrite(entradasC[i],LOW);
    digitalWrite(entradasD[i],LOW);
    if(digitalRead(saidas7[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
    //1
    digitalWrite(entradasA[i],LOW);  
    digitalWrite(entradasB[i],LOW);
    digitalWrite(entradasC[i],LOW);
    digitalWrite(entradasD[i],HIGH);
    if(digitalRead(saidas1[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
    if(digitalRead(saidas4[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
    if(digitalRead(saidas5[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
    if(digitalRead(saidas6[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
    if(digitalRead(saidas7[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
    //2
    digitalWrite(entradasA[i],LOW);  
    digitalWrite(entradasB[i],LOW);
    digitalWrite(entradasC[i],HIGH);
    digitalWrite(entradasD[i],LOW);
    if(digitalRead(saidas4[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;    
    if(digitalRead(saidas5[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
    if(digitalRead(saidas6[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
    if(digitalRead(saidas7[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
    //3
    digitalWrite(entradasA[i],LOW);  
    digitalWrite(entradasB[i],LOW);
    digitalWrite(entradasC[i],HIGH);
    digitalWrite(entradasD[i],HIGH);
    if(digitalRead(saidas5[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
    if(digitalRead(saidas6[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
    //4
    digitalWrite(entradasA[i],LOW);  
    digitalWrite(entradasB[i],HIGH);
    digitalWrite(entradasC[i],LOW);
    digitalWrite(entradasD[i],LOW);
    if(digitalRead(saidas1[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
    if(digitalRead(saidas4[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
    if(digitalRead(saidas5[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
    //5    
    digitalWrite(entradasA[i],LOW);  
    digitalWrite(entradasB[i],HIGH);
    digitalWrite(entradasC[i],LOW);
    digitalWrite(entradasD[i],HIGH);
    if(digitalRead(saidas2[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
    if(digitalRead(saidas3[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
    //6
    digitalWrite(entradasA[i],LOW);  
    digitalWrite(entradasB[i],HIGH);
    digitalWrite(entradasC[i],HIGH);
    digitalWrite(entradasD[i],LOW);
    if(digitalRead(saidas2[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
    //7
    digitalWrite(entradasA[i],LOW);  
    digitalWrite(entradasB[i],HIGH);
    digitalWrite(entradasC[i],HIGH);
    digitalWrite(entradasD[i],HIGH);
    if(digitalRead(saidas4[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;    
    if(digitalRead(saidas5[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;    
    if(digitalRead(saidas6[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;    
    if(digitalRead(saidas7[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
    //8
    digitalWrite(entradasA[i],HIGH);  
    digitalWrite(entradasB[i],LOW);
    digitalWrite(entradasC[i],LOW);
    digitalWrite(entradasD[i],LOW);
    if(digitalRead(saidas7[i])==LOW) resultado=resultado&true;
    else resultado=resultado&false;
    //9
    digitalWrite(entradasA[i],HIGH);  
    digitalWrite(entradasB[i],LOW);
    digitalWrite(entradasC[i],LOW);
    digitalWrite(entradasD[i],HIGH);
    if(digitalRead(saidas5[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;    
}
 return(resultado);  
}
  //74
  bool IC74LS74(void){
  // Define as entradas, saídas e alimentação 
  bool resultado = true;
  int nportas = 2;
  int cl[2]={3,4};
  int d[2]={5,6};
  int ck[2]={7,8};
  int pre[2]={11,12};
  int Q[2]={13,14};
  int NQ[2]={15,16};
  int alimentacao[2]={9,10};
  for(int i=0;i<2;i++) pinMode(cl[i], OUTPUT); // Configura entradas
  for(int i=0;i<2;i++) pinMode(d[i], OUTPUT); // Configura entradas
  for(int i=0;i<2;i++) pinMode(ck[i], OUTPUT); // Configura entradas
  for(int i=0;i<2;i++) pinMode(pre[i], OUTPUT); // Configura entradas
  for(int i=0;i<2;i++) pinMode(Q[i], INPUT);  // Configura saídas
  for(int i=0;i<2;i++) pinMode(NQ[i], INPUT);  // Configura saídas
  for(int i=0;i<2;i++) pinMode(alimentacao[i], OUTPUT); //Configura alimentação
  digitalWrite(alimentacao[0], LOW);  // GROUND
  digitalWrite(alimentacao[1], HIGH); // +VCC
  // As entradas e saídas estão configuradas e o chip está alimentado... verificar 
  // se as portas lógicas estão operacionais
  for(int i=0; i<nportas; i++){
    //Teste
    digitalWrite(pre[i],LOW);
    digitalWrite(cl[i],HIGH); 
    if(digitalRead(Q[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
    if(digitalRead(NQ[i])==LOW) resultado=resultado&true;
    else resultado=resultado&false;

    digitalWrite(pre[i],HIGH);
    digitalWrite(cl[i],LOW); 
    if(digitalRead(Q[i])==LOW) resultado=resultado&true;
    else resultado=resultado&false;
    if(digitalRead(NQ[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;

    digitalWrite(pre[i],LOW);
    digitalWrite(cl[i],LOW); 
    if(digitalRead(Q[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
    if(digitalRead(NQ[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;

    digitalWrite(pre[i],HIGH);
    digitalWrite(cl[i],HIGH);
    pulseIn(ck[i],HIGH);
    digitalWrite(d[i],HIGH);
    if(digitalRead(Q[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
    if(digitalRead(NQ[i])==LOW) resultado=resultado&true;
    else resultado=resultado&false;

    digitalWrite(pre[i],HIGH);
    digitalWrite(cl[i],HIGH);
    pulseIn(ck[i],HIGH);
    digitalWrite(d[i],LOW);
    if(digitalRead(Q[i])==LOW) resultado=resultado&true;
    else resultado=resultado&false;
    if(digitalRead(NQ[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;

    digitalWrite(pre[i],HIGH);
    digitalWrite(cl[i],HIGH);
    digitalWrite(ck[i],LOW);
    if(digitalRead(Q[i])) resultado=resultado&true;
    else resultado=resultado&false;
    if(digitalRead(NQ[i])) resultado=resultado&true;
    else resultado=resultado&false;

    }
  return(resultado);  
} 
 //86    

  bool IC74LS86(void){
  // Define as entradas, saídas e alimentação 
  bool resultado = true;
  int nportas = 4;
  int entradas1[4]={3,6,11,14};
  int entradas2[4]={4,7,12,15};              
  int saidas[4]={5,8,13,16};
  int alimentacao[2]={9,10};
  for(int i=0;i<4;i++) pinMode(entradas1[i], OUTPUT); // Configura entradas
  for(int i=0;i<4;i++) pinMode(entradas2[i], OUTPUT); // Configura entradas
  for(int i=0;i<4;i++) pinMode(saidas[i], INPUT);  // Configura saídas
  for(int i=0;i<2;i++) pinMode(alimentacao[i], OUTPUT); //Configura alimentação
  digitalWrite(alimentacao[0], LOW);  // GROUND
  digitalWrite(alimentacao[1], HIGH); // +VCC
  // As entradas e saídas estão configuradas e o chip está alimentado... verificar 
  // se as portas lógicas estão operacionais
  for(int i=0; i<nportas; i++){
    //Teste
    digitalWrite(entradas1[i],LOW);  
    digitalWrite(entradas2[i],LOW);
    if(digitalRead(saidas[i])==LOW) resultado=resultado&true;
    else resultado=resultado&false;
    
 
    digitalWrite(entradas1[i],LOW); 
    digitalWrite(entradas2[i],HIGH); 
    if(digitalRead(saidas[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
        
 
    digitalWrite(entradas1[i],HIGH);
    digitalWrite(entradas2[i],LOW);  
    if(digitalRead(saidas[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
     
    digitalWrite(entradas1[i],HIGH);
    digitalWrite(entradas2[i],HIGH); 
    if(digitalRead(saidas[i])==LOW) resultado=resultado&true;
    else resultado=resultado&false;
    }
  return(resultado);  
}
//114
  bool IC74LS114(void){
  // Define as entradas, saídas e alimentação 
  bool resultado = true;
  int nportas = 2;
  int cl[1]={3};
  int ck[1]={4};
  int j[2]={5,6};
  int k[2]={7,8};
  int pre[2]={11,12};
  int Q[2]={13,14};
  int NQ[2]={15,16};
  int alimentacao[2]={9,10};
  for(int i=0;i<1;i++) pinMode(cl[i], OUTPUT); // Configura entradas
  for(int i=0;i<1;i++) pinMode(ck[i], OUTPUT); // Configura entradas
  for(int i=0;i<2;i++) pinMode(j[i], OUTPUT); // Configura entradas
  for(int i=0;i<2;i++) pinMode(k[i], OUTPUT); // Configura entradas
  for(int i=0;i<2;i++) pinMode(pre[i], OUTPUT); // Configura entradas
  for(int i=0;i<2;i++) pinMode(Q[i], INPUT);  // Configura saídas
  for(int i=0;i<2;i++) pinMode(NQ[i], INPUT);  // Configura saídas
  for(int i=0;i<2;i++) pinMode(alimentacao[i], OUTPUT); //Configura alimentação
  digitalWrite(alimentacao[0], LOW);  // GROUND
  digitalWrite(alimentacao[1], HIGH); // +VCC
  // As entradas e saídas estão configuradas e o chip está alimentado... verificar 
  // se as portas lógicas estão operacionais
  for(int i=0; i<nportas; i++){
    //Teste
    digitalWrite(pre[i],LOW);
    digitalWrite(cl[i],HIGH); 
    if(digitalRead(Q[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
    if(digitalRead(NQ[i])==LOW) resultado=resultado&true;
    else resultado=resultado&false;

    digitalWrite(pre[i],HIGH);
    digitalWrite(cl[i],LOW); 
    if(digitalRead(Q[i])==LOW) resultado=resultado&true;
    else resultado=resultado&false;
    if(digitalRead(NQ[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;

    digitalWrite(pre[i],LOW);
    digitalWrite(cl[i],LOW); 
    if(digitalRead(Q[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
    if(digitalRead(NQ[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;

    digitalWrite(pre[i],HIGH);
    digitalWrite(cl[i],HIGH);
    pulseIn(ck[i],LOW);
    digitalWrite(j[i],LOW);
    digitalWrite(k[i],LOW);
    if(digitalRead(Q[i])) resultado=resultado&true;
    else resultado=resultado&false;
    if(digitalRead(NQ[i])) resultado=resultado&true;
    else resultado=resultado&false;

    digitalWrite(pre[i],HIGH);
    digitalWrite(cl[i],HIGH);
    pulseIn(ck[i],LOW);
    digitalWrite(j[i],HIGH);
    digitalWrite(k[i],LOW);
    if(digitalRead(Q[i])==HIGH) resultado=resultado&true;
    else resultado=resultado&false;
    if(digitalRead(NQ[i])==LOW) resultado=resultado&true;
    else resultado=resultado&false;

    digitalWrite(pre[i],HIGH);
    digitalWrite(cl[i],HIGH);
    pulseIn(ck[i],LOW);
    digitalWrite(j[i],LOW);
    digitalWrite(k[i],HIGH);
    if(digitalRead(Q[i]== LOW)) resultado=resultado&true;
    else resultado=resultado&false;
    if(digitalRead(NQ[i]== HIGH)) resultado=resultado&true;
    else resultado=resultado&false;

    digitalWrite(pre[i],HIGH);
    digitalWrite(cl[i],HIGH);
    pulseIn(ck[i],LOW);
    digitalWrite(j[i],HIGH);
    digitalWrite(k[i],HIGH);
    if(digitalRead(Q[i])) resultado=resultado&true;
    else resultado=resultado&false;
    if(digitalRead(NQ[i])) resultado=resultado&true;
    else resultado=resultado&false;

    digitalWrite(pre[i],HIGH);
    digitalWrite(cl[i],HIGH);
    digitalWrite(ck[i],HIGH);
    if(digitalRead(Q[i])) resultado=resultado&true;
    else resultado=resultado&false;
    if(digitalRead(NQ[i])) resultado=resultado&true;
    else resultado=resultado&false;
    }
  return(resultado);  
} 
