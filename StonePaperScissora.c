#include <stdio.h>
#include <stdlib.h>
#include<time.h>
//incomplete
//incomplete
//incomplete
int gr (int n)
{
    srand(time(NULL));//srand takes seed as an input and is defind inside stdlib.h
    return rand() % n;
    }
    int greater(char c1, char c2)
    {
           //returns 1 if c1>c2, and 0 otherwise. If c1==c2 it will return -1
           if(c1==c2)
           {
               return -1;
           }
    if(c1=='r' && c2 == 's')
    {
        return 1;
    }
    else if (c1 == 's' && c2 == 'p')
    {
        return 1;
    }
    else if (c1 == 'p' && c2 == 'r')
    {
        return 1;
    }
    else{return 0;}
    }
int main ()
{
    int ps = 0, cs = 0, temp;
    char pc, cc;
    char dict[] = {'r','p','s'};
    system("cls");
    printf("Welcome to the Game\n");
    _sleep(300);
    for(int i = 0; i<3; i++)
    {
        //Player 1's input
        _sleep(1000);
    printf("Player's Turn:\n");
    printf("choose 1 for rock, choose 2 for paper, choose 3 for scissors\n");
    scanf("%d",&temp);
    getchar();
    pc = dict[temp-1];
    _sleep(1000);
    printf("you chose %c\n\n",pc);
    
    
    //CPU's Input
    _sleep(300);
    printf("computer's turn:\n");
    printf("\n Computing is Thinking......\n");
    _sleep(3000);
    temp = (gr(3)+1);
    cc = dict[temp-1];
    printf("\ncpu chose %c\n\n",cc);


    //compare the scores
    if (greater(cc, pc) == 1)
    {
        cs += 1;
        _sleep(300);
        printf("CPU got it.\n\n");
    }
    else if(greater(cc,pc) == 0)
    {
        ps += 1;
        _sleep(300);
        printf("you got it.\n\n");
    }
    else{
        _sleep(300);
        printf("lol! noone got it.\n\n");}
    
    }
    
if(ps>cs)
{  _sleep(600);
    printf("you won the game\n");
}
else if(ps>cs)
{_sleep(600);
    printf("cpu won the game\n");
}
else
{_sleep(600);
    printf("It's Draw.\n");
}
    
    return 0;
}