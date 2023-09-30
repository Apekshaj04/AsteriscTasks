
int main()
{
    int choice,custid[50],accid[50],i=0,j,cusid;
    char name[20];
    float inbalance[50],damt[50],wamt[50],temp;
    while(1)
    {
        printf("\n<<<<<<<< BANK MANAGEMENT SYSTEM >>>>>>>>\n ");
        printf("1. Add Customer \n2. Create Account \n3. Deposit \n4. Withdraw \n5. Display Accounts \n0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                printf("Enter Customer ID: ");
                scanf("%d",&cusid);
                printf("Enter Name: ");
                scanf("%s", name);
                printf("CUSTOMER CREATED SUCCESSFULLY!\n");
                break;
            }
            case 2:
            {
                printf("Enter Account ID: ");
                scanf("%d",&accid[i]);
                printf("Enter customer ID for the account: ");
                scanf("%d",&custid[i]);
                printf("Enter initial balance: ");
                scanf("%f", &inbalance[i]);
                damt[i]=0;
                wamt[i]=0;
                i++;
                printf("ACCOUNT CREATED SUCCESSFULLY!\n");
                break;
            }
            case 3:
            {
                printf("Enter account ID for deposit: ");
                scanf("%d",&accid);
                for(j=0;j<=i;j++)
                {
                    if(accid== &accid[j])
                    {
                        printf("Enter deposit amount: ");
                        scanf("%f",&damt[j]);
                        break;
                    }
                }
                printf("SUCCESSFULLY DEPOSITED! AVAILABLE BALANCE IS : %f",(inbalance[j]+damt[j]));
                break;
            }
            case 4:
            {
                printf("Enter account ID for withdrawal: ");
                scanf("%d",&accid);
                for(j=0;j<=i;j++)
                {
                    if(accid== &accid[j])
                    {
                        printf("Enter withdrawal amount: ");
                        scanf("%f",&wamt[j]);
                        break;
                    }
                }
                temp=(inbalance[j]+damt[j]);
                printf("%f",temp);
                if(wamt[j]<temp)
                {
                    printf("WITHDRAWL SUCCESSFULLY! NEW BALANCE: %f",(inbalance[j]+damt[j]-wamt[j]));
                }
                else
                {
                    printf("WITHDRWAL UNSUCCESSFULL!");
                }
                break;
            }
            case 5:
            {
                printf("\n--- Account Details ---\n");
                for(j=0;j<i;j++)
                {
                    printf("Account ID: %d\n", accid[j]);
                    printf("Customer ID: %d\n", custid[j]);
                    printf("Balance: %f\n", (inbalance[j]+damt[j]-wamt[j]));
                }
                break;
            }
            case 0:
            {
                exit(0);
            }
            default:
            printf("INVALID CHOICE PLEASE TRY AGAIN. ");
            break;
        }
    }
}