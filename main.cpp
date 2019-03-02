#include <iostream>
#include <iomanip>

char service_code;
double package_weight = 0;
float shipping_charge = 0, price;

using namespace std;

int main(){
  cout << setw(35) << "************************" << endl;
  cout << setw(30) << "Fast Freight" << endl;
  cout << setw(35) << "************************" << endl;

 // prompt the user for service code and package weight
  cout << "Please enter the service code and weight of the package: ";
  cin >> service_code; // The user need to enter R  for Regular Service, P for Priority Services ,O for Overnight Services
  cin >> package_weight; // The user need to enter the weight of the package

  switch(service_code){
    // User must enter R to chose the Regular services
  case 'R':
    cout << "The services you chose is Regular Service" << endl;
    break;
  // User must enter P  to chose the Priority Services
  case 'P':
    cout << "The services you chose is Priority Service" << endl;
    break;
    // User must enter O to chose the Overnight service
  case 'O':
    cout << "The services you chose is Overnight Service" << endl;
    break;

    default:
    // If the User does not enter a valid service code than the user will get an error massage and quit
    cout << "Error: Invalid service code" << endl;
    return 0;
  }
  // this if statement was created to calculate the package weight that are less or equal than 2 kilograms
  if(package_weight <= 2){

    // to display the package weight for the user
    cout << "The weight of your package is " << fixed << setprecision(1) << package_weight << " Kilograms" << endl;

    // the price of Regular Service when package weight is less or equal than 2kilogram
    if(service_code == 'R'){
      price = 1.00;
    }
    // the price of Priority Service when package weight is less or equal than 2 kilogram
    if(service_code == 'P'){
      price = 3.50;
    }
    // The price of Overnight Service when package weight is less or equal than 2 kilogram
    if(service_code == 'O'){
      price = 16.50;
    }
    // calculate the amount owed
    shipping_charge = (package_weight * price);

    // display the total amout owed to the user
    cout << "The shipping charge for this package is $" << fixed << setprecision(2) << shipping_charge << " Kilograms" <<  endl;

  }
  // this else if was created to calculate the package weight that are greater than 6, but less than or equal than 10.
  else if (package_weight > 6 && package_weight <= 10){

    // to display the package weight for the user
    cout << "The weight of your package is " << fixed << setprecision(1) << package_weight << " Kilograms" << endl;

    // the price of Regular Service when package weight is greater than 6, but less than or equal than 10.
    if(service_code == 'R'){
    price = 2.00;
    }
    // the price of Property Service when package weight is greater than 6, but less than or equal than 10.
    if(service_code == 'P'){
      price = 7.50;

    }
    // the price of Overnight Service when package weight is greater than 6, but less than or equal than 10.
    if(service_code == 'O'){
      price = 21.50;
    }
    // calculate the amout owed
    shipping_charge = (package_weight * price);

    //display the total amount owed to the user
    cout << "The shipping charge for this package is $" << fixed << setprecision(2) << shipping_charge << endl;

  }
  // else was create to calculate the package weight greater than 10
  else {
    // to display the package weight for the user
    cout << "The weight of your package is " << fixed << setprecision(1) << package_weight << " Kilograms" << endl;

   // the price of Regular Service when package weight is greater than 10.
    if(service_code == 'R'){
      price = 2.50;
    }
    // the price of Property Service when package weight is greater than 10.
    if(service_code == 'P'){
      price = 9.50;

    }
    // the price of Overnight Service when package weight is greater than 10.
    if(service_code == 'O'){
      price = 26.50;
    }
    // calculate the amount owed
    shipping_charge = (package_weight * price);

    //display the total amount owed to the user
    cout << "The shipping charge for this package is $" << fixed << setprecision(2) << shipping_charge << endl;

  }

  return 0;
}
