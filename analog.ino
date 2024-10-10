   void analogLine(){
      if (sleft <=white && scenterleft <=white && scenterright <=white && sright <=white){
        foward();
        Serial.println ("tudo branco");
      }
      else if (sleft <=black && scenterleft <=black && scenterright <=black && sright <=black){
        foward();
        Serial.println ("tudo preto");
      }
      else if (sleft <=white && scenterleft >=black && scenterright >=black && sright <=white){
        foward();
        Serial.println ("preto no centro");
      }
      else if (sleft <= white && scenterleft <= white && scenterright >= black && sright <= white){
        RightDiagonal();
        Serial.println ("preto centro direita");
      }
      else if (sleft <= white && scenterleft >= black && scenterright <= white && sright <= white){
        LeftDiagonal();
        Serial.println ("preto centro esquerda");
      }
      else if (sleft <= white && scenterleft <= white && scenterright >= black && sright >= black){
        RightSpinningFast();
        delay(30);
        Serial.println ("branco esquerda");
      }
      else if (sleft >=black && scenterleft >=black && scenterright <=white && sright <=white){
        LeftSpinningFast();
        delay(30);
        Serial.println ("branco direita");
      }
      else if (sleft <=white && scenterleft <=white && scenterright >=black && sright >=black){
        RightDiagonal();
        Serial.println ("preto centrodireita & direita");
      }
      else if (sleft >= black && scenterleft >=black && scenterright <=white && sright <=white){
        LeftDiagonal();
        Serial.println ("preto centroesquerda esquerda");
      }

      else if (sleft >= black && scenterleft <= white && scenterright <= white && sright <= white){
         LeftSpinningSlow();
         Serial.println("preto só esquerda");
      }

      else if (sleft <= white && scenterleft <= white && scenterright <= white && sright >= black){
         RightSpinningSlow();
         Serial.println("preto só direita");
      }
      else {    
       foward(); 
       Serial.println ("else");

        }

   }