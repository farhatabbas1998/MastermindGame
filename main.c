#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 1
#define NUM_RANGE 16
#define	MAX_NUMBERS 15
void BuildFreqArray(int nums[], int freq[], int arry_size);
void PrintHistogram(int freq[], int arry_size);
int aver(int w,  int mastermindgame);
void getData(int nums[], int arry_size);
void file();
int anotherhistrogram(int aa, int bb, int cc, int dd, int ee, int ff, int gg, int hh, int ii, int jj, int kk, int ll, int mm, int nn, int oo, int pp);
int aa,bb,cc,dd,ee,ff,gg,hh,ii,kk,ll,mm,nn,oo,pp,qq,jj;
int atttempts(int u, int n, int attepts);
int unatttempts(int u, int n, int attepts);
int GetRandomNumberCount(int numberCount);
int GetGameDifficulty(int difficultyLevel);
int histrogram(int w, int n, int mastermindgame);
int winratio(int w, int n, int mastermindgame);
int loseratio(int w, int n, int mastermindgame);
int nums[15];
int digit[15],user[100];
int mastermindgame,z,attempts,guess,c,w,l,j,m,h,number,see,d,attept,gg,used,numbers;

float winrate,loserate,averagetries,v,b,y;
char s,str[100000];
char option;
int mean(int x);
int main()
{
int n=0,a=0;
FILE *mastermind;

mastermind = fopen("mastermindgame.txt","w");
printf("=============================================================================\n");
printf("=============================================================================\n");

printf("-----------------------------------------------------------------------------\n");
printf("File Names: MasterMindgame.txt \n");
printf("Hashmani Farhat Abbas ID:25647.\n");
printf("Inputs : Numbers\n");
printf("Outputs: Numbers\n");
printf("=============================================================================\n");


printf("\t\tWELCOME TO THE MASTERMIND GAME!!!! GOODLUCK!!!\n");
printf("\t\t\t\tLETS START THE GAME\n ");
	int freq_array[NUM_RANGE] = {0};
	int numbers[MAX_NUMBERS];
	getData(numbers, MAX_NUMBERS);
    	BuildFreqArray(numbers, freq_array, MAX_NUMBERS);
    	PrintHistogram(freq_array, NUM_RANGE);
fprintf(mastermind,"All Random number Generated: ");
 do{	
	number=GetRandomNumberCount(n);
	attempts=GetGameDifficulty(a);
	gg=attempts+gg;
	srand(time(NULL));  
	for (c=0; c<number; c++)
		{
		digit[c] = rand()%15+1;
		for(j=0; j<c; j++){
			if(digit[j]==digit[c])
				--c;
			else continue;
			}
	}
	for(c=0; c<number; c++) 
		printf("|%d|  ", digit[c]);
	for(c=0; c<number; c++) 	
	fprintf(mastermind,"|%d| ",digit[c]);

	fprintf(mastermind," ||  ");
	
	for(m=0; m<number; m++) {
		printf("\n\nEnter your WISE guess please: ");
		scanf("%d",&guess);
	

		user[z] = guess;	
		z++;	
		see = guess - digit[m];
		if(see == 0)
			printf("YOU CHOOSE WISELY! ");
			
		else if((see <=2) && (see>=-2)) {
	 		printf("ALMOST NEAR!!! YOU DIDNT CHOOSE WISELY");
			m--;
			attempts--;			
		}
		else {
			printf("FAR!!!! YOU DIDN'T CHOOSE WISELY");
			m--;
			attempts--;
		}
			printf("\nYOU GOT %d WISELY CHANCES LEFT",attempts);			
		if (attempts == 0)
			break;
	}	
	if (attempts == 0){
		printf("\n\nSorry you didn't choose WISELY!!! You lost this round!!!\n");
		l++;}
	else {
	printf("\n\nCongrates you choose WISELY!!! You won this round!!!\n");
	printf("WOW!! you still got %d tries left. Nice!!", attempts);
	w++;}
	attept=attempts+attept;
	mastermindgame++;

	printf("\n\n\tSelect the following option\n");
	printf("\tPress 's' for for another round\n");
	printf("\tpress any other key to check full round statistics: ");
	scanf(" %c", &option);
	if(option!='s') 
	break;
	} while('s');

	fprintf(mastermind, "\nAll Round Player Guesses: ");
		
	for(c=0; c<z; c++)
		
	fprintf(mastermind," -%d- ", user[c]);
	
	fprintf(mastermind,"\n\n");
	used=gg-attept;
	fprintf(mastermind,"\t\t\tGame Round Statistics");

	fprintf(mastermind,"\nTotal Game Played= %d",mastermindgame);	
	fprintf(mastermind,"\nYou Have Won %d Games",w);           
	fprintf(mastermind,"\nYou Have Lost %d Game",l);
 	histrogram(w,l,mastermindgame);	
	winrate=winratio(w,l,mastermindgame);
	y=aver(used,mastermindgame);
	loserate=loseratio(w,l,mastermindgame);
	v=atttempts(used,attept,gg);
	b=unatttempts(used,attept,gg);
	fprintf(mastermind,"\nYou Have %.2f Percent Win Ratio ",winrate);
	fprintf(mastermind,"\nYou Have %.2f Percent Lose Ratio ",loserate);	
	fprintf(mastermind, "\nPrevious Match Attempt Left: %d", attempts);
	fprintf(mastermind, "\nTotal Chances Left: %d", attept);
	fprintf(mastermind, "\nTotal Chances used: %d", used);
	fprintf(mastermind, "\nTotal Chances Got: %d", gg);
	fprintf(mastermind, "\nAverge Chances Left: %.2f", v);
	fprintf(mastermind, "\nAverge Chances used: %.2f", b);
	y=used/mastermindgame;
	printf("average tries: %f", y);
	fprintf(mastermind,"\naverage tries: %.2f", y);
	fprintf(mastermind,"\n\n\n");	
	fclose(mastermind);	
 
	file();{


}
   aa = rand() % 15 + 1;
    bb = rand() % 15 + 1;
    cc = rand() % 15 + 1;
    dd = rand() % 15 + 1;
    ee = rand() % 15 + 1;
    ff = rand() % 15 + 1;
    gg = rand() % 15 + 1;
    hh = rand() % 15 + 1;
    ii = rand() % 15 + 1;
    jj = rand() % 15 + 1;
    kk = rand() % 15 + 1;
    ll = rand() % 15 + 1;
    mm = rand() % 15 + 1;
    nn = rand() % 15 + 1;
    oo = rand() % 15 + 1;
    pp = rand() % 15 + 1;
    qq = rand() % 15 + 1;

	//anotherhistrogram(aa,bb,cc,dd,ee,ff,gg,hh,ii,kk,ll,mm,nn,oo,pp,qq);
	}	


