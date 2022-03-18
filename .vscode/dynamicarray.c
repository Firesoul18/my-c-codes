 #include <stdio.h>
 #include<stdlib.h>

//  int func(int x)
//  {
//      if(x==9)
//      return 0;
//      else
//      func(x+1);
//      return printf("%d\n",x);
 //}
 int main ()
 {
     int *ptr;
     ptr=(int *)malloc(10*sizeof(int));
     ptr[0]=7;
     ptr[1]=1;
     ptr[3]=4;
     ptr[2]=5;
     ptr[4]=5;
     ptr[5]=6;
     ptr[7]=35;
     ptr[8]=53;
     ptr[9]=43;
     ptr[6]=88;
   

 
     for(int i =0; i<10; i++)
     {
         printf("%d\n",ptr[i]);
     }

         int *p;
     p=(int *)malloc(777*sizeof(int));
     if(p==NULL)
     free(ptr);
     ptr=NULL;
     printf("________________________\n");
    //  func(4);
    exit(1);
 }