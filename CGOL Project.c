/*
 ============================================================================
 Name        : CGOL.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
 int main() {
             setbuf(stdout,NULL);
             int i,j,k,m;
	         int a[5][5]; //size of array is fixed to implement the code easily as it was affecting the output for this program

//scanning the array elements which can be 1 and 0 only

	         printf("Enter elements of array containing whole number 1 and 0 only: \n");

	for(i=0; i<5;i++) //for loop for scanning and printing the input generation
	   {
		for(j=0;j<5;j++)
		{
		scanf("%d",&a[i][j]);
	}
	}
        printf("Input generation:\n");

	 for(i=0; i<5;i++)
	    {
	        for(j=0;j<5;j++){
		 		 			printf("%d  ",a[i][j]);
		 		 			}
		 		       printf("\n");
		 		 	}
            printf("\n");
           printf("How many generation you want:\n");
          scanf("%d",&m);
            printf("\n");

       for(k=0;k<m;k++)
{
	 for(i=0; i<5;i++)
	 {
		 		for(j=0;j<5;j++){
		 		 	int cell=0; // cell is used to store the sum of adjacent values
              cell=cell+a[i-1][j-1];
              cell=cell+a[i-1][j];
              cell=cell+a[i-1][j+1];
              cell=cell+a[i][j-1];
              cell=cell+a[i][j+1];
              cell=cell+a[i+1][j-1];
              cell=cell+a[i+1][j];
              cell=cell+a[i+1][j+1];

//following program is used for applying rules for the CGOL
//In this if else if statement is used to find the next generation for live and dead cells

if(a[i][j]==0)
{
                                        switch(cell)
                                        {
                                           case 0:
                                           case 1:
                                           case 2:
	                                      a[i][j]=0; //has two or less than 2 live neighbors remains dead or gets dead
	                                        break;
                                           case 3:
	                                      a[i][j]=1; //gets alive due to three live neighboring cells
	                                        break;
                                          case 4:
                                            case 5:
                                           case 6:
                                            case 7:
                                           case 8:
	                                     a[i][j]=0; //still remains dead

                                        }
                                  }

                else if(a[i][j]==1)
                {
	       switch (cell)
	       {
	         case 1:
             case 2:
             case 3:
	         a[i][j]=1; //gets alive due to three live neighboring cells
	         break;
             case 4:
             case 5:
             case 6:
             case 7:
              case 8:
	       a[i][j]=0; //live cell dies of overcrowding

            }
        }
                                   else
                                          {
                                            printf("Only 1 and 0 should be used");
                                           }
		 		 		            	}
	                                }
                               printf("\n");
                               printf("Next generation:\n");

                               //This loop is used to print the next generation
          for(i=0; i<5;i++)
          {
		 		 			for(j=0;j<5;j++)
		 		 			{
		 		 			printf("%d  ",a[i][j]);
		 		 			}
		 		       printf("\n");
		 		 	}
        }
    }






