//q3x
//
 #include<stdio.h>
int main(){
    int i,even=0,odd=0,num,sum_even=0,sum_odd=0;

   // printf(" enter a number");
    
    for(i=0;i<=10;i++){
        printf("enter number");
        scanf("%d",&num);

        if(i%2==0){
            //printf(" even number\n");
            even++;
            
            sum_even+= num;
        }
        else{
            //printf(" odd number\n");
            odd++;
            sum_odd+= num;
        }
    }
    printf("total even number:%d\n", even);
    printf("total odd number :%d\n", odd);
    printf("sum of even number:%d\n",sum_even);
    printf("sum of odd number:%d\n", sum_odd);
    return 0;
}
