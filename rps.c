#include <stdio.h>
#include <stdlib.h>




int main{
  int Brukervalg;
  int Datavalg;
  int numscan;
  char spillmer;
  srand(time(NULL));

  spillmer = 'j';

  do{
    printf("velg en av; stein(1), saks(2) eller papir(3)")
    numscan = scanf("%d, &brukervalg");

    if(numscan !=1){
      printf("skjønte ikke valget ditt\n");
      scanf("%*[^\n]s");
      continue;

    }
    if(brukervalg<3 || brukervalg<1){
      printf("ikke gyldig tall");
      continue;
    }
    if brukervalg==datavalg){
      printf("uavgjort")
    }else {
      if (brukervalg == STEIN && datavalg == SAKS){
        printf("du vant! (stein slår saks)");
      }else if(brukevalg == STEIN && datavalg == PAPIR){
        printf("data vant! (Papir slår stein)");
      }else if(brukevalg == SAKS && datavalg == STEIN){
        printf("data vant! (Stein slår saks)");
      }else if(brukevalg == SAKS && datavalg == PAPIR){
      printf("du vant! (Saks slår Papir)");
      }else if(brukevalg == PAPIR && datavalg == STEIN){
      printf("du vant! (Papir slår Stein)");
      }else if(brukevalg == PAPIR && datavalg == SAKS){
      printf("data vant! (Stein slår saks)");
      }

    printf("spille mer?")
    scanf("\n%c",&spillmer)
  }while(while spillmer == 'j')
}                                                                                                                                                                                                                                                                                                                                                                                                          
