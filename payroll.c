
int main()
{
    int choice[50],nplates[50],i=0,price[50],temp,j,total,cash;
    printf("** Welcome to XYZ Hotel! **\n");
    while(1)
    {
        printf("Menu: \n 1 Samosa 20/- \n 2 Dosa 30/- \n 3 Tea 10/- \n 0 Exit \n");
        printf("Enter your choice: ");
        scanf("%d", &temp);
        switch(temp)
        {
            case 1:
            {
                choice[i]=1;
                printf("Enter number of plates: ");
                scanf("%d", &nplates[i]);
                price[i]=20;
                i++;
                break;
            }
            case 2:
            {
                choice[i]=2;
                printf("Enter number of plates: ");
                scanf("%d", &nplates[i]);
                price[i]=30;
                i++;
                break;
            }
            case 3:
            {
                choice[i]=3;
                printf("Enter number of plates: ");
                scanf("%d", &nplates[i]);
                price[i]=10;
                i++;
                break;
            }
            case 0:
            {
                j=i;
                break;
            }
            default:
            printf("Invalid choice\n");
            break;
        }
        if(temp==0)
        {
            break;
        }
    }
    total=bill(choice,nplates,price,j);
    printf("Enter your cash: ");
    scanf("%d",&cash);
    if(cash>total)
    {
        printf("Returned Amount: %d",(cash-total));
    }
    else if(total>cash)
    {
        printf("Please pay %d Rs. more",(total-cash));
        printf("Enter your cash: ");
    }
    else
    {}
}
int bill(int choice[],int nplates[],int price[],int j)
{
    int i,stotal[50],gtotal=0;
    printf("::Your Bill:: \n");
    printf("Sr.No.| Item  | Qty  | Rate  | Sub Total \n");
    printf("-------------------------------------------------------------------\n");
    for(i=0;i<j;i++)
    {
        printf("%d     |",i+1);
        if(choice[i]==1)
        {
            printf("Samosa |");
        }
        else if(choice[i]==2)
        {
            printf("Dosa   |");
        }
        else
        {
            printf("Tea    |");
        }
        printf("%d     |",nplates[i]);
        printf("%d     |",price[i]);
        stotal[i]=nplates[i]*price[i];
        printf("%d/-\n",stotal[i]);
        gtotal+=stotal[i];
    }
    printf("-------------------------------------------------------------------\n");
    printf("Grand Total: %d/-\n",gtotal);
    return gtotal;
}