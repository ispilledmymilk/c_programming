#include <stdio.h>
#define responses 20
#define frequency 6

int main(){
    int array[responses] = {0};
    int freq[frequency] = {0};
    
    for(size_t i=0; i<responses; ++i){
        printf("enter element %zu: ", i);
        scanf("%d", &array[i]);
        
        switch(array[i]){
            case 1:
            ++freq[1];
            break;
            
            case 2:
            ++freq[2];
            break;
            
            case 3:
            ++freq[3];
            break;
            
            case 4:
            ++freq[4];
            break;
            
            case 5:
            ++freq[5];
            break;
            
        }
        
    }
    for(size_t j = 0; j<frequency; ++j){
            printf("%d\n", freq[j]);
        }
}
