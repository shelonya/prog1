/*
   File: prog1.cpp

   Author: Selby Onyango
   C.S.1428.301
   Lab Section: L32
   Program: #1
   Due Date: 02/07/18

   Prix fixe (pronounced "prefix") menus are common in Europe. A prix fixe
   menu typically includes a number of pre-determined items presented as a
   multi-course meal at a set price. Prix fixe options may include just one
   menu selection or a few different menu selections. For example, one
   evening, a restaurant may offer a four course prix fixe menu of escargot
   for the first course, beef bourguignon (boo r-geen-yuhn) for the second,
   a cheese platter for the third, and creme brulee for dessert. A second
   option that same evening might include an appetizer of oysters on the
   half shell for the first course, followed by an endive (on deev) salad
   for the second, an entree of chicken marsala for the third, and chocolate
   ganache for dessert. The prix fixe menu for the evening (along with its
   cost) is typically posted on a message board outside the restaurant.

   A French restaurant, Ma Cherie, typically offers only one four course
   prix fixe meal each evening. On special occasions, however, they offer
   two five course prix fixe menu choices. For people who wish to celebrate
   Valentine's Day at Ma Cherie, two prix fix menu choices are offered.
   (The same menu choice is served for each member of a party.)

   Sample menu choices are shown below:

             39.95
        First Course: escargot
        Second Course: beef bourguignon
        Third Course: a cheese platter
        Dessert: creme brulee
        Ligueur: Chambord (shahn-bawr) black raspberry liqueur

        OR

             54.95
        First Course: oysters on the half shell
        Second Course: endive salad with sun-dried tomato
        Third Course: chicken marsala
        Dessert: chocolate ganache
        Liqueur: green chartreuse (shar trus) liqueur

   =======================================================================

   This program prompts the user for the price of the prix fixe meal
   ordered. It then prompts the user for the number of prix fixe meals
   ordered by the customer(s). The program calculates the total cost of
   the meal(s), the sales tax, the tip, and the total amount due. The
   program then prints in receipt form the individual price of one prix
   fixe meal, the number of prix fixe meals ordered, the total for all
   prix fixe meals ordered, the sales tax, the tip and total amount due.

   Sample layout of a receipt is shown below.

   Input (keyboard): prix fixe meal price (double)
                     number of guests     (integer)
   Constants:
          Sample Values:
              SALES TAX RATE = .0825      (double)
              TIP PERCENTAGE = .15        (double)
   Output (console):
          Sample Layout:

              Betty Boop
              C.S.1428.?         // '?' represents student's lecture section #
              Lab Section: L?    // '?' represents student's lab section #
              --/--/--           // dashes represent due date, month/day/year
                   <blank line>
              Prix Fixe Price:    $   50.00
                                    x     8
              Total for 8 meals:     400.00
              Sales Tax @8.25%        33.00
              15% Tip                 64.95
              Total Due:          $  497.95

   =======================================================================

   <Output will vary based on actual input and values used for constants.>
*/

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    const double SALES_TAX_RATE = .0825,
                 TIP_PERCENTAGE = .15;

    double prix_fixe_meal_price,
           total_meal_cost,
           sales_tax_cost,
           tip_percentage_cost,
           total_due;

    int number_of_guests;

    total_meal_cost = (prix_fixe_meal_price * total_meal_cost);
    sales_tax_cost = (total_meal_cost * SALES_TAX_RATE);
    tip_percentage_cost = (total_meal_cost * SALES_TAX_RATE) + (sales_tax_cost * SALES_TAX_RATE);
    total_due = (total_meal_cost + sales_tax_cost + tip_percentage_cost);

    cout << "Enter the price of the prix fixe meal ordered: ";
    cin >> prix_fixe_meal_price;

    cout << "Enter the number of guests: ";
    cin >> number_of_guests;

    cout << endl << endl
         << "Selby Onyango" << endl
         << "C.S.1428.301" << endl
         << "Lab Section: L32" << endl
         << "02/07/18" << endl << endl << fixed << setprecision(2)
         << "Prix Fixe Price:    $   " << prix_fixe_meal_price << endl;

    cout << "                      x" << setw(6) << number_of_guests << endl
         << "Total for " << number_of_guests << " meals:      " << prix_fixe_meal_price++ << endl
         << "Sales Tax @" << (SALES_TAX_RATE * 100) << "%         " << sales_tax_cost << endl
         << (TIP_PERCENTAGE * 100) << "% Tip               " << tip_percentage_cost << endl
         << "Total Due:          $    " << (total_meal_cost + sales_tax_cost + tip_percentage_cost) << endl;

    system("PAUSE >NUL");
    return 0;
}
