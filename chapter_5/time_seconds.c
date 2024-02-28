#include <stdio.h>

int time_in_sec(int hours, int minutes, int secs){
    int sec_hours = hours*60*60;
    int sec_minutes = minutes*60;
    
    int total_secs = sec_hours + sec_minutes + secs;
    
    return total_secs;
}

int main(){
    int hours = 0;
    int minutes = 0;
    int secs = 0;
    
    printf("Enter the hours, minutes and seconds:");
    scanf("%d %d %d", &hours, &minutes, &secs);
    
    printf("The seconds are %d", time_in_sec(hours, minutes, secs));
}
