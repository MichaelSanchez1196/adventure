// Nancy Gomez
// Nicholas Roasas
// Noe Lomeli
// Michael Sanchez

#include <iostream>
#include <string>
using namespace std;

char menu();
double climbing(int people);
double scuba(int people);
double skyDive(int people);
double spelunk(int people);

int main(){
  

  return 0;
}
char menu(){
  
}
double climbing(int people){
  
}
double scuba(int people){
  
}
double skyDive(int people){
  
}
double spelunk(int people){
    int days;
    int baseCharge;
    int num;
    double equipRental;
    
    if(people < 5)
    {
        baseCharge = 700 * people;
    }
    else 
    {
        baseCharge = (700 * people) - ((700 * people) * .1);
    }
    
    cout << "How many people want Equipment Rental?\n";
    cin >> num;
    
    if(num == 0)
    {   
        cout << "You chose just the charge of your stay with no equipment.\nYour total amount is $";
        return baseCharge;
    }
    if(num > people || num < 0 )
    {
        while(num > people || num < 0)
        {
            cout << "Please enter a valid number of people.\n";
            cout << "How many people want Equipment Rental?\n";
            cin >> num;   
        }
    }
    
    cout << "How many days will you want the equipment?\n";
    cin >> days;
    
    if(days > 8 || days < 0)
    {
        while(days > 8 || days < 0)
        {
            cout << "Please enter a valid number of days.\n";
            cout << "How many days will you want the equipment?\n"; 
            cin >> days;   
        }
    }

    equipRental = (40 * days) * num; 
    
    cout << "With the amount of "  << people << " people in your stay and the package you chose.\nYour total amount is $";
    
    return baseCharge + equipRental; 
}
