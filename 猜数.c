#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char *argv[]) {

    srand(time(0));
 

	int client , n;
    n = 0;
    client = 0;
    int num = rand()%100+1;

    
    do{
        printf("猜:\n");

        scanf("%d", &client);
        if(client < num){
            printf("小了");
        }
        else{
            printf("大了");
        }
        n++;
    
    }while(client != num);
    printf("猜中了");
    printf("一共猜了%d次", n);

    

	
	return 0;
}


//do while用于无论如何必须要执行一次的循环 刚开始用的是while 以及把猜数scanf
//放在了循环外面



