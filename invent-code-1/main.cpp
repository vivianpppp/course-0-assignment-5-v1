#include <iostream>
#include <string>
using namespace std;

// Uncomment and fill out this function for Part 2.
 float CostOfIngredient(const string ingredient) {
   float total_cost;
   float price_ingredient;
   int number_ingredient;
   cout << "How many " << ingredient << " are in the recipe: ";
   cin >> number_ingredient;
   cout << "What is the price of an " << ingredient << "? ";
   cin >> price_ingredient;
   return total_cost = price_ingredient * number_ingredient;  
   }

int main() {
  float total_cost = 0;

  char ingredient_need;
  cout << "Do you need avocado in the recipe? (Y/N) ";
  cin >> ingredient_need;
  if (ingredient_need == 'Y' | ingredient_need == 'y') {
    total_cost = total_cost + CostOfIngredient("avocado");
  }

  cout << "Do you need tomato in the recipe? (Y/N) ";
  cin >> ingredient_need;
  if (ingredient_need == 'Y' | ingredient_need == 'y') {
    total_cost = total_cost + CostOfIngredient("tomato");
  }

 cout << "Do you need onion in the recipe? (Y/N) ";
  cin >> ingredient_need;
  if (ingredient_need == 'Y' | ingredient_need == 'y') {
    total_cost = total_cost + CostOfIngredient("onion");
  }

 cout << "Do you need jalapeno in the recipe? (Y/N) ";
  cin >> ingredient_need;
  if (ingredient_need == 'Y' | ingredient_need == 'y') {
    total_cost = total_cost + CostOfIngredient("jalapeno");
  }

  cout << "The total cost of the recipe will be: $" << total_cost << endl;
}
