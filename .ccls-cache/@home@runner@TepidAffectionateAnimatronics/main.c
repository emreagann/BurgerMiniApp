#include <stdio.h>

int main(void) {
  int num_of_selection = 0;
  int menu_item = 0, count = 0;
  int menu_item2 = 0, count2 = 0;
  float total = 0;

  printf("-- MENU --\n");
  printf("1. Fried Chicken + Soft Beverage: 5.00\n");
  printf("2. Burger: 4.00\n");
  printf("3. Salad + Soft Bevarage: 6.00\n");

  printf("You can select 2 different menu items at most\nEnter how many menu items you will select: 1 or 2\n");
  scanf("%d", &num_of_selection);

  if(num_of_selection <= 0) 
    printf("You changed your mind? Please come back some other time!\n");
  else if(num_of_selection >= 3)
      printf("You entered an invalid number. You can select 2 different menu items at most.\n");
  else {
    if(num_of_selection == 1) { 
      printf("Please enter the number of the menu item and how many of that you want.\n"); 
      printf("e.g. 2 3 for 3 burgers\n");
      scanf("%d %d", &menu_item, &count);

      if(menu_item < 1 || menu_item > 3)  
        printf("You selected an invalid menu item number: something other than 1, 2 or 3.\n");
    } else {
        printf("Please enter the number of the menu item and how many of that you want.\n"); 
        printf("e.g. 1 2\n     3 2 for 2 Fried Chicken + Soft Beverage and 2 Salad + Soft Bevarage\n");
        scanf("%d %d", &menu_item, &count);
        scanf("%d %d", &menu_item2, &count2);

      if((menu_item < 1 || menu_item > 3) || (menu_item2 < 1 || menu_item2 > 3)) 
        printf("You selected an invalid menu item number: something other than 1, 2 or 3.\n");
    }

    if(menu_item == 1)
      total += 5.00 * count;
    else if (menu_item == 2)
      total += 4.00 * count;
    else if (menu_item == 3)
      total += 6.00 * count;

    if(menu_item2 == 1)
      total += 5.00 * count2;
    else if (menu_item2 == 2)
      total += 4.00 * count2;
    else if (menu_item2 == 3)
      total += 6.00 * count2;


    if((menu_item == 2 && count >= 2) || (menu_item2 == 2 && count2 >= 2) || 
       ((menu_item == 2 && count == 1) && (menu_item2 == 2 && count2 == 1))) {
      total *= 0.9;
      printf("Congratulations! You have a 10%% discount for purchasing at least 2 burgers!\n");  
    }
 }

 printf("Your total is:%7.2f\n", total); // 


  return 0;
}