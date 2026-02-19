
#include <stdio.h>
    int main(){
        int i,n,cpt;
      do{
        printf("saisir un entier");
        scanf("%d",&n);
      } while(n<0);
      cpt=0;
      for(i=1;i<10;i++){
        if(n%i==0){
            cpt++;
        }

      }
      if(cpt==2){
        printf(" le nombre de %d est premier",cpt);
      }
    else{
        printf(" le nombre de %d n'est pas premier",cpt);
    }

  return 0;
    }

