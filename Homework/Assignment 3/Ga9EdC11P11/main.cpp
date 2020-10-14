/* 
 * File:   
 * Author: 
 * Created on 
 * Purpose:  
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

const int PRECISION = 2; 

struct monthlyBudget
{
  float housing;
  float utilities;
  float houseExpenses;
  float transportation;
  float food;
  float medical;
  float insurance;
  float entertainment;
  float clothing;
  float misc;
};

void fillIn(monthlyBudget &);
void report(monthlyBudget &, monthlyBudget &);

int main() 
{
  struct monthlyBudget budget;
  struct monthlyBudget userBudget;

  budget.housing = 500.00;
  budget.utilities = 150.00;
  budget.houseExpenses = 65.00;
  budget.transportation = 50.00;
  budget.food = 250.00;
  budget.medical = 30.00;
  budget.insurance = 100.00;
  budget.entertainment = 150.00;
  budget.clothing = 75.00;
  budget.misc = 50.00;

  fillIn(userBudget);
  report(budget, userBudget);
  
  return 0;
}

void report(monthlyBudget &budget, monthlyBudget &userBudget)
{
  
  float budgetTotal = 0;
  float userTotal = 0;
  float calculation = 0;
  
  if(userBudget.housing >= budget.housing)
  {
    if(userBudget.housing == budget.housing)
      cout << "Housing Even" << endl;
    else
      cout << "Housing Over" << endl;
  }
  else
    cout << "Housing Under" << endl;

  if(userBudget.utilities >= budget.utilities)
  {
    if(userBudget.utilities == budget.utilities)
      cout << "Utilities Even" << endl;
    else
      cout << "Utilities Over" << endl;
  }
  else
    cout << "Utilities Under" << endl;
  
  if(userBudget.houseExpenses >= budget.houseExpenses)
  {
    if(userBudget.houseExpenses == budget.houseExpenses)
      cout << "Household Expenses Even" << endl;
    else
      cout << "Household Expenses Over" << endl;
  }
  else
    cout << "Household Expenses Under" << endl;
  
  if(userBudget.transportation >= budget.transportation)
  {
    if(userBudget.transportation == budget.transportation)
      cout << "Transportation Even" << endl;
    else
      cout << "Transportation Over" << endl;
  }
  else
    cout << "Transportation Under" << endl;
  
  if(userBudget.food >= budget.food)
  {
    if(userBudget.food == budget.food)
      cout << "Food Even" << endl;
    else
      cout << "Food Over" << endl;
  }
  else
    cout << "Food Under" << endl;

  if(userBudget.medical >= budget.medical)
  {
    if(userBudget.medical == budget.medical)
      cout << "Medical Even" << endl;
    else
      cout << "Medical Over" << endl;
  }
  else
    cout << "Medical Under" << endl;
  
  if(userBudget.insurance >= budget.insurance)
  {
    if(userBudget.insurance == budget.insurance)
      cout << "Insurance Even" << endl;
    else
      cout << "Insurance Over" << endl;
  }
  else
    cout << "Insurance Under" << endl;
  
  if(userBudget.entertainment >= budget.entertainment)
  {
    if(userBudget.entertainment == budget.entertainment)
      cout << "Entertainment Even" << endl;
    else
      cout << "Entertainment Over" << endl;
  }
  else
    cout << "Entertainment Under" << endl;
  
  if(userBudget.clothing >= budget.clothing)
  {
    if(userBudget.clothing == budget.clothing)
      cout << "Clothing Even" << endl;
    else
      cout << "Clothing Over" << endl;
  }
  else
    cout << "Clothing Under" << endl;

  if(userBudget.misc >= budget.misc)
  {
    if(userBudget.misc == budget.misc)
      cout << "Miscellaneous Even" << endl;
    else
      cout << "Miscellaneous Over" << endl;
  }
  else
    cout << "Miscellaneous Under" << endl;
  

  budgetTotal = budget.housing + budget.utilities + budget.houseExpenses + budget.transportation + budget.food + budget.medical + budget.insurance + budget.entertainment + budget.clothing + budget.misc;

  userTotal = userBudget.housing + userBudget.utilities + userBudget.houseExpenses + userBudget.transportation + userBudget.food + userBudget.medical + userBudget.insurance + userBudget.entertainment + userBudget.clothing + userBudget.misc;

 if(userTotal >= budgetTotal)
  {
    if(userTotal == budgetTotal)
      cout << "You were even on budget";
    else
    {
      calculation = userTotal - budgetTotal;
      cout << fixed << setprecision(PRECISION) << "You were $" << calculation << " over budget"; 
    }
      
  }
  else
  {
    calculation = budgetTotal - userTotal;
    cout << fixed << setprecision(PRECISION) << "You were $" << calculation << " under budget";
  }

}

void fillIn(monthlyBudget &userBudget)
{
  cout << "Enter housing cost for the month:$" << endl;
  cin >> userBudget.housing;
  cout << "Enter utilities cost for the month:$" << endl;
  cin >> userBudget.utilities;
  cout << "Enter household expenses cost for the month:$" << endl;
  cin >> userBudget.houseExpenses;
  cout << "Enter transportation cost for the month:$" << endl;
  cin >> userBudget.transportation;
  cout << "Enter food cost for the month:$" << endl;
  cin >> userBudget.food;
  cout << "Enter medical cost for the month:$" << endl;
  cin >> userBudget.medical;
  cout << "Enter insurance cost for the month:$" << endl;
  cin >> userBudget.insurance;
  cout << "Enter entertainment cost for the month:$" << endl;
  cin >> userBudget.entertainment;
  cout << "Enter clothing cost for the month:$" << endl;
  cin >> userBudget.clothing;
  cout << "Enter miscellaneous cost for the month:$" << endl;
  cin >> userBudget.misc;
}