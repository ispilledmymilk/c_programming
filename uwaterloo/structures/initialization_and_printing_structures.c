#include <stdio.h>

struct tod{
    int hours;
    int minutes;
};

void todprint(struct tod when){
    printf("%0.2d : %0.2d\n", when.hours, when.minutes);
}

int main(){
    struct tod now = {16, 50};
    struct tod later = {.hours = 18};
    todprint(now);
    todprint(later);
    later.minutes = 1;
    todprint(later);

}

