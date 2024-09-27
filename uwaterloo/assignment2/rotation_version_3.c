void rotation(int w){
    int aleft = 1;
    int aright = w;
    int bleft = (w - 1) * w + 1;
    int bright = w * w;
    
    int counter = w - 1;
    
    
        
    while(aleft > 0 && aleft != aright){
        int i = 0;
            
        while (i < counter){
            printf("%d ", aleft + i);
            printf("%d ", aright + (i * w));
            printf("%d ", bright - i);
            printf("%d ", bleft - (w * i));
            i++;
        }
            
        aleft = aleft + w + 1;
        bleft = bleft - w + 1;
        aright = aright + w - 1;
        bright =  bright - w - 1;
        counter -= 2;
        
        
        
        
        
    }
    
    if(w % 2 != 0){
        printf("%d", aright);
    }
    printf("\n");

}
