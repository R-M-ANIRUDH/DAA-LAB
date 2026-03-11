#include<stdio.h>
struct item{
    int weight;
    int profit;
    float ratio;
};
void sort (struct item itm[], int n)
{
    struct item temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(itm[j].ratio<itm[j+1].ratio)
            {
                temp=itm[j];
                itm[j]=itm[j+1];
                itm[j+1]=temp;
            }
    }
    }
    printf("items sorted by value/weight ratio:\n");
    for (int i=0;i<n;i++)
    {
      printf("item %d;weight=%d") ; 
    }
}
int main()
{
    int n;
    int capacity;
printf("enter the number of items:");
scanf("%d",&n);
struct item itm[n];
for(int i=0;i<n;i++)
{
    printf("enter the item %d weight profit",i+1);
    scanf("%d %d",&itm[i].weight,&itm[i].profit);
    itm[i].ratio=itm[i].profit/itm[i].weight;
}
printf("enter knapsack capacity:");
scanf("%f",&capacity);
sort(itm,n);
float totalProfit=0.0;
for (int i=0;i<n;i++)
{
    if(capacity>=itm[i].weight)
    {
        totalProfit +=itm[i].profit;
        capacity-= itm[i].weight;
        
    }
    else
    {
        totalProfit +=itm[i].profit;
        break;
    }
}
        printf("Maximumn profit=%2f\n",totalProfit);
}    







