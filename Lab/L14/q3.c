#include <stdio.h>

struct Movie{
  int ID;
  char name[100];
  double Income;
  int d, m, y;
};


void swap(struct Movie *m1, struct Movie *m2)
{   /* --- Do not modify swap function --- 
    Example use: swap(&movieA, &movieB); */ 
    struct Movie m = *m1;
    *m1 = *m2;
    *m2 = m;
}

int main(){
    int n;
    scanf("%d", &n);
    // Get movie information
    int i=0;
    double avg=0;
    struct Movie a[n], b[n];
    for(i=0; i<n; i++){
      scanf("%d %s %lf %d %d %d",
      &a[i].ID, a[i].name, &a[i].Income, &a[i].d, &a[i].m, &a[i].y);
      avg = avg + a[i].Income;
    }avg = avg/n;
    printf("%.2f\n", avg);
    int k=0;
    for(i=0; i<n; i++){
      if(a[i].Income > avg){
        b[k] = a[i];
        k++;
      }
    }
    // Sort the movie list by income
    int l=0;
    for(i=0; i<k; i++){
      for(l=i; l<k; l++){
        if((b[i].Income < b[l].Income)){
          swap(&b[i], &b[l]);
        }
      }
    }
    // Print the movie with income above average
    for(i=0; i<k; i++){
      printf("#%d:%s (%d-%d-%d) $%.2fM\n",b[i].ID, b[i].name,
      b[i].y, b[i].m, b[i].d, b[i].Income);
    }
}