/* Your code are here */
#include <stdio.h>
#include <string.h>

struct student{
  char name[100];
  double weight;
  double height;
  double BMI;
};

double checkbmi(struct student);

int main(){
  int i, n, o=0;
  double k;
  scanf("%d", &n);
  struct student list_student[n];
  for(i=0; i<n; i++){
    scanf("%s", list_student[i].name);
    scanf("%lf", &list_student[i].weight);
    scanf("%lf", &list_student[i].height);
    k = checkbmi(list_student[i]);
    if( k < 18.5){
      o++;
      printf("%s is underweight: w=%.2f, h=%.2f, bmi=%.2f\n",
      list_student[i].name, list_student[i].weight, list_student[i].height, k);
    }
  }if(o!=0){
    return 0;
  }else{
    printf("No underweight subjects");
  }return 0;
}

double checkbmi(struct student s){
  s.BMI= s.weight/(s.height*s.height);
  return s.BMI;
}