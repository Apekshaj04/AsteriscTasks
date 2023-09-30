
struct employee
{
    int eid,whours;
    char name[50];
    float salary,sperhour;
};
int main()
{
    int choice,i=0,j;
    struct employee emp[50];
    printf("****** PAYROLL MANAGEMENT SYSTEM ******\n");
    while(1)
    {
        printf("::::::MENU:::::: \n1. Insert Employee \n2. Calculate Salary \n3. Generate Payslip \n0. Exit\n ");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            {
                printf("Enter employee ID: ");
                scanf("%d", &emp[i].eid);
                printf("Enter employee name: ");
                scanf("%s", emp[i].name);
                printf("Enter employee fixed salary: ");
                scanf("%f", &emp[i].salary);
                printf("EMPLOYEE ADDED SUCCESSFULL! \n");
                i++;
                break;
            }
            case 2:
            {
                for(j=0;j<i;j++)
                {
                    printf("::Employee ID %d:: \n",emp[j]);
                    printf("Enter extra working hours: ");
                    scanf("%d", &emp[j].whours);
                    printf("Enter salary per hour: ");
                    scanf("%f", &emp[j].sperhour);
                    emp[j].salary = emp[j].salary + (emp[j].whours * emp[j].sperhour);
                }
                printf("SALARY CALCULATION COMPLETED! \n");
                break;
            }
            case 3:
            {
                printf("****** All Employee Payslip *****\n");
                for(j=0;j<i;j++)
                {
                    printf("Employee ID:%d \n", emp[j].eid);
                    printf("Name: %s\n", emp[j].name);
                    printf("Salary: %f\n", emp[j].salary);
                    printf("*********\n");
                }
                break;
            }
            case 0:
            {
                printf("********PROGRAM EXIT********");
                exit(0);
            }
            default:
            printf("SORRY INVALID CHOICE... TRY AGAIN...\n");
            break;
        }
    }
    return 0;
}