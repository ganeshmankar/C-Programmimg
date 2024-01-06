#include <stdio.h>
#include <string.h>

struct Drivers
{
    char Name[30];
    char DrivingLicenseNo[20];
    char Route[15];
    int Kms;
}D1, D2, D3;

int main()
{
    printf("Enter the details of the first drivers: \n");

    printf("Enter your name: \n");
    scanf("%s", &D1.Name);
    
    printf("Enter your Driving License No. \n");
    scanf("%s", &D1.DrivingLicenseNo);
    
    printf("Enter your Route: \n");
    scanf("%s", &D1.Route);
    
    printf("Enter your driving distance of your car till now: \n");
    scanf("%d", &D1.Kms);


    printf("\n\n");

    printf("Enter the details of the second drivers: \n");

    printf("Enter your name: \n");
    scanf("%s", &D2.Name);
    printf("Enter your Driving License No. \n");
    scanf("%s", &D2.DrivingLicenseNo);
    printf("Enter your Route: \n");
    scanf("%s", &D2.Route);
    printf("Enter your driving distance of your car till now: \n");
    scanf("%d", &D2.Kms);


    printf("\n\n");

    printf("Enter the details of the third drivers: \n");


    printf("Enter your name: \n");
    scanf("%s", &D3.Name);
    printf("Enter your Driving License No. \n");
    scanf("%s", &D3.DrivingLicenseNo);
    printf("Enter your Route: \n");
    scanf("%s", &D3.Route);
    printf("Enter your driving distance of your car till now: \n");
    scanf("%d", &D3.Kms);
    
    printf("***************THE DATAILS OF DRIVERS***************\nDetails of first driver:\n");

    printf("Name - %s\nDriving License No. %s\nRoute - %s\nKms - %d\n", D1.Name, D1.DrivingLicenseNo, D1.Route, D1.Kms);
    printf("Details of second driver:\n");

    printf("Name - %s\nDriving License No. %s\nRoute - %s\nKms - %d\n", D2.Name, D2.DrivingLicenseNo, D2.Route, D2.Kms);
    printf("Details of third driver:\n");

    printf("Name - %s\nDriving License No. %s\nRoute - %s\nKms - %d\n", D3.Name, D3.DrivingLicenseNo, D3.Route, D3.Kms);



    
    return 0;
}