
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