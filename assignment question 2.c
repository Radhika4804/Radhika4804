#include<stdio.h>

int main() {
	float accounts[3] = {0.0, 0.0, 0.0};
	int choice, accountNumber;
	float amount;
	
	while (1) {
		printf("\nMenu:\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\nEnter your choice: ");
		scanf("%d", &choice);
		
		if (choice == 4) break;
		
		printf("Enter account number (1-3): ");
		scanf("%d", &accountNumber);
		
		if (accountNumber < 1 || accountNumber > 3) {
			printf("Invalid account number!\n");
			continue;
		}
		
		switch (choice) {
			case 1:
				printf("Enter amount to deposit: ");
				scanf("%f", &amount);
				accounts[accountNumber - 1] += amount;
				printf("Deposited %.2f to account %d\n", amount, accountNumber);
				break;
			case 2:
			    printf("Enter amount to withdraw: ");
				scanf("%f", &amount);
				if (accounts[accountNumber - 1] >= amount) {
					accounts[accountNumber - 1] -= amount;
					printf("Withdrew %.2f from account %d\n", amount, accountNumber);
				} else {
					printf("Insufficient balance in account %d\n", accountNumber);
				}
				break;
			case 3:
				printf("Balance of account %d: %.2f\n", accountNumber, accounts[accountNumber - 1]);
				break;
			default:
				printf("Invalid choice!\n");
				
		}
	} 	
				return 0;
}