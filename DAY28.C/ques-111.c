#include <stdio.h>

struct Ticket
{
    int ticketNo;
    char name[50];
    int seats;
    float fare;
};

int main()
{
    struct Ticket t[100];
    int n = 0, choice, i, searchTicket, found;
    float pricePerSeat = 500.0;

    do
    {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. Book Ticket\n");
        printf("2. Display Bookings\n");
        printf("3. Search Booking\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter Ticket Number: ");
                scanf("%d", &t[n].ticketNo);

                printf("Enter Passenger Name: ");
                scanf(" %[^\n]", t[n].name);

                printf("Enter Number of Seats: ");
                scanf("%d", &t[n].seats);

                t[n].fare = t[n].seats * pricePerSeat;

                printf("Ticket Booked Successfully!\n");
                printf("Total Fare: %.2f\n", t[n].fare);

                n++;
                break;

            case 2:
                if(n == 0)
                {
                    printf("\nNo bookings found!\n");
                }
                else
                {
                    printf("\n========== Booking Details ==========\n");
                    for(i = 0; i < n; i++)
                    {
                        printf("\nTicket No      : %d\n", t[i].ticketNo);
                        printf("Passenger Name : %s\n", t[i].name);
                        printf("Seats Booked   : %d\n", t[i].seats);
                        printf("Total Fare     : %.2f\n", t[i].fare);
                        printf("-------------------------------------\n");
                    }
                }
                break;

            case 3:
                if(n == 0)
                {
                    printf("\nNo bookings available!\n");
                }
                else
                {
                    printf("Enter Ticket Number to Search: ");
                    scanf("%d", &searchTicket);

                    found = 0;

                    for(i = 0; i < n; i++)
                    {
                        if(t[i].ticketNo == searchTicket)
                        {
                            printf("\nBooking Found!\n");
                            printf("Ticket No      : %d\n", t[i].ticketNo);
                            printf("Passenger Name : %s\n", t[i].name);
                            printf("Seats Booked   : %d\n", t[i].seats);
                            printf("Total Fare     : %.2f\n", t[i].fare);
                            found = 1;
                            break;
                        }
                    }

                    if(found == 0)
                    {
                        printf("Booking not found!\n");
                    }
                }
                break;

            case 4:
                printf("\nExiting Ticket Booking System...\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}