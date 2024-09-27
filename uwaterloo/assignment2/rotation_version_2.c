void rotation(int w){
  
   int i, j ,k, l;
   int m = 0;
   int x = 1;
   int incre1 = 0;
   int decre1 = 0;
   
   
  
   while(x <= w){
       
       for(i = m + 1; i < w - 1 + incre1; i+=(w - 1)){
           printf("%d ", i);
       }
       
       for(j = i; j <= w*w + 1; j+=2*w){
           printf("%d ", j);
       }
       printf("\n");
      
       for(k = j + 1; k > w*2; k-=w){
           printf("%d ", k);
       }
       
       //printf("\n");
       
       for(l = k + 1 + 2*incre1; l < w; l++){
           printf("%d ", l);
           m = l;
        }
        
       x++;
       incre1 += w - 1;
       decre1 += w + 1;
       
     
   }
   if (w % 2 != 0) {
       printf("%d ", w * w / 2 + 1);
   }
   printf("\n");
}
