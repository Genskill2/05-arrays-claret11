/* Enter your solutions in this file */
#include <stdio.h>
float average(int x[], int n){
   float sum=0.0;
   float avg;
   for (int i=0;i<n;i++){
     sum+=x[i];}
   avg= sum/n;
   return avg;
 }


 int factors(int num, int prf[])
{
    int temp=num;
    int i=0;
    int pf[]={2,3,5,7,9,11,13,17,19};
    int prno=(int)(sizeof(pf)/sizeof(int));
    for(;temp!=1;i++)
    {
        for(int j=0;j<prno;j++)
        {
            if((temp%pf[j])==0)
            {
                prf[i]=pf[j];
                temp/=pf[j];
                break;
            }
            else
            {
                continue;
            }
        }
    }
    return i;
}


int max(int x[], int n){
  int max=x[0];
  for (int i=0;i<n;i++){
    if (x[i]>max)
      max=x[i];
  }return max;}


 int min (int x[], int n){
  int min=x[0];
  for (int i=0;i<n;i++){
    if (x[i]<min)
      min=x[i];
  }return min;}



 int mode(int x[], int n){
   int count[11];
   for (int i=0;i<11;i++)
     count[i]=0;
   
   for (int i=0;i<n;i++){
     count[x[i]]++;
   }
   int max=count[0];
   int mode;
   for (int i=0;i<11;i++){
     if (count[i]>max){
       max=count[i];
       mode=i;
     }
   }
   return mode;
 }