int GetRandomNumberCount(int numberCount)
    {
   
        int number = 0;
        do
        {
            
            
                printf("\nPlease enter minimum 4 length digit number: ");
                scanf("%d", &number);
		printf("\n");	             
            
            if (number < 4)
            {
                printf("You must pick a number above 4. Choose again. ");
		printf("\n");            
            } else break;
        } while (number <= 4);

        return number;

}
 int GetGameDifficulty(int difficultyLevel)
    {
        int difficulty = 0, chances;

        do
        {
             
                printf("\n1:Easy (10 tries)\n2:Medium (5 tries)\n3:Hard (3 tries)\nChoose the level: ");
		scanf("%d",&difficulty);               
		printf("\n");
		if(difficulty==1)
  		chances = 10;
		if(difficulty==2)
		chances = 5;
		if(difficulty == 3)
 		chances=3;
		if(difficulty !=1 && difficulty!= 2 && difficulty!=3) 
 		printf("Incorrect!!! Please try again.");
		}while (difficulty !=1 && difficulty!= 2 && difficulty!=3);
     		   return chances;
    }
int histrogram(int w, int l, int mastermindgame)
   {   
	printf("\n\t\t\t\tHISTROGRAM");                                                       
       int value[N];
	                                           
       int i, j, n, x;                                            
                                                               
       for (n=0; n < N; ++n)                                      
       {                                                           
                                     
          value[n] = mastermindgame;                                        
                                
       }                                                           
       printf("\n");                                           
                                                                
       printf("                     |\n");                                
       for (n = 0 ; n < N ; ++n)                                  
       {                                                           
          for (i = 1 ; i <= 2 ; i++)                              
          {                                                        
              if ( i == 2)                                           
                 printf("Total Match3s played-|");                        
              else                                                 
                 printf("                     |");
              for (j = 1 ; j <= value[n]; ++j)                     
                 printf("*"); 
              if (i == 2)                                          
                 printf("(%d)\n", value[n]);                       
              else                                                 
                 printf("\n");                                     
          }                                                        
          printf("                     |");                                 
       } 
       for (n=0; n < N; ++n)                                      
       {                                                           
                                    
          value[n] = w;                                        
                              
       }                                                           
       printf("\n");                                           
                                                               
       printf("                     |\n");                                
       for (n = 0 ; n < N ; ++n)                                  
       {                                                           
          for (i = 1 ; i <= 3 ; i++)                              
          {                                                        
              if ( i == 2)                                           
                 printf("Match3s won         -|");                        
              else                                                 
                 printf("                     |");
              for (j = 1 ; j <= value[n]; ++j)                     
                 printf("*"); 
              if (i == 2)                                          
                 printf("(%d)\n", value[n]);                       
              else                                                 
                 printf("\n");                                     
          }                                                        
          printf("                     |");                                 
       } 

       for (n=0; n < N; ++n)                                      
       {                                                           
                                   
          value[n] = l;                                                                      
       }                                                           
       printf("\n");                                           
                                                               
       printf("                     |\n");                                
       for (n = 0 ; n < N ; ++n)                                  
       {                                                           
          for (i = 1 ; i <= 3 ; i++)                              
          {                                                        
              if ( i == 2)                                           
                 printf("Match3s lost        -|");                        
              else                                                 
                 printf("                     |");
              for (j = 1 ; j <= value[n]; ++j)                     
                 printf("*"); 
              if (i == 2)                                          
                 printf("(%d)\n", value[n]);                       
              else                                                 
                 printf("\n");                                     
          }                                                        
          printf("                     |\n");                                 
       }                                                           
   }  

