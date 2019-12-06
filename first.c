#include<stdio.h>
int main()
{
  int n,arr[10],c=0;
  printf("\nEnter the number of elements ");
  scanf("%d",&n);
  printf("\n Enter the elements ");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;(j+1)<n;j++)
    {
if((arr[i]+arr[j]+arr[j+1])==0)
{
  c++;
printf("\n %d  %d  %d  Triplet exist  ",arr[i],arr[j],arr[j+1]);
    }
  }
}
  if(c==0)
  printf("\n Triplet does not exist ");

}
