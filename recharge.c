//Mobile Recharge Application
#include <stdio.h>
int main() {
	int choice;
	double Wallet ;
	double RechargePlan,WalletBalance;
	
	printf("===== Mobile Recharge Application =====\n");
	printf("1. View Recharge Plans\n");
	printf("2. Recharge for Rupees 199/-\n");
	printf("3. Recharge for Rupees 299/-\n");
	printf("4. Recharge for Rupees 499/-\n");
	printf("5. Recharge for Rupees 999/-\n");
	printf("6. Add Money to wallet/-\n");
	printf("7. Display Wallet Balance/-\n");
	printf("8. Exit/-\n");
	
	printf("Enter your choice: ");
        scanf("%d", &choice);
        
         printf("Enter a Wallet Balance: ");
         scanf("%lf", &Wallet);
         
         do {
         
         switch (choice) {
         
         case 1 : 
	 printf("1. View Recharge Plans\n");
	 printf("2. Recharge for Rupees 199/-\n");
	 printf("3. Recharge for Rupees 299/-\n");
  	 printf("4. Recharge for Rupees 499/-\n");
	 printf("5. Recharge for Rupees 999/-\n");
	 }
	 break ;
	 
	 case 2 :{ printf("Recharge for 199/- \n");
		printf("Recharged Successfully\n");
		printf("You can enjoy unlimited call and data pack of 1gb/day for 22 Days.\n");
		RechargePlan = 199.00;
		WalletBalance = Wallet - RechargePlan;
		printf("Balance Amount = %lf\n",WalletBalance);
		}
		break;
	case 3  :{ printf("Recharge for 299/- \n");
		printf("Recharged Successfully\n");
		printf("You can enjoy unlimited call and data pack of 1gb/day for 22 Days.\n");
		RechargePlan = 299.00;
		WalletBalance = Wallet - RechargePlan;
		printf("Balance Amount = %lf\n",WalletBalance);
		}
		break;
	case 4 : { printf("Recharge for 499/- \n");
		printf("Recharged Successfully\n");
		printf("You can enjoy unlimited call and data pack of 1gb/day for 22 Days.\n");
		RechargePlan = 499.00;
		WalletBalance = Wallet - RechargePlan;
		printf("Balance Amount = %lf\n",WalletBalance);
		}
		break;
	case 5 :{ printf("Recharge for 999/- \n");
		printf("Recharged Successfully\n");
		printf("You can enjoy unlimited call and data pack of 1gb/day for 22 Days.\n");
		RechargePlan = 999.00;
		WalletBalance = Wallet - RechargePlan;
		printf("Balance Amount = %lf\n",WalletBalance);
		}
		break;
	case 6 : 
	
         }
         
         }
