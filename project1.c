#include<stdio.h>
int main()
{
    int i;
    printf("Please answer the question in 1(yes) and 0(no). \n");
    printf("Do you have fever? \n"); 
    scanf("%d",&i);
    if(i==1)
    {
        printf("Do you have cough? \n"); 
        scanf("%d",&i);
        if(i==1)
        {
            printf("Do you have runny nose? \n");
            scanf("%d",&i);
            if(i==1)
            {
                printf("Do you have sore throat? \n");
                scanf("%d",&i);
                if(i==1)
                {
                    printf("Diagonis: Common Cold \n");
                    printf("Are you allergic to Cetirizine? \n");
                    scanf("%d",&i);
                    if(i==1)
                    {
                        printf("Vist hospital \n");
                    }
                    else
                    {
                        printf("Recommended Medicine:  Cetirizine(10mg) \n"); 
                    }
                }
                else
                {
                    printf("Diagonis: Unrecognized, vist hospital \n"); 
                }
            }
            else
            {
               printf("Diagonis: Unrecognized, vist hospital \n");
            }
        }
        else
        {
            printf("Do you feel Fatigue? \n");
            scanf("%d",&i);
            if(i==1)
            {
                printf("Do you have body ache? \n");
                scanf("%d",&i);
                if(i==1)
                {
                    printf("Do you have headache? \n");
                    scanf("%d",&i);
                    if(i==1)
                    {
                        printf("Do you experience chills? \n");
                        scanf("%d",&i);
                        if(i==1)
                        {
                            printf("Diagonis: Influenza(Flu) \n");
                            printf("Are you allergic to Paracetamol? \n");
                            scanf("%d",&i);
                            if(i==1)
                            {
                                printf("Vist hospital \n");
                            }
                            else
                            {
                                printf("Recommended Medicine:  Paracetamol(500mg) \n");
                            } 
                        }
                        else
                        {
                            printf("Diagonis: Unrecognized, vist hospital \n");
                        }
                    }
                    else
                    {
                        printf("Diagonis: Unrecognized, vist hospital \n");
                    }
                }
                else
                {
                    printf("Diagonis: Unrecognized, vist hospital \n");
                }
            }
            else
            {
                printf("Do you have Abdominal pain? \n");
                scanf("%d",&i);
                if(i==1)
                {
                    printf("Do you have Diarrhea? \n");
                    scanf("%d",&i);
                    if(i==1)
                    {
                        printf("Are you vomiting? \n");
                        scanf("%d",&i);
                        if(i==1)
                        {
                            printf("Diagonis: Food Poisoning \n");
                            printf("Are you allergic to ORS? \n");
                            scanf("%d",&i);
                            if(i==0)
                            {
                                printf("Vist hospital \n");
                            }
                            else
                            {
                                printf("Recommended Medicine:  ORS + Hydration \n"); 
                            }
                        }
                        else
                        {
                            printf("Diagonis: Unrecognized, vist hospital \n");
                        }
                    }
                    else
                    {
                        printf("Diagonis: Unrecognized, vist hospital \n");  
                    }
                }
                else
                {
                    printf("Diagonis: Unrecognized, vist hospital \n");    
                }
            }
        }
    }
    else 
    {
        printf("Do you have headache? \n");
        scanf("%d",&i);
        if(i==1)
        {
            printf("Do you feel nausea? \n");
            scanf("%d",&i);
            if(i==1)
            {
                printf("Are you sensitive to light? \n");
                scanf("%d",&i);
                if(i==1)
                {
                    printf("Diagonis: Migrane \n");
                    printf("Are you allergic to Ibuprofen/NSAIDs? \n");
                    scanf("%d",&i);
                    if(i==1)
                    {
                        printf("Vist hospital \n");
                    }
                    else
                    {
                        printf("Recommended Medicine: Ibuprofen(400mg) \n"); 
                    }
                }
                else
                {
                    printf("Diagonis: Unrecognized, vist hospital \n");  
                }
            }
            else
            {
                printf("Diagonis: Unrecognized, vist hospital \n");
            }
        } 
        else
        {
            printf("Diagonis: Unrecognized, vist hospital \n");

        }
    }

    return 0;
}