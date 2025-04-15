#include <stdio.h>

int main(){

  int i = 0;
  


   

    // movimentação da torre usando while 
    while (i < 5)
    {
     printf("direita\n");
      i++;
        
    }

    (i -= 5);

    
    do
    {
      printf("cima direita\n");
      i++;
    } while (i < 5);
    
    
    


    for ( i = 0; i < 8; i++)
    {
      printf("esquerda\n");
    }
    


    return 0;

}
