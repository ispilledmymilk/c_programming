#include <stdio.h>

struct card{
    const char *face;
    const char *suit;
};

int main(){
    struct card c1 = {"Ace", "Hearts"};
    
    struct card *c2 = &c1;
    
    printf("%s of %s\n", c1.face, c1.suit);
    printf("%s of %s\n", c2->face, c2->suit);
    printf("%s of %s\n", (*c2).face, (*c2).suit);
}
