#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int finish (int b,int lastout)
{
    if(b>100)
    {
       b=b-lastout;
       return b;
    }
    else if(b==100)
    {
        printf("!!!!!!!!!!!Congrulations !!!!!!!!!!");
        return b;
    }
}
int move()
{
    int no;
    srand(time(0));
    no=rand()%6 +1;
    return no;

}
int newpos(int a)
{
    if(a==3)
    a=21;
    else if(a==16)
    a=26;
    else if(a==8)
    a=55;
    else if(a==32)
    a=48;
    else if(a==37)
    a=76;
    else if(a==50)
    a=70;
    else if(a==64)
    a=83;
    else if(a==77)
    a=95;
    else if(a==80)
    a=99;
    else if(a==98)
    a=58;
    else if(a==96)
    a=84;
    else if(a==94)
    a=73;
    else if(a==90)
    a=72;
    else if(a==86)
    a=54;
    else if(a==69)
    a=12;
    else if(a==61)
    a=59;
    else if(a==56)
    a=25;
    else if(a==43)
    a=38;
    else if(a==23)
    a=5;
    return a;
}
int main()
{
    int pos1=0,pos2=0,outcome,chance;
    printf("For move of first player press 1 and for move of 2nd player press 2\n\n\n");
    while((pos1!=100 && pos2!=100) && pos1<100 && pos2<100)
    {
        printf("Move of 1st player\n");
        scanf("%d",&chance);
        if(chance==1)
    {
        outcome=move();
        printf("%d\n",outcome);
        if(pos1==0 && outcome==1)
        {
            pos1=pos1+1;
        }
        else if(pos1!=0 )
          {
            pos1=pos1+outcome;
            if(outcome==6)
            {   
                printf("Again move of 1st player\n");
                scanf("%d",&chance);
                if(chance==1)
                {
                    outcome=move();
                     printf("%d\n",outcome);
                     pos1=pos1+outcome;
                    if(outcome==6)
                    {   
                        printf("Again move of 1st player\n");
                        scanf("%d",&chance);
                        if(chance==1)
                        {
                            outcome=move();
                             printf("%d\n",outcome);
                            pos1=pos1+outcome;
                            if(outcome==6)
                            {
                                pos1=pos1-18;
                                printf("three consecutive sixes\n");
                            }
                        }

                    }
                }
            }
            
        }
           pos1=finish(pos1,outcome);
           pos1= newpos(pos1);
           printf("                                                                                                 Position of 1st player is %d\n",pos1);
           if(pos1==pos2 && pos2!=0)
           {
               pos2=0;
               printf("1stplayer killed 2nd player at %d so now position of 2nd player is 0 and press 1 again move for 1st player \n\n\n",pos1);
               scanf("%d",&chance);
               if(chance==1)
               {
                   outcome=move();
                   printf("%d\n",outcome);
                   pos1=pos1+outcome;
                   pos1=newpos(pos1);
                    printf("                                                                                                 Position of 1st player is %d\n\n\n",pos1);
               }
           }
    }

         printf("Move of 2nd player\n");
         scanf("%d",&chance);
        if(chance==2)
    {
        outcome=move();
        printf("%d\n",outcome);
        if(pos2==0 && outcome==1)
        {
            pos2++;
        }
        else if(pos2!=0 )
        {
            pos2=pos2+outcome;
            if(outcome==6)
            {   
                printf("Again move of 2nd player\n");
                scanf("%d",&chance);
                if(chance==2)
                {
                    outcome=move();
                     printf("%d\n",outcome);
                     pos2=pos2+outcome;
                    if(outcome==6)
                    {   
                        printf("Again move of 2nd player\n");
                        scanf("%d",&chance);
                        if(chance==2)
                        {
                            outcome=move();
                             printf("%d\n",outcome);
                            pos2=pos2+outcome;
                            if(outcome==6)
                            {
                                pos2=pos2-18;
                                printf("three consecutive sixes\n\n\n");
                            }
                        }

                    }
                }
            }
        }
           pos2=finish(pos2,outcome);
           pos2= newpos(pos2);
           printf("                                                                                                 Position of 2nd player is %d\n\n\n",pos2);
           if(pos1==pos2 && pos2!=0)
           {
               pos1=0;
               printf("2nd player killed 1st player at %d so now position of 1st player is 0 and press 2 again move for 2nd player \n\n\n",pos2);
               scanf("%d",&chance);
               if(chance==2)
               {
                   outcome=move();
                   printf("%d\n",outcome);
                   pos2=pos2+outcome;
                   pos2=newpos(pos2);
                    printf("                                                                                                 Position of 2nd player is %d\n\n\n",pos2);
               }
           }
    }   


    }
    printf("Match has been finished\n");
    return 0;
}