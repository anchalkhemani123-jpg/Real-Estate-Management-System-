#include <stdio.h>

int main(void)
{
    int category_choice = 0;
    int item_choice = 0;
    int months = 0;
    int add_more = 0;
    double total_amount = 0.0;
    double commission = 0.0;
    int house_dha = 0, house_gulshan = 0, house_bahria = 0;
    int months_studio = 0, months_two_bed = 0, months_three_bed = 0;
    int plot_gulshan = 0, plot_scheme33 = 0, shop_tariq = 0;

    
    printf(============"WELCOME TO REAL ESTATE SYSTEM\n"==============);
   // started my work from here in week 3
    do{
        printf("\n--- PROPERTY CATEGORIES ---\n");
        printf(" 1. Houses (For Sale)\n");
        printf(" 2. Apartments (For Rent)\n");
        printf(" 3. Plots & Shops (For Sale)\n");
        printf(" 4. View Deal Summary & Checkout\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &category_choice);

        switch (category_choice)
        {
        case 1: // Houses
            do
            {
                printf("\n--- HOUSES FOR SALE ---\n");
                printf(" 1. 3-Bed House, DHA Phase 6 (rs. 25000000)\n");
                printf(" 2. 2-Bed House, Gulshan (rs. 15000000)\n");
                printf(" 3. 5-Marla House, Bahria Town (rs. 9500000)\n");
                printf("Enter property choice (1 to 3): ");
                scanf("%d", &item_choice);

                switch (item_choice)
                {
                case 1:
                    if (house_dha == 1)
                        printf("-> Already selected!\n");
                    else
                    {
                        house_dha = 1;
                        total_amount += 25000000;
                        printf("-> Added 3-Bed House, DHA Phase 6\n");
                    }
                    break;
                case 2:
                    if (house_gulshan == 1)
                        printf("-> Already selected!\n");
                    else
                    {
                        house_gulshan = 1;
                        total_amount += 15000000;
                        printf("-> Added 2-Bed House, Gulshan\n");
                    }
                    break;
                case 3:
                    if (house_bahria == 1)
                        printf("-> Already selected!\n");
                    else
                    {
                        house_bahria = 1;
                        total_amount += 9500000;
                        printf("-> Added 5-Marla House, Bahria Town\n");
                    }
                    break;
                default:
                    printf("Invalid house choice!\n");
                    break;
                }

                //  my work in week 4 

                printf("\nWould you like to add more houses?\n");
                printf(" 1. YES\n 2. NO (Back to Main Menu)\n");
                printf("Enter choice: ");
                scanf("%d", &add_more);

            } while (add_more == 1);
            break;

        case 2: // Apartments
            do
            {
                printf("\n--- APARTMENTS FOR RENT (per month) ---\n");
                printf(" 1. Studio Apartment, Clifton (rs. 45000)\n");
                printf(" 2. 2-Bed Apartment, North Nazimabad (rs. 35000)\n");
                printf(" 3. 3-Bed Apartment, DHA (rs. 80000)\n");
                printf("Enter apartment choice (1-3): ");
                scanf("%d", &item_choice);

                printf("Enter number of months: ");
                scanf("%d", &months);

                if (months > 0)
                {
                    switch (item_choice)
                    {
                    case 1:
                        months_studio += months;
                        total_amount += 45000 * months;
                        printf("-> Rented Studio Apartment for %d month(s)\n", months);
                        break;
                    case 2:
                        months_two_bed += months;
                        total_amount += 35000 * months;
                        printf("-> Rented 2-Bed Apartment for %d month(s)\n", months);
                        break;
                    case 3:
                        months_three_bed += months;
                        total_amount += 80000 * months;
                        printf("-> Rented 3-Bed Apartment for %d month(s)\n", months);
                        break;
                    default:
                        printf("Invalid apartment choice!\n");
                        break;
                    }
                }
                else
                {
                    printf("Months must be at least 1.\n");
                }

                printf("\nWould you like to add more apartments?\n");
                printf(" 1. YES\n 2. NO (Back to Main Menu)\n");
                printf("Enter choice: ");
                scanf("%d", &add_more);

            } while (add_more == 1);
            break;
            // my work in week 5 

        case 3: // Plots and Shops
            do
            {
                printf("\n--- PLOTS & SHOPS FOR SALE ---\n");
                printf(" 1. 120 sq yd Plot, Gulshan-e-Maymar (rs. 6000000)\n");
                printf(" 2. 240 sq yd Plot, Scheme 33 (rs. 12000000)\n");
                printf(" 3. Shop, Tariq Road (rs. 20000000)\n");


                // my work in weeek 6 
                printf("Enter property choice (1-3): ");
                scanf("%d", &item_choice);

                switch (item_choice)
                {
                case 1:
                    if (plot_gulshan == 1)
                        printf("-> Already selected!\n");
                    else
                    {
                        plot_gulshan = 1;
                        total_amount += 6000000;
                        printf("-> Added 120 sq yd Plot, Gulshan-e-Maymar\n");
                    }
                    break;
                case 2:
                    if (plot_scheme33 == 1)
                        printf("-> Already selected!\n");
                    else
                    {
                        plot_scheme33 = 1;
                        total_amount += 12000000;
                        printf("-> Added 240 sq yd Plot, Scheme 33\n");
                    }
                    break;
                case 3:
                    if (shop_tariq == 1)
                        printf("-> Already selected!\n");
                    else
                    {
                        shop_tariq = 1;
                        total_amount += 20000000;
                        printf("-> Added Shop, Tariq Road\n");
                    }
                    break;
                default:
                    printf("Invalid plot/shop choice!\n");
                    break;
                }

                printf("\nWould you like to add more plots/shops?\n");
                printf(" 1. YES\n 2. NO (Back to Main Menu)\n");
                printf("Enter choice: ");
                scanf("%d", &add_more);

            } while (add_more == 1);
            break;

        case 4: // Checkout & Itemized Summary
            printf("\n==================================\n");
            printf("          FINAL DEAL SUMMARY       \n");
            printf("==================================\n");

            if (total_amount == 0)
            {
                printf("No properties selected yet!\n");
            }
            else
            {
                printf("Property List:\n");
                if (house_dha > 0)
                    printf(" - 3-Bed House, DHA Phase 6 = rs. 25000000\n");
                if (house_gulshan > 0)
                    printf(" - 2-Bed House, Gulshan = rs. 15000000\n");
                if (house_bahria > 0)
                    printf(" - 5-Marla House, Bahria Town = rs. 9500000\n");

                if (months_studio > 0)
                    printf(" - Studio Apartment, Clifton (rs. 45000) x %d month(s) = rs. %d\n", months_studio, months_studio * 45000);
                if (months_two_bed > 0)
                    printf(" - 2-Bed Apartment, N. Nazimabad (rs. 35000) x %d month(s) = rs. %d\n", months_two_bed, months_two_bed * 35000);
                if (months_three_bed > 0)
                    printf(" - 3-Bed Apartment, DHA (rs. 80000) x %d month(s) = rs. %d\n", months_three_bed, months_three_bed * 80000);

                if (plot_gulshan > 0)
                    printf(" - 120 sq yd Plot, Gulshan-e-Maymar = rs. 6000000\n");
                if (plot_scheme33 > 0)
                    printf(" - 240 sq yd Plot, Scheme 33 = rs. 12000000\n");
                if (shop_tariq > 0)
                    printf(" - Shop, Tariq Road = rs. 20000000\n");

                commission = total_amount * 0.02;

                printf("----------------------------------\n");
                printf("Sub Total          : rs. %.2f\n", total_amount);
                printf("Agent Fee (2%%)     : rs. %.2f\n", commission);
                printf("Total Amount to Pay: rs. %.2f\n", total_amount + commission);
            }

            printf("Thank you for visiting! Please complete the deal at the office :)\n");
            return 0;

        default:
            printf("Invalid category choice! Please choose between 1 and 4.\n");
            break;
        }

    } while (1);

    return 0;
}