int aver(int w,  int mastermindgame)
   {   
	float Averagetries, divide,second,first;
	first=w;
	second=mastermindgame;
	divide = first / (float)second;
	Averagetries = divide*100;
	printf("Average tries = %.2f\n",Averagetries);	
	return Averagetries;
   }   
 
int winratio(int w, int n, int mastermindgame)
   {   
	float winratio, divide,second,first;
	first=w;
	second=mastermindgame;
	divide = first / (float)second;
	winratio = divide*100;
	printf("WIN RATIO = %.2f\n",winratio);	
	return winratio;
   }  
int loseratio(int w, int n, int mastermindgame)
   {   
	float loseratio, divide,second,first;
	first=n;
	second=mastermindgame;
	divide = first / (float)second;
	loseratio = divide*100;
	printf("LOSE RATIO = %.2f\n",loseratio);	
	return loseratio;
   }  
int atttempts(int u, int n, int attepts)
   {   
	float uratio, divide,second,first;
	first=u;
	second=attepts;
	divide = first / (float)second;
	uratio = divide*100;
	printf("average attempts used = %.2f\n",uratio);	
	return uratio;
   } 
int unatttempts(int u, int n, int attepts)
   {   
	float nratio, divide,second,first;
	first=n;
	second=attepts;
	divide = first / (float)second;
	nratio = divide*100;
	printf("average attempts not used = %.2f\n",nratio);	
	return nratio;
   } 


