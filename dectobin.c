#include <stdio.h>
#include <time.h>

clock_t start, end;
double new=0,old=0;


double timetook(clock_t start,clock_t end){
    double time_took = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Time taken for fun %f seconds\n",time_took);
    return time_took;
}

void decToBin(long long int n,int bin[]){
    long long int start = 4294967296;
    int i=0;
    while(start>0){
        bin[i]=(start & n)==0 ? 0 : 1;
        start>>=1; 
        i++;
    }
}

void decToBinOld(long long int n,int bin[]){
    int i=0,j;
    while(n>0){
        bin[i]=n%2;
        n/=2;
        i++;
    }
}

int main(){
    long long int n;
    int bin[32]={0};
    printf("Enter the number: ");
    scanf("%lld",&n);
    for(int j=0;j<32;j++){
        printf("\n____________LOOP %d____________\n",j+1);
        start = clock();
        for(long long int i=0;i<320000;i++){
            decToBin(n,bin);
        }
        end = clock();
        new+=timetook(start,end);

        start = clock();
        for(long long int i=0;i<320000;i++){
            decToBinOld(n,bin);
        }
        end = clock();
        old+=timetook(start,end);
    }

    printf("%f %f\n",new,old);

    return 0;
}



