# Real Estate Management System 

## Week 1 – Project Selection

During Week 1, I finalized my project idea: **Real Estate Management System**. I selected this project to apply my C programming concepts to a practical real-world problem. The planned system will be developed as a console-based application and will focus on managing properties, property details, buyers, sellers, and other basic real estate operations.

## Week 2 – Project Setup

In Week 2, I set up my development environment and created the initial main.c file for the Real Estate Management System. The program currently displays the project title, and I will build the menu and features in the coming weeks.


## Week 3 - 
started the project 
I have started to do the core in vs code and the starting is from  property categories 1 house , 2 apartment , 3 plots and shops , 4 checkout details and the input was from user and loops and nested loops used there ( do-while ) and in nested loop in the nested i have used 3 ,2 bed house and house choice as  5 Marla house in Bahria town  i  used switch case to get the user item choice. 


## Week 4 -
Here the user pick an apartment and enter the number of months.
Rent is calculated per month and and calculating the monthwise and running towards the total and Monthly rent is multiplied by the number of months and added to the running total.
Months rented are tracked separately for each apartment, so renting the same apartment again adds to its total.Months must be at least 1, otherwise an error message is shown.An invalid apartment choice is handled by the default case.After each rental the user can add another apartment or return to the main menu.The rented apartments appear in the itemized checkout summary.


## Week 5 - 
I built the display part of the Plots and Shops section which is case 3 of the main menu. I used printf statements to show a header, PLOTS & SHOPS FOR SALE, followed by three properties with their prices:
1.  120 sq yd Plot, Gulshan-e-Maymar: Rs. 6,000,000
2.  240 sq yd Plot, Scheme 33: Rs. 12,000,000
3.  Shop, Tariq Road: Rs. 20,000,000
I also opened a do block so the section can repeat. By the end of the week, the program could show what was available but could not respond to for person.

## Week 6 - 
I built the selection part of the Plots and Shops section. After the display from Week 5, the user can now enter a choice number using scanf, and a switch statement handles each item: case 1 is the 120 sq yd Plot in Gulshan-e-Maymar (Rs. 6,000,000), case 2 is the 240 sq yd Plot in Scheme 33 (Rs. 12,000,000), and case 3 is the Shop on Tariq Road (Rs. 20,000,000). Each property has its own flag variable (plot_gulshan, plot_scheme33, shop_tariq). If the flag is already 1, the program prints "Already selected!" so the same item can't be added twice. Otherwise, it sets the flag to 1, adds the price to total_amount, and prints a confirmation message. I also added a default case that prints "Invalid plot/shop choice!" for any wrong input. By the end of the week, the program could not only show what was available but also let a person pick items and keep a running total.

## Week 7 -  
I made the Plots and Shops section repeatable. After a person picks a property, the program asks "Would you like to add more plots/shops?" with 1. YES and 2. NO (Back to Main Menu). I read the answer into add_more, and the whole selection is wrapped in a do-while loop that keeps running while add_more == 1, so someone can add several properties in one visit. I also started the checkout, which is case 4 of the main menu. It prints a "FINAL DEAL SUMMARY" header with separator lines, then checks whether total_amount is 0. If it is, the program prints "No properties selected yet!" instead of an empty summary.


## Week - 8 
I finished the checkout by building the itemized summary. When something has been selected, the program prints a "Property List:" and uses if statements to show only the items the person picked. These cover the houses (DHA Phase 6, Gulshan, Bahria Town), the rental apartments, where the monthly rent is multiplied by the number of months (Studio in Clifton, 2-Bed in North Nazimabad, 3-Bed in DHA), and the plots and shop from Week 6. Then I calculated the agent commission as total_amount * 0.02 and printed the Sub Total, the Agent Fee (2%), and the Total Amount To Pay. The program ends with a thank-you message asking the person to complete the deal at the office, and return 0. By the end of the week, the program could take a full order from start to finish