void file(){
    FILE *fp;

    char* mastermind = "mastermindgame.txt";
 
    fp = fopen(mastermind, "r");
    if (fp == NULL){
        printf("Could not open file %s",mastermind);
      
    }
    while (fgets(str, 100000, fp) != NULL)
        printf("%s", str);
    fclose(fp);

}

  void BuildFreqArray(int nums[], int freq[], int arry_size)
    {
    	int i;
    	for(i=0; i<arry_size; i++)
    	{
    		freq[nums[i]]++;
    	}
    	return;
    }
    void PrintHistogram(int freq[], int arry_size)
    {
    	int i, j;
    	printf("HISTROGRAM GRAPH: GENERATED NUMBERS:\n");
    	for(i=1; i<arry_size; i++)
    	{
    		printf("%2d %2d:\t",i, freq[i]);
    		for(j=0; j<freq[i]; j++)
    		{
    			printf("*");
    		}
    		printf("\n");
    	}
    	return;
    }
    void getData(int nums[], int arry_size)
    {
    	int i;

    	srand(time(NULL));
    	for(i=0; i<arry_size; i++)
    	{
    		nums[i] = rand()%15+1; 
    	}		for(j=0; j<i; j++){
			if(nums[j]==nums[i])
				--c;
			else continue;
			}
    	return;
    }
 int anotherhistrogram(int aa, int bb, int cc, int dd, int ee, int ff, int gg, int hh, int ii, int jj, int kk, int ll, int mm, int nn, int oo, int pp)
{
  int value[N];
	                                           
       int i, j, n, x;                                            
                                                               
       for (n=0; n < N; ++n)                                      
       {                                                           
                              
          value[n] = aa;                                                                  
       }                                                           
       printf("\n");                                           
                                                                
                               
       for (n = 0 ; n < N ; ++n)                                  
       {                                                           
          for (i = 1 ; i <= 2 ; i++)                              
          {                                                        
              if ( i == 2)                                           
                 printf("|");                        
              else                                                 
                 printf(" |");
              for (j = 1 ; j <= value[n]; ++j)                     
                 printf("*"); 
              if (i == 2)                                          
                 printf("(%d)\n", value[n]);                       
              else                                                 
                printf("\n");                 
          }                                                        
                                
       }
	       for (n=0; n < N; ++n)                                      
       {                                                           
                              
          value[n] = bb;                                                                  
       }                                                           
       printf("\n");                                           
                                                                
                               
       for (n = 0 ; n < N ; ++n)                                  
       {                                                           
          for (i = 1 ; i <= 2 ; i++)                              
          {                                                        
              if ( i == 2)                                           
                 printf("|");                        
              else                                                 
                 printf("|");
              for (j = 1 ; j <= value[n]; ++j)                     
                 printf("*"); 
              if (i == 2)                                          
                 printf("(%d)\n", value[n]);                       
              else                                                 
                     printf("\n");              
          }                                                        
                                
       }
       for (n=0; n < N; ++n)                                      
       {                                                           
                              
          value[n] = cc;                                                                  
       }                                                           
       printf("\n");                                           
                                                                
                               
       for (n = 0 ; n < N ; ++n)                                  
       {                                                           
          for (i = 1 ; i <= 2 ; i++)                              
          {                                                        
              if ( i == 2)                                           
                 printf("|");                        
              else                                                 
                 printf("|");
              for (j = 1 ; j <= value[n]; ++j)                     
                 printf("*"); 
              if (i == 2)                                          
                 printf("(%d)\n", value[n]);                       
              else                                                 
                  printf("\n");                 
          }                                                        
                                
       }
       for (n=0; n < N; ++n)                                      
       {                                                           
                              
          value[n] = dd;                                                                  
       }                                                           
       printf("\n");                                           
                                                                
                               
       for (n = 0 ; n < N ; ++n)                                  
       {                                                           
          for (i = 1 ; i <= 2 ; i++)                              
          {                                                        
              if ( i == 2)                                           
                 printf("|");                        
              else                                                 
                 printf("|");
              for (j = 1 ; j <= value[n]; ++j)                     
                 printf("*"); 
              if (i == 2)                                          
                 printf("(%d)\n", value[n]);                       
              else                                                 
                 printf("\n");                   
          }                                                        
                                
       }       for (n=0; n < N; ++n)                                      
       {                                                           
                              
          value[n] = ee;                                                                  
       }                                                           
       printf("\n");                                           
                                                                
                               
       for (n = 0 ; n < N ; ++n)                                  
       {                                                           
          for (i = 1 ; i <= 2 ; i++)                              
          {                                                        
              if ( i == 2)                                           
                 printf("|");                        
              else                                                 
                 printf("|");
              for (j = 1 ; j <= value[n]; ++j)                     
                 printf("*"); 
              if (i == 2)                                          
                 printf("(%d)\n", value[n]);                       
              else                                                 
                 printf("\n");                  
          }                                                        
                                
       }
       for (n=0; n < N; ++n)                                      
       {                                                           
                              
          value[n] = ff;                                                                  
       }                                                           
       printf("\n");                                           
                                                                
                               
       for (n = 0 ; n < N ; ++n)                                  
       {                                                           
          for (i = 1 ; i <= 2 ; i++)                              
          {                                                        
              if ( i == 2)                                           
                 printf("|");                        
              else                                                 
                 printf("|");
              for (j = 1 ; j <= value[n]; ++j)                     
                 printf("*"); 
              if (i == 2)                                          
                 printf("(%d)\n", value[n]);                       
              else                                                 
             printf("\n");                    
          }                                                        
                                
       }
       for (n=0; n < N; ++n)                                      
       {                                                           
                              
          value[n] = gg;                                                                  
       }                                                           
       printf("\n");                                           
                                                                
                               
       for (n = 0 ; n < N ; ++n)                                  
       {                                                           
          for (i = 1 ; i <= 2 ; i++)                              
          {                                                        
              if ( i == 2)                                           
                 printf("|");                        
              else                                                 
                 printf("|");
              for (j = 1 ; j <= value[n]; ++j)                     
                 printf("*"); 
              if (i == 2)                                          
                 printf("(%d)\n", value[n]);                       
              else                                                 
                    printf("\n");                
          }                                                        
                                
       }
       for (n=0; n < N; ++n)                                      
       {                                                           
                              
          value[n] = hh;                                                                  
       }                                                           
       printf("\n");                                           
                                                                
                               
       for (n = 0 ; n < N ; ++n)                                  
       {                                                           
          for (i = 1 ; i <= 2 ; i++)                              
          {                                                        
              if ( i == 2)                                           
                 printf("|");                        
              else                                                 
                 printf("|");
              for (j = 1 ; j <= value[n]; ++j)                     
                 printf("*"); 
              if (i == 2)                                          
                 printf("(%d)\n", value[n]);                       
              else                                                 
                   printf("\n");                
          }                                                        
                                
       }
       for (n=0; n < N; ++n)                                      
       {                                                           
                              
          value[n] = ii;                                                                  
       }                                                           
       printf("\n");                                           
                                                                
                               
       for (n = 0 ; n < N ; ++n)                                  
       {                                                           
          for (i = 1 ; i <= 2 ; i++)                              
          {                                                        
              if ( i == 2)                                           
                 printf("|");                        
              else                                                 
                 printf("|");
              for (j = 1 ; j <= value[n]; ++j)                     
                 printf("*"); 
              if (i == 2)                                          
                 printf("(%d)\n", value[n]);                       
              else                                                 
                     printf("\n");             
          }                                                        
                                
       }
       for (n=0; n < N; ++n)                                      
       {                                                           
                              
          value[n] = jj;                                                                  
       }                                                           
       printf("\n");                                           
                                                                
                               
       for (n = 0 ; n < N ; ++n)                                  
       {                                                           
          for (i = 1 ; i <= 2 ; i++)                              
          {                                                        
              if ( i == 2)                                           
                 printf("|");                        
              else                                                 
                 printf("|");
              for (j = 1 ; j <= value[n]; ++j)                     
                 printf("*"); 
              if (i == 2)                                          
                 printf("(%d)\n", value[n]);                       
              else                                                 
                     printf("\n");              
          }                                                        
                                
       }
       for (n=0; n < N; ++n)                                      
       {                                                           
                              
          value[n] = kk;                                                                  
       }                                                           
       printf("\n");                                           
                                                                
                               
       for (n = 0 ; n < N ; ++n)                                  
       {                                                           
          for (i = 1 ; i <= 2 ; i++)                              
          {                                                        
              if ( i == 2)                                           
                 printf("|");                        
              else                                                 
                 printf("|");
              for (j = 1 ; j <= value[n]; ++j)                     
                 printf("*"); 
              if (i == 2)                                          
                 printf("(%d)\n", value[n]);                       
              else                                                 
                      printf("\n");                
          }                                                        
                                
       }
       for (n=0; n < N; ++n)                                      
       {                                                           
                              
          value[n] = ll;                                                                  
       }                                                           
       printf("\n");                                           
                                                                
                               
       for (n = 0 ; n < N ; ++n)                                  
       {                                                           
          for (i = 1 ; i <= 2 ; i++)                              
          {                                                        
              if ( i == 2)                                           
                 printf("|");                        
              else                                                 
                 printf("|");
              for (j = 1 ; j <= value[n]; ++j)                     
                 printf("*"); 
              if (i == 2)                                          
                 printf("(%d)\n", value[n]);                       
              else                                                 
                    printf("\n");                    
          }                                                        
                                
       }
       for (n=0; n < N; ++n)                                      
       {                                                           
                              
          value[n] = mm;                                                                  
       }                                                           
       printf("\n");                                           
                                                                
                               
       for (n = 0 ; n < N ; ++n)                                  
       {                                                           
          for (i = 1 ; i <= 2 ; i++)                              
          {                                                        
              if ( i == 2)                                           
                 printf("|");                        
              else                                                 
                 printf("|");
              for (j = 1 ; j <= value[n]; ++j)                     
                 printf("*"); 
              if (i == 2)                                          
                 printf("(%d)\n", value[n]);                       
              else                                                 
                 printf("\n");                   
          }                                                        
                                
       }
       for (n=0; n < N; ++n)                                      
       {                                                           
                              
          value[n] = nn;                                                                  
       }                                                           
       printf("\n");                                           
                                                                
                               
       for (n = 0 ; n < N ; ++n)                                  
       {                                                           
          for (i = 1 ; i <= 2 ; i++)                              
          {                                                        
              if ( i == 2)                                           
                 printf("|");                        
              else                                                 
                 printf("|");
              for (j = 1 ; j <= value[n]; ++j)                     
                 printf("*"); 
              if (i == 2)                                          
                 printf("(%d)\n", value[n]);                       
              else                                                 
                   printf("\n");                
          }                                                        
                                
       }
	       for (n=0; n < N; ++n)                                      
       {                                                           
                              
          value[n] = oo;                                                                  
       }                                                           
       printf("\n");                                           
                                                                
                               
       for (n = 0 ; n < N ; ++n)                                  
       {                                                           
          for (i = 1 ; i <= 2 ; i++)                              
          {                                                        
              if ( i == 2)                                           
                 printf("|");                        
              else                                                 
                 printf("|");
              for (j = 1 ; j <= value[n]; ++j)                     
                 printf("*"); 
              if (i == 2)                                          
                 printf("(%d)\n", value[n]);                       
              else                                                 
                      printf("\n");                      
          }                                                        
                                
       }
       for (n=0; n < N; ++n)                                      
       {                                                           
                              
          value[n] = pp;                                                                  
       }                                                           
       printf("\n");                                           
                                                                
                               
       for (n = 0 ; n < N ; ++n)                                  
       {                                                           
          for (i = 1 ; i <= 2 ; i++)                              
          {                                                        
              if ( i == 2)                                           
                 printf("|");                        
              else                                                 
                 printf("|");
              for (j = 1 ; j <= value[n]; ++j)                     
                 printf("*"); 
              if (i == 2)                                          
                 printf("(%d)\n", value[n]);                       
              else                                                 
                     printf("\n");                           
          }                                                        
                                
       }       for (n=0; n < N; ++n)                                      
       {                                                           
                              
          value[n] = qq;                                                                  
       }                                                           
       printf("\n");                                           
                                                                
                               
       for (n = 0 ; n < N ; ++n)                                  
       {                                                           
          for (i = 1 ; i <= 2 ; i++)                              
          {                                                        
              if ( i == 2)                                           
                 printf("|");                        
              else                                                 
                 printf("|");
              for (j = 1 ; j <= value[n]; ++j)                     
                 printf("*"); 
              if (i == 2)                                          
                 printf("(%d)\n", value[n]);                       
              else                                                 
                    printf("\n");                  
          }                                                        
                                
       }

 }
  

