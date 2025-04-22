#include <stdio.h>

// movimentação da torre usando recursividade 

void Movertorre(int casas){
  if (casas > 0)
  {
    printf("Direita\n");
    Movertorre(casas - 1);
  }
  
}


// Função recursiva com loops aninhados para o Bispo (Cima Direita)
void MoverBispo(int casas) {
if (casas > 0)
  for (int cima = 0; cima < 1 ; cima++){ //loop externo
   for (int direita = 0; direita < 1; direita++){ //loop interno 
  printf("cima");
  printf("-direita\n");
    MoverBispo(casas -1);
}}}


//movimento da rainha usando recursividade


void MoverRainha(int casas){
  if (casas > 0)
  {
    printf("esquerda\n");
    MoverRainha(casas - 1);
  }
}

int main(){
  printf("TORRE\n");
  Movertorre(5);
  printf("\n");

  printf("BISPO\n");
  MoverBispo(5);
  printf("\n");

  printf("RAINHA\n");
  MoverRainha(8);
  printf("\n");

  // movimentação do cavalo 
  

  
  printf("CAVALO\n");

  int movimentos = 1; // Quantas vezes o cavalo vai fazer esse "L"
  printf("Movimento do Cavalo:\n");

  for (int i = 0; i < movimentos; i++) {
      int Cima = 0;

      while (Cima < 3) { // intencionalmente indo até 3 para controle com break
          if (Cima == 2) {
              Cima++; // força saída do loop
              break;
          }

          printf("Cima\n");
          Cima++;

         
          if (Cima < 0) {
              continue;
          }
      }

      for (int j = 0; j < 2; j++) {
          if (j == 1) {
              printf("Direita\n");
              break;
          }
      }
  }





  return 0;

}
