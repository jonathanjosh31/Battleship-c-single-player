#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
void loading()
{
	int li,lj;
	   for(li=0;li<=13;li++)
	{
		printf("\n\n\n\n\n\n\n\n\n\n");
		printf("                                ");
		printf("          LOADING                  \n\n\n\n");
		for(lj=0;lj<=li;lj++)
			printf("    ");
		printf("  ****                  \n");
		for(lj=0;lj<=li;lj++)
			printf("    ");
		printf("  *  *    ***               \n");
		for(lj=0;lj<=li;lj++)
			printf("    ");
		printf("  *  *    * *             \n");
		for(lj=0;lj<=li;lj++)
			printf("    ");
		printf("*******************      \n");
		for(lj=0;lj<=li;lj++)
			printf("    ");
		printf(" *               *         \n");
		for(lj=0;lj<=li;lj++)
			printf("    ");
		printf("  ***************            \n");
		delay(190);
		system ("cls");
	}	//first we will give the display and the instructions for the game

}
void resulthit()
{
		            printf("----------------------------------------\n");
					printf("      The missile was a perfect HIT     \n");
					printf("----------------------------------------\n\n");
}
void resultmiss()
{
                	printf("-----------------------------------------------\n");
					printf("      The missile just missed the target       \n");
					printf("-----------------------------------------------\n\n");

}
void credits()
{
		int jc,fw,ic;		
				jc=25;	
						while(fw==0)
			{
				for(ic=0;ic<=jc;ic++)
				printf("\n");
				printf("                            CREDITS\n");
				printf("               DEVEOLPED BY JONATHAN JOSEPH(18pw13) & R N RAAGUL(18pw27)\n");
				printf("                     BATTLESHIP GAME TM @ 2018\n\n");
				printf("                           ALL COPYRIGHTS RESERVED");
				if(ic==0)
				fw=1;
				delay(1000);
				system ("cls");
				jc=jc-1;
			}			
}
int main()
{
	srand(time(0));
	int inventory[10],i,j,flag=0,count=0,f=0,f1=0,f2=0,f3=0,f4=0,pt,x,seaplay[10][10]={0},fh,jc,ic,fw=0,inventoryc[10],seaplayc[10][10]={0},ptc,sumh=0,sumc=0,k,l,flagc=0;
    char sp,sc,mr,mc,es[10][10],ds[10][10];
	char uname[50];
	printf("\n\n\n\n\n\n\n\n");
	printf("\t\t\t########################################################################\n");
    printf("\t\t\t#                                                                      #\n");
    printf("\t\t\t#                                                                      #\n");
    printf("\t\t\t#                                                                      #\n");
    printf("\t\t\t#                                                                      #\n");
    printf("\t\t\t#                                                                      #\n");
    printf("\t\t\t#                                                                      #\n");
    printf("\t\t\t#                                                                      #\n");
    printf("\t\t\t#                                                                      #\n");
    printf("\t\t\t#                                                                      #\n");
    printf("\t\t\t#                                                                      #\n");
    printf("\t\t\t#                                                                      #\n");
    printf("\t\t\t#                                                                      #\n");
    printf("\t\t\t#                                                                      #\n");
    printf("\t\t\t#                                                                      #\n");
    printf("\t\t\t#      * * *      *    * * * * *  * * * * *  *          * * * *        #\n");
    printf("\t\t\t#      *    *    * *       *          *      *          *              #\n");
    printf("\t\t\t#      * * *    *   *      *          *      *          * * *          #\n");
    printf("\t\t\t#      *    *  * * * *     *          *      *          *              #\n");
    printf("\t\t\t#      * * *  *       *    *          *      * * * * *  * * * *        #\n");
    printf("\t\t\t#                                                                      #\n");
    printf("\t\t\t#               * * * *  *     *  * * * * *  * * * *                   #\n");
    printf("\t\t\t#              *         *     *      *      *      *                  #\n");
    printf("\t\t\t#               * * * *  * * * *      *      * * * *                   #\n");
    printf("\t\t\t#                      * *     *      *      *                         #\n");
    printf("\t\t\t#               * * * *  *     *  * * * * *  *                         #\n");
    printf("\t\t\t#                                                                      #\n");
    printf("\t\t\t#                                                                      #\n");
    printf("\t\t\t#                                                                      #\n");
    printf("\t\t\t#                                                                      #\n");
    printf("\t\t\t#                                                                      #\n");
    printf("\t\t\t#                                                                      #\n");
    printf("\t\t\t#                                                                      #\n");
    printf("\t\t\t#                                                                      #\n");
    printf("\t\t\t#                                                                      #\n");
    printf("\t\t\t#                                                                      #\n");
    printf("\t\t\t#                                                                      #\n");
    printf("\t\t\t########################################################################\n");
    delay(5000);
    system ("cls");
    loading();
	system ("cls");
	printf("Enter your battleship's name:");  //getting the username
	gets(uname);
	printf("\n\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			ds[i][j]='S';
			es[i][j]='S';
		}
	}
	// a gui wiil be dispalyed for the loading screen
	// clearscreen will be required
	system ("cls");
	printf("***** *  *  *****          *     *  ****  ****  *****  ****  *   *  ****        \n");
	printf("  *   *  *  *              *     *  *  *  *  *     *   *  *  **  *  *            \n");
	printf("  *   ****  ****           *  *  *  ****  ****    *    *  *  * * *  ****        \n");
	printf("  *   *  *  *              *  *  *  *  *  * *    *     *  *  *  **  *           \n");
	printf("  *   *  *  ****           *******  *  *  *  *  *****  ****  *   *  ****         ");
	printf("\n\n\n\n");    //choosing the type of the sea
	printf("   $$        You will play in a 5X5 sea for a quick battle      $$\n\n");
	delay(3000);
	system ("cls");
	//again a gui will be displayed for the loading screen
	printf("\n\n\n\n");
	printf("                 $$    INSTRUCTIONS     $$\n\n");
	printf("                 The game contains 3 phases\n\n\n");    // displayed for 5 seconds
	printf("              CHOOSING OF SHIPS\n\n");
	printf("             1)Each players had to choose thier respective ships.\n\n");
	printf("             2)There are 4 types of ships which will be shown in the game\n\n\n\n");   //displayed for 6 seconds
	//clearscreen will be required
	delay(8500);
	system ("cls");
	printf("\t\t\t\t\t\t\t\t\tPHASE 1\n\n\n");
	printf("****  *  *  ****  ****  ****  *****        *   *  ****  *  *  ****          ****  *  *  *  ****  ****                              \n");
	printf("*     *  *  *  *  *  *  *     *             * *   *  *  *  *  *  *          *     *  *  *  *  *  *                                 \n");
	printf("*     ****  *  *  *  *  ****  *****          *    *  *  *  *  ****          ****  ****  *  ****  ****                              \n");
	printf("*     *  *  *  *  *  *     *  *              *    *  *  *  *  * *              *  *  *  *  *        *                              \n");
	printf("****  *  *  ****  ****  ****  *****          *    ****  ****  *  *          ****  *  *  *  *     ****                              \n");
	printf("\n\n");
	printf("     $$         The game has 4 types of ships        $$\n\n");
	printf("1. The mega          battle ship    (*****)         (Occupies 5 spaces/blocks)\n\n");
	printf("2. The warfare       battle ship    (****)         (Occupies 4 spaces/blocks)\n\n");
	printf("3. The Frontier      battle ship    (***)         (Occpies  3 spaces/blocks)\n\n");
	printf("4. The speed craft   battle ship    (**)        (Occupies 2 spaces/blocks)\n\n");
	printf("     $$         Choose your Respective ships    $$");
    while(f==0)
				{
					f1=0;
					f2=0;
					printf("The number of ships to be choosed are four(4)\n\n");
					printf("Atleast one warfare and frontier ship must be included\n\n");
					for(i=0;i<4;i++)
					{
					l2:printf("Choose ship %d:",i+1);
						scanf("%d",&inventory[i]);
						if(inventory[i]>4||inventory[i]<1)
						{
							printf("It is an invalid input\n");
							printf("Choose again\n");
							goto l2;
						}
						printf("\n\n");
					}
					for(i=0;i<4;i++)
					{
						if(inventory[i]==2)
						{
							f1=1;
							break;
						}
					}
					for(i=0;i<4;i++)
					{
						if(inventory[i]==3)
						{
							f2=1;
							break;
						}
					}
					if(f1==1&&f2==1)
					f=1;
					}
		//again a gui will be displayed for the loading screen
	system ("cls");
	loading();
	 	//first we will give the display and the instructions for the game
	//clearscreen will be required
	system ("cls");
	printf("\t\t\t\t\t\t\t\t\t\t\tPHASE 2:\n\n\n\n\n\n");
	printf("\n");
		printf("               PLACING OF SHIPS\n\n");
	printf("             1)Each players had to place thier ships in their respective seas.\n\n");
	printf("             2)The sea will be a 5X5 matrix\n\n\n\n");
        printf("The display of the sea will be like this:\n\n");
                printf("\t                  A          B         C          D          E     \n");
                printf("\t           ________________________________________________________\n");
                printf("\t           |          |          |          |          |          |\n");
                printf("\t   1       |          |          |          |          |          |\n");
                printf("\t            _______________________________________________________\n");
                printf("\t           |          |          |          |          |          |\n");
                printf("\t   2       |          |          |          |          |          |\n");
                printf("\t           ________________________________________________________\n");
                printf("\t           |          |          |          |          |          |\n");
                printf("\t   3       |          |          |          |          |          |\n");
                printf("\t           ________________________________________________________\n");
                printf("\t           |          |          |          |          |          |\n");
                printf("\t   4       |          |          |          |          |          |\n");
                printf("\t           ________________________________________________________\n");
                printf("\t           |          |          |          |          |          |\n");
                printf("\t   5       |          |          |          |          |          |\n");
                printf("\t           ________________________________________________________\n");
                printf("\n\n\n");
                printf("PLACEMENT OF SHIPS IN 10 SECONDS");
				printf("\n\n\n\n\n\n");
				delay(10000);
				system ("cls");
		loading();//first we will give the display and the instructions for the game
		system ("cls");
                for(i=0;i<4;i++)
                {
                	printf("\tA\tB\tC\tD\tE\n");
                	for(k=0;k<5;k++)
                	
									{
										printf("%d\t",k+1);
										for(l=0;l<5;l++)
										{
											if(seaplay[k][l]!=0)
											ds[k][l]='*';
											printf("%c",ds[k][l]);
											printf("\t");
										}
										printf("\n");
									}
									delay(2000);
                    printf("Ship %d is ",i+1);
                    if(inventory[i]==1)
                    printf("Mega Battleship (5 block ship)\n");
                    else if(inventory[i]==2)
                    printf("Warfare Battleship (4 block ship)\n");
                    else if(inventory[i]==3)
                    printf("Frontier Battleship (3 block ship)\n");
                    else if(inventory[i]==4)
                    printf("High speed cruiser ship (2 block ship)\n");
					u1:	printf("Placement of ship %d\n",i+1);
                    	printf("Types of placement\n");
                    	printf("1.Horizontal(From left to right)\n");
                    	printf("2.Vertical(From top to bottom)\n");
                    	printf("Choose your type:\n");
                    	scanf("%d%*c",&pt);
                    	switch(pt)
                    	{
                        	case 1:	flag=0;
									if(inventory[i]==1)
                               	 	{
                                    	printf("Enter the starting row of the ship(1 to 5):");
                                    	scanf("%c%*c",&sp);
											
											if(sp=='1'||sp=='2'||sp=='3'||sp=='4'||sp=='5')
											{
													for(j=0;j<5;j++)
                                    				{
                                    					if(seaplay[sp-48-1][j]==0)
                                    					flag=0;
                                    					else
                                    					{
															flag=1;
															break;
														}
													}
												if(flag==0)
												{
													for(j=0;j<5;j++)
													seaplay[sp-48-1][j]=1;
												}
												else
												{
													printf("One of the spaces has been occupied by another ship\n\n\n");
													printf("Enter again\n\n\n");
													goto u1;
												
												}
											}
											else
											{
												printf("The ship is crossing the border of the sea\n\n");
												printf("Enter again\n\n");
												goto u1;
											}
								}
	                                	else if(inventory[i]==2)
										{
												printf("Enter the starting row and column of the ship\n");
												scanf("%c%c",&sp,&sc);
												scanf("%*c");
												sc=toupper(sc);
										if(sp=='1'||sp=='2'||sp=='3'||sp=='4'||sp=='5')
										{
											if(sc=='A'||sc=='B')
											{
												flag=0;
												x=sc-65;
												for(j=0;j<4;j++)
												{
													if(seaplay[sp-48-1][x]==0)
													{
														flag=0;
														x=x+1;
													}
													else
													{
														flag=1;
														break;
													}
												}
												x=sc-65;
												if(flag==0)
												{
													for(j=0;j<4;j++)
													{
														seaplay[sp-48-1][x]=2;
														x=x+1;
													}
												}
												else
												{
													printf("One of the spaces has been occupied by another ship\n\n\n");
													printf("Enter again\n\n\n");
													goto u1;
												}
											}
											else
											{
												printf("The ship is crossing the border of the sea\n\n");
												printf("Enter again\n\n");
												goto u1;
											}	
										}
										else
										{
											printf("The ship is crossing the border of the sea\n\n");
											printf("Enter again\n\n");
											goto u1;
										}
									}
									else if(inventory[i]==3)
									{
										printf("Enter the starting row and column of the ship\n");
										scanf("%c%c",&sp,&sc);
										scanf("%*c");
										sc=toupper(sc);
										if(sp=='1'||sp=='2'||sp=='3'||sp=='4'||sp=='5')
										{
											if(sc=='A'||sc=='B'||sc=='C')
											{
												flag=0;
												x=sc-65;
												for(j=0;j<3;j++)
												{
													if(seaplay[sp-48-1][x]==0)
													{
														flag=0;
														x=x+1;
													}
													else
													{
														flag=1;
														break;
													}
												}
												x=sc-65;
												if(flag==0)
												{
													for(j=0;j<3;j++)
													{
														seaplay[sp-48-1][x]=3;
														x=x+1;
													}	
												}
												else
												{
													printf("One of the spaces has been occupied by another ship\n\n");
													printf("Enter again\n\n");
													goto u1;
												}
										}
											else
											{
												printf("The ship is crossing the border of the sea\n\n");
												printf("Enter again\n\n");
												goto u1;
											}	
										}
										else
										{
											printf("The ship is crossing the border of the sea\n\n");
											printf("Enter again\n\n");
											goto u1;
										}
									}
									else 
									{
									printf("Enter the starting row and column of the ship\n");
										scanf("%c%c",&sp,&sc);
										scanf("%*c");
										sc=toupper(sc);
										if(sp=='1'||sp=='2'||sp=='3'||sp=='4'||sp=='5')
										{
												if(sc=='A'||sc=='B'||sc=='C'||sc=='D')
												{
													flag=0;
													x=sc-65;
													for(j=0;j<3;j++)
													{
														if(seaplay[sp-48-1][x]==0)
														{
															flag=0;
															x=x+1;
														}
														else
														{
															flag=1;
															break;
														}
													}
													x=sc-65;
													if(flag==0)
													{
														for(j=0;j<2;j++)
														{
															seaplay[sp-48-1][x]=4;
															x=x+1;
														}
													}
													else
													{
														printf("One of the spaces has been occupied by another ship\n\n\n");
														printf("Enter again\n\n\n");
														goto u1;
													}
												}
												else
												{
													printf("The ship is crossing the border of the sea\n\n");
													printf("Enter again\n\n");
													goto u1;
												}	
										}
										else
											{
												printf("The ship is crossing the border of the sea\n\n");
												printf("Enter again\n\n");
												goto u1;
											}
									}
									break;		
												
								case 2:if(inventory[i]==1)
                               	 		{
											printf("Enter the starting column of the ship(A to E):");
                                    		scanf("%c%*c",&sc);
                                    		sc=toupper(sc);
											if(sc=='A'||sc=='B'||sc=='C'||sc=='D'||sc=='E')
											{
												flag=0;
												for(j=0;j<5;j++)
												{
													if(seaplay[j][sc-65]==0)
													flag=0;
													else
													{
														flag=1;
														break;
													}
												}
												if(flag==0)
												{
													for(j=0;j<5;j++)
													seaplay[j][sc-65]=1;
												}
											else
												{
													printf("One of the spaces has been occupied by another ship\n\n\n");
													printf("Enter Again\n\n\n");
													goto u1;
												}
											}
											else
										{
											printf("The ship is crossing the border of the sea\n\n");
											printf("Enter again\n\n");
											goto u1;
										}
									}
	                                else if(inventory[i]==2)
									{
										printf("Enter the starting column and row of the ship\n");
										scanf("%c%c",&sc,&sp);
										scanf("%*c");
										sc=toupper(sc);
										if(sc=='A'||sc=='B'||sc=='C'||sc=='D'||sc=='E')
										{
											if(sp=='1'||sp=='2')
											{
												flag=0;
												x=sp-48-1;
												for(j=0;j<4;j++)
												{
													if(seaplay[x][sc-65]==0)
													{
														flag=0;
														x=x+1;
													}
													else
													{
														flag=1;
														break;
													}
												}
												x=sp-48-1;
												if(flag==0)
												{
													for(j=0;j<4;j++)
													{
														seaplay[x][sc-65]=2;
														x=x+1;
													}
												}
												else
												{
													printf("One of the spaces has been occupied by another ship\n\n\n");
													printf("Enter again\n\n\n");
													goto u1;
												}
											}
											else
											{
												printf("The ship is crossing the border of the sea\n\n");
												printf("Enter again\n\n");
												goto u1;
											}	
										}
										else
										{
											printf("The ship is crossing the border of the sea\n\n");
											printf("Enter again\n\n");
											goto u1;
										}
									}
									else if(inventory[i]==3)
									{
										printf("Enter the starting column and row of the ship\n");
										scanf("%c%c",&sc,&sp);
										scanf("%*c");
										sc=toupper(sc);
										if(sc=='A'||sc=='B'||sc=='C'||sc=='D'||sc=='E')
										{
											if(sp=='1'||sp=='2'||sp=='3')
											{
												x=sp-48-1;
												flag=0;
												for(j=0;j<3;j++)
												{
													if(seaplay[x][sc-65]==0)
													flag=0;
													else
													{
														flag=1;
														break;
													}
												}
												x=sp-48-1;
												if(flag==0)
												{
													for(j=0;j<3;j++)
													{
														seaplay[x][sc-65]=3;
														x=x+1;
													}	
												}
												else
												{
													printf("One of the spaces has been occupied by another ship\n\n\n");
													printf("Enter again");
													goto u1;
												}
									}
											else
											{
												printf("The ship is crossing the border of the sea\n\n");
												printf("Enter again\n\n");
												goto u1;
											}	
										}
										else
										{
											printf("The ship is crossing the border of the sea\n\n");
											printf("Enter again\n\n");
											goto u1;
										}
									}
									else 
									{
										printf("Enter the starting column and row of the ship\n");
										scanf("%c%c",&sc,&sp);
										scanf("%*c");
										sc=toupper(sc);
										if(sc=='A'||sc=='B'||sc=='C'||sc=='D'||sc=='E')
										{
												if(sp=='1'||sp=='2'||sp=='3'||sp=='4')
												{
													flag=0;
													x=sp-48-1;
													for(j=0;j<2;j++)
													{
														if(seaplay[x][sc-65]==0)
														flag=0;
														else
														{
															flag=1;
															break;
														}
													}
													x=sp-48-1;
													if(flag==0)
													{
														for(j=0;j<2;j++)
														{
															seaplay[x][sc-65]=4;
															x=x+1;
														}
													}
													else
													{
														printf("One of the spaces has been occupied by another ship\n\n\n");
														printf("Enter again");
														goto u1;
													}
											}
												else
												{
													printf("The ship is crossing the border of the sea\n\n");
													printf("Enter again\n\n");
													goto u1;
												}	
										}
										else
											{
												printf("The ship is crossing the border of the sea\n\n");
												printf("Enter again\n\n");
												goto u1;
											}
									}
									break;		
								default:printf("  ~   Invalid Input  ~\n");
										printf("Choose again\n");
										goto u1;
										break;	
									}
									for(k=0;k<5;k++)
									{
										for(l=0;l<5;l++)
										{
											if(seaplay[k][l]!=0)
											ds[k][l]='*';
											printf("%c",ds[k][l]);
											printf("\t");
										}
										printf("\n");
									}
									delay(2000);
									system ("cls");	    
								
                            }
							f=0; 
	while(f==0)
				{
					f1=0;
					f2=0;
					for(i=0;i<4;i++)
					{
						inventoryc[i]=rand()%4+1;
					}
					for(i=0;i<4;i++)
					{
						if(inventoryc[i]==2)
						{
							f1=1;
							break;
						}
					}
					for(i=0;i<4;i++)
					{
						if(inventoryc[i]==3)
						{
							f2=1;
							break;
						}
					}
					if(f1==1&&f2==1)
					f=1;
					}
	  for(i=0;i<4;i++)
                {
                    u2:ptc=rand()%2+1;
                    	switch(ptc)
                    	{
                        	case 1:if(inventoryc[i]==1)
                               	 	{
                                    	
                                    	sp=(rand()%5+1)+48;
										if(sp=='1'||sp=='2'||sp=='3'||sp=='4'||sp=='5')
										{
											flagc=0;
													for(j=0;j<5;j++)
                                    				{
                                    					if(seaplayc[sp-48-1][j]==0)
                                    					flagc=0;
                                    					else
                                    					{
															flagc=1;
															break;
														}
													}
											if(flagc==0)
											{		
												for(j=0;j<5;j++)
												seaplayc[sp-48-1][j]=1;
											}
											else
											{
												goto u2;
											}
										}
										else
										{
											goto u2;
										}
										
									}
	                                else if(inventoryc[i]==2)
									{
										sp=(rand()%5+1)+48;
										sc=(rand()%5+1)+64;
										sc=toupper(sc);
										if(sp=='1'||sp=='2'||sp=='3'||sp=='4'||sp=='5')
										{
											if(sc=='A'||sc=='B')
											{
												flagc=0;
												x=x-65;
														for(j=0;j<4;j++)
                                    				{
                                    					if(seaplayc[sp-48-1][x]==0)
                                    					{
															flagc=0;
															x=x+1;
														}
                                    					else
                                    					{
															flagc=1;
															break;
														}
													}
												x=sc-65;
												if(flagc==0)
												{
													for(j=0;j<4;j++)
													{
														seaplayc[sp-48-1][x]=2;
														x=x+1;
													}
												}
												else
												{
													goto u2;
												}
										}
											else
											{
												goto u2;
											}	
										}
										else
										{
											goto u2;
										}
									}
									else if(inventoryc[i]==3)
									{
										sp=(rand()%5+1)+48;
										sc=(rand()%5+1)+64;
										sc=toupper(sc);
										if(sp=='1'||sp=='2'||sp=='3'||sp=='4'||sp=='5')
										{
											if(sc=='A'||sc=='B'||sc=='C')
											{
												flagc=0;
												x=x-65;
														for(j=0;j<3;j++)
                                    				{
                                    					if(seaplayc[sp-48-1][x]==0)
                                    					{
															flagc=0;
															x=x+1;
														}
                                    					else
                                    					{
															flagc=1;
															break;
														}
													}
												x=sc-65;
												if(flagc==0)
												{
													for(j=0;j<3;j++)
													{
													seaplayc[sp-48-1][x]=3;
													x=x+1;
													}	
											}
											else
											{
												goto u2;
											}
										}
											else
											{
												goto u2;
											}	
										}
										else
										{
											goto u2;
										}
									}
									else 
									{
										sp=(rand()%5+1)+48;
										sc=(rand()%5+1)+64;
										sc=toupper(sc);
										if(sp=='1'||sp=='2'||sp=='3'||sp=='4'||sp=='5')
										{
												if(sc=='A'||sc=='B'||sc=='C'||sc=='D')
												{
													flagc=0;
													x=x-65;
														for(j=0;j<3;j++)
                                    				{
                                    					if(seaplayc[sp-48-1][x]==0)
                                    					{
															flagc=0;
															x=x+1;
														}
                                    					else
                                    					{
															flagc=1;
															break;
														}
													}
													x=sc-65;
													if(flagc==0)
													{
														for(j=0;j<2;j++)
														{
															seaplayc[sp-48-1][x]=4;
															x=x+1;
														}
													}
													else
													{
														goto u2;
													}
												}
												else
												{
													goto u2;
												}	
										}
										else
											{
												goto u2;
											}
									}	
									break;	
												
								case 2:if(inventoryc[i]==1)
                               	 		{	
											sc=(rand()%5+1)+64;
                                    		sc=toupper(sc);
											if(sc=='A'||sc=='B'||sc=='C'||sc=='D'||sc=='E')
											{
													flagc=0;
												for(j=0;j<5;j++)
												{
													if(seaplayc[j][sc-65]==0)
													flagc=0;
													else
													{
														flagc=1;
														break;
													}
												}
												if(flagc==0)
												{
													for(j=0;j<5;j++)
													seaplayc[j][sc-65]=1;
												}
												else
												{
													goto u2;
												}
										}
											else
											{
												goto u2;
											}
										}
	                                else if(inventoryc[i]==2)
									{
										sp=(rand()%5+1)+48;
										sc=(rand()%5+1)+64;
										sc=toupper(sc);
										
										if(sc=='A'||sc=='B'||sc=='C'||sc=='D'||sc=='E')
										{
											if(sp=='1'||sp=='2')
											{
												flagc=0;
												x=sp-48-1;
												for(j=0;j<4;j++)
												{
													if(seaplayc[x][sc-65]==0)
													{
														flagc=0;
														x=x+1;
													}
													else
													{
														flagc=1;
														break;
													}
												}
												x=sp-48-1;
												if(flagc==0)
												{
													for(j=0;j<4;j++)
													{
														seaplayc[x][sc-65]=2;
														x=x+1;
													}
												}
												else
												{
													goto u2;
												}
										}
											else
											{
												goto u2;
											}	
										}
										else
										{
											goto u2;
										}
									}
									else if(inventoryc[i]==3)
									{	
										sp=(rand()%5+1)+48;
										sc=(rand()%5+1)+64;
										sc=toupper(sc);
										if(sc=='A'||sc=='B'||sc=='C'||sc=='D'||sc=='5')
										{
											if(sp=='1'||sp=='2'||sp=='3')
											{
												flagc=0;
												x=sp-48-1;
												for(j=0;j<3;j++)
												{
													if(seaplayc[x][sc-65]==0)
													{
														flagc=0;
														x=x+1;
													}
													else
													{
														flagc=1;
														break;
													}
												}
												x=sp-48-1;
												if(flagc==0)
												{
													for(j=0;j<3;j++)
													{
														seaplayc[x][sc-65]=3;
														x=x+1;
													}	
												}
												else
												{
													goto u2;
												}
											}
											else
											{
												goto u2;
											}	
										}
										else
										{
											goto u2;
										}
									}
									else 
									{
										sp=(rand()%5+1)+48;
										sc=(rand()%5+1)+64;
										sc=toupper(sc);
										if(sc=='A'||sc=='B'||sc=='C'||sc=='D'||sc=='E')
										{
												if(sp=='1'||sp=='2'||sp=='3'||sp=='4')
												{
													flagc=0;
													x=sp-48-1;
													for(j=0;j<2;j++)
												{
													if(seaplayc[x][sc-65]==0)
													{
														flagc=0;
														x=x+1;
													}
													else
													{
														flagc=1;
														break;
													}
												}
													x=sp-48-1;
													if(flagc==0)
													{
														for(j=0;j<2;j++)
														{
															seaplayc[x][sc-65]=4;
															x=x+1;
														}
													}
													else
													{
														goto u2;
													}
												}
												else
												{
													goto u2;
												}	
										}
										else
											{
												goto u2;
											}
									}
										break;		
								default:printf("~~~~~~~~~~~");
										break;	
									}	    
                                } 
      	printf("You have choosen your ships\n\n");
      	
		for(i=0;i<5;i++)
      	{
      		for(j=0;j<5;j++)
      		{
      			if(seaplay[i][j]!=0)
      			ds[i][j]='*';
			  }
		  }
		  printf("Your Defence sea display\n\n");  
		  printf("\tA\tB\tC\tD\tE\n");
		  for(i=0;i<5;i++)
		  	{
		  		printf("%d\t",i+1);
		  		for(j=0;j<5;j++)
		  		{
		  			printf("%c",ds[i][j]);
		  			printf("\t");
			    }
				  printf("\n");
			}     
			delay(4000);
		//a giu will be displayed for loading screen
	 loading();	//first we will give the display and the instructions for the game
		printf("\t\t\t\t\t\t\t\t\t\tPHASE 3:\n\n\n\n");
		// a clearscreen would be required
		system ("cls");
		printf("\n");
		printf("******* ****** *******    ****  ******      *      ****   *   *   * * *       \n"); 
		printf("*       *         *       *   * *          * *     *   *   * *    * * *       \n");
		printf("*       ****      *       *   * ****      *   *    *    *   *     * * *       \n");
		printf("*  **** *         *       ****  *        * * * *   *    *   *     * * *       \n");
		printf("*     * *         *       * *   *       *       *  *   *    *                 \n");
		printf("******* ******    *       *  *  ****** *         * ****     *     * * *       \n\n\n\n");
		printf("$$ YOU AND YOUR ENEMY HAVE PREPARED YOUR RESPECTIVE WARZONES\n\n\n");
		printf("         $$  It's Time to begin the ultimate battle  $$\n\n\n");
		printf("The game will commence in a few seconds\n");
		delay(4500); //here there will be a delay func for 3-4 sec
		//a gui will be displayed for loading screen
	loading();	//first we will give the display and the instructions for the game
		// a clearscreen would be required 
		system (" cls");
		// display the  playing instructions(only) again for better understanding
		printf("      $$        START!!!!      $$\n\n");
	q2:	sumc=0;
		sumh=0;
		 printf("THe Enemy Sea is:\n");
		 printf("\tA\tB\tC\tD\tE\n");
		  for(i=0;i<5;i++)
		  	{
		  		printf("%d\t",i+1);
		  		for(j=0;j<5;j++)
		  		{
		  			printf("%c",es[i][j]);
		  			printf("\t");
			    }
				  printf("\n");
			}     
		printf(" It is %s 's turn:\n\n",uname);
		q1:printf("Enter the target location to launch the missile:\n\n");
		printf("Enter the row(1-5) and column(A to E) of the enemy ship:");
		scanf("%c%c%*c",&mr,&mc);
		printf("\n\n");
		mc=toupper(mc);
		if(mr=='1'||mr=='2'||mr=='3'||mr=='4'||mr=='5')
		{
			if(mc=='A'||mc=='B'||mc=='C'||mc=='D'||mc=='E')
			{
				if(seaplayc[mr-48-1][mc-65]!=0)
				{
					resulthit();
					printf("Now the Enemy Sea is:\n\n\n");
					seaplayc[mr-48-1][mc-65]=0;
					es[mr-48-1][mc-65]='X';
					printf("\tA\tB\tC\tD\tE\n");
					for(i=0;i<5;i++)
					{
						printf("%d\t",i+1);
						for(j=0;j<5;j++)
						{
							printf("%c",es[i][j]);
							printf("\t");
						}
						printf("\n");
					}
				}
				else
				{
					resultmiss();
					printf("Now the Enemy Sea is:\n\n\n");
					es[mr-48-1][mc-65]='M';
						printf("\tA\tB\tC\tD\tE\n");
					for(i=0;i<5;i++)
					{
						printf("%d\t",i+1);
						for(j=0;j<5;j++)
						{
							printf("%c",es[i][j]);
							printf("\t");
						}
						printf("\n");
					}
					
				}
			}
			else
			{
				printf("The given column is Invalid\n\n");
				printf("Please enter the correct column again:\n\n");
				goto q1;
			}
		}
		else
		{
				printf("The target location is Invalid\n\n");
				printf("Please enter the correct location again:\n\n");
				goto q1;			
		}
		delay(2000);
		printf("Now it is the CPU's turn:\n\n");
		mr=(rand()%5+1)+48;
		mc=(rand()%5)+65;
			if(seaplay[mr-48-1][mc-65]!=0)
				{
					resulthit();
					printf("Now the Your Sea is:\n\n\n");
					seaplay[mr-48-1][mc-65]=0;
					ds[mr-48-1][mc-65]='X';
					printf("\tA\tB\tC\tD\tE\n");
					for(i=0;i<5;i++)
					{
						printf("%d\t",i+1);
						for(j=0;j<5;j++)
						{
							printf("%c",ds[i][j]);
							printf("\t");
						}
						printf("\n");
					}
				}
				else
				{
					resultmiss();	
					printf("Now the Your Sea is:\n\n\n");
					ds[mr-48-1][mc-65]='M';
						printf("\tA\tB\tC\tD\tE\n");
					for(i=0;i<5;i++)
					{
						printf("%d\t",i+1);
						for(j=0;j<5;j++)
						{
							printf("%c",ds[i][j]);
							printf("\t");
						}
						printf("\n");
					}
				}
				for(i=0;i<5;i++)
				{
					for(j=0;j<5;j++)
					{
						sumh=sumh+seaplay[i][j];
						sumc=sumc+seaplayc[i][j];
					}
				}
				delay(2000);
				system ("cls");
				if(sumc==0)
				{
					printf("The winner is %s\n\n\n",uname);
					printf("-------------------------------------------------------------\n");
					printf("             C O N G R A T U L A T I O N S !!!!!!!!!         \n");
					printf("-------------------------------------------------------------\n");
					printf("\n\n\n");
					printf("$$$$      You are the ultimate sea warrior     $$$$\n\n\n");
					printf("\n");
					printf("     ************ THANK YOU FOR PLAYING THIS GAME ************");
					delay(5000);
					system("cls");
							jc=25;	
						while(fw==0)
			{
				for(ic=0;ic<=jc;ic++)
				printf("\n");
				printf("                            CREDITS\n");
				printf("               DEVEOLPED BY JONATHAN JOSEPH(18pw13) & R N RAAGUL(18pw27)\n");
				printf("                     BATTLESHIP GAME TM @ 2018\n\n");
				printf("                           ALL COPYRIGHTS RESERVED");
				if(ic==0)
				fw=1;
				delay(1000);
				system ("cls");
				jc=jc-1;
			}
					
				}
				else if(sumh==0)
				{
					printf("The winner is JOGUL(computer)\n\n\n");
					printf("-------------------------------------------\n");
					printf("               D E F E A T  !!!!!!!!!!!!   \n");
					printf("-------------------------------------------\n");
					printf("\n\n\n");
					printf("$$$$        JOGUL is the undefeated sea warrior     $$$$\n\n\n");
					printf("\n");
					printf("   *** BETTER LUCK NEXT TIME ***  ");
					printf("     ************ THANK YOU FOR PLAYING THIS GAME ************");
					delay(5000);
					system ("cls");
					credits();
				}
				else
				{
					goto q2;
				}		
	return 0;
}

