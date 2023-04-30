#include<stdio.h>
#include<string.h>
int main()
{
	int withdraw,AM,fastcash,balance=10000,pin,opert;
	int a=1;
	char use[255];
	
	//AM(Additional Amount)
	 
	printf("\n\t\t\t~~~~~Welcome to Da Bank ATM~~~~~");
	printf("\n\n\nENTER YOUR PIN: ");
	scanf("%d",&pin);
	
	for(a=1;a<50;a++)
	{
	
	if(pin==1213)
	{
		printf("\n\t\t\t************************************\n\n\t\t\t\t1: Check Balance\n\t\t\t\t2: Fast Cash\n\t\t\t\t3: Withdraw Cash\n\t\t\t\t4: Deposit Cash\n\t\t\t\t5: Exit\n");
		printf("\nEnter your Choice: ");
		scanf("%d", &opert);
		
		if(opert==1)
		{
			printf("Your Current Balance is Rs: %d",balance);
		    
			printf("\n\nDO YOU WANT TO CONTINUE USING ATM?(yes/no)\n");
			scanf("%s",&use);
			
			if(strcmp(use, "no")==0)
			
			exit(0);
			
			
		}
		if(opert==2)
		{
			printf("\nFAST CASH MENU\n1: 500\t\t2: 1000\n3: 5000\t\t4: 10000\n5: 15000\t6: 20000\n\nENTER YOUR CHOICE: ");
			scanf("%d",&fastcash);
			
			if(fastcash==1)
			{
				fastcash=500;
				if(fastcash<=balance)
				{
				
				printf("Collect Your Amount of Rs: 500");
				balance=balance-500;
				printf("\n(Remaining Balance Rs: %d)",balance);
				
			printf("\n\nDO YOU WANT TO CONTINUE USING ATM?(yes/no)\n");
			scanf("%s",&use);
			
			if(strcmp(use, "no")==0)
			exit(0);
			}
			else{
			    printf("INSUFFICIENT BALANCE !!!\n(Your Balance is Rs: %d)",balance);
	    
		    printf("\n\nDO YOU WANT TO CONTINUE USING ATM?(yes/no)\n");
			scanf("%s",&use);
			
			if(strcmp(use, "no")==0)
			exit(0);

		    }
			}
			if(fastcash==2)
			{
				fastcash=1000;
				if(fastcash<=balance)
				{
				
				printf("Collect Your Amount of Rs: 1000");
				balance=balance-1000;
				printf("\n(Remaining Balance Rs: %d)",balance);
				
			printf("\n\nDO YOU WANT TO CONTINUE USING ATM?(yes/no)\n");
			scanf("%s",&use);
			
			if(strcmp(use, "no")==0)
			exit(0);
			}
			else{
			    printf("INSUFFICIENT BALANCE !!!\n(Your Balance is Rs: %d)",balance);
	    
		    printf("\n\nDO YOU WANT TO CONTINUE USING ATM?(yes/no)\n");
			scanf("%s",&use);
			
			if(strcmp(use, "no")==0)
			exit(0);

		    }
		}
			
			if(fastcash==3)
			{
			    fastcash=5000;
				if(fastcash<=balance)
				{
				  
				printf("Collect Your Amount of Rs: 5000");
				balance=balance-5000;
				printf("\n(Remaining Balance Rs: %d)",balance);
				
			printf("\n\nDO YOU WANT TO CONTINUE USING ATM?(yes/no)\n");
			scanf("%s",&use);
			
			if(strcmp(use, "no")==0)
			exit(0);
		    }
		    else{
			    printf("INSUFFICIENT BALANCE !!!\n(Your Balance is Rs: %d)",balance);
	    
		    printf("\n\nDO YOU WANT TO CONTINUE USING ATM?(yes/no)\n");
			scanf("%s",&use);
			
			if(strcmp(use, "no")==0)
			exit(0);

		    }

			}
			if(fastcash==4)
			{
				fastcash=10000;
				if(fastcash<=balance)
				{
				printf("Collect Your Amount of Rs: 10000");
				balance=balance-10000;
				printf("\n(Remaining Balance Rs: %d)",balance);
				
			printf("\n\nDO YOU WANT TO CONTINUE USING ATM?(yes/no)\n");
			scanf("%s",&use);
			
			if(strcmp(use, "no")==0)
			exit(0);
		    }
		    else{
			    printf("INSUFFICIENT BALANCE !!!\n(Your Balance is Rs: %d)",balance);
	    
		    printf("\n\nDO YOU WANT TO CONTINUE USING ATM?(yes/no)\n");
			scanf("%s",&use);
			
			if(strcmp(use, "no")==0)
			exit(0);

		    }

			}
			if(fastcash==5)
			{
				fastcash=15000;
				if(fastcash<=balance)
				{
					printf("Collect Your Amount of Rs: 15000");
				    balance=balance-15000;
				    printf("\n(Remaining Balance Rs: %d)",balance);
				    
				printf("\n\nDO YOU WANT TO CONTINUE USING ATM?(yes/no)\n");
			    scanf("%s",&use);
			
			if(strcmp(use, "no")==0)
			exit(0);
            }
		        
		    
		    else{
			    printf("INSUFFICIENT BALANCE !!!\n(Your Balance is Rs: %d)",balance);
	    
		    printf("\n\nDO YOU WANT TO CONTINUE USING ATM?(yes/no)\n");
			scanf("%s",&use);
			
			if(strcmp(use, "no")==0)
			exit(0);

		    }
		}
		    if(fastcash==6)
		    {
		    	fastcash=20000;
		    	if(fastcash<=balance)
		    	{
		    		printf("Collect Your Amount of Rs: 20000");
				    balance=balance-20000;
				    printf("\n(Remaining Balance Rs: %d)",balance);
			    
		    printf("\n\nDO YOU WANT TO CONTINUE USING ATM?(yes/no)\n");
			scanf("%s",&use);
			
			      if(strcmp(use, "no")==0)
			      exit(0);

		       	}
		    	else{
		    		printf("INSUFFICIENT BALANCE !!!\n(Your Balance is Rs: %d)",balance);
		    		
        		printf("\n\nDO YOU WANT TO CONTINUE USING ATM?(yes/no)\n");
		    	scanf("%s",&use);
			
			    if(strcmp(use, "no")==0)
			    exit(0);

				}
			}
        }
        if(opert==3)
        {
        	printf("\nEnter your Withdraw Amount: ");
        	scanf("%d",&withdraw);
        	if(withdraw<=balance)
        	{
        		printf("\n\t\tYou have Withdrawn Rs: %d",withdraw);
            	balance=balance-withdraw;
        	    printf("\n\t\t(Remaining Balance Rs: %d)",balance);
        	    
       	    printf("\n\nDO YOU WANT TO CONTINUE USING ATM?(yes/no)\n");
			scanf("%s",&use);
			
			if(strcmp(use, "no")==0)
			exit(0);

		    }
			else{
				printf("\nYou haven't Sufficient Balance.\n(Your Balance is Rs: %d)",balance);
				
			printf("\n\nDO YOU WANT TO CONTINUE USING ATM?(yes/no)\n");
			scanf("%s",&use);
			
			if(strcmp(use, "no")==0)
			exit(0);

			}
        }
        if(opert==4)
        {
        	printf("\nEnter the Amount you want to Deposit: ");
        	scanf("%d",&AM);
        	balance=AM+balance;
			printf("\nYour Amount of Rs: %d Has Been Deposited Successfully..\n(Your Balance is Rs: %d)",AM,balance);
			
			printf("\n\nDO YOU WANT TO CONTINUE USING ATM?(yes/no)\n");
			scanf("%s",&use);
			
			if(strcmp(use, "no")==0)
			exit(0);
        	
		}
		if(opert==5)
		{
			exit(0);
		}
        
    }
    else{
		printf("\nINCORRECT PIN !!!\nEnter Your Pin again: ");
		scanf("%d",&pin);
    }
	}
}

