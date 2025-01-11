//
//  main.cpp
//  Retreat-Booking
//
//  Created by Stephanie Vergil on 1/11/25.
//

#include <iostream>
#include <string>
using namespace std;

// Global constants
const double BURGUNDY_BASE = 350.0;
const double LEADERSHIP_INSTRUCTION = 100.0;
const double REQUIRED_EQUIPMENT = 40.0;
const double SCOTT_BASE = 1000.0;
const double COX_BASE = 400.0;
const double LODGING = 65.0;
const double LUXURY_LODGING = 120.0;
const double JOHNSON_BASE = 700.0;
const double EQUIPMENT = 40.0;

// Function prototypes
double Burgundy();
double Scott();
double Cox();
double Johnson();
void sendInvoice(const string& email, double totalCost);
int menu();

int main() {
    double totalCost = 0.0;
    string customerEmail;

    int selection = menu();

    while (selection != 0) {
        switch (selection) {
            case 1:
                totalCost += Burgundy();
                break;
            case 2:
                totalCost += Scott();
                break;
            case 3:
                totalCost += Cox();
                break;
            case 4:
                totalCost += Johnson();
                break;
            default:
                cout << "Invalid selection. Please try again.\n";
        }

        cout << "Would you like to add any additional retreats? (y/n): ";
        char additionalOptions;
        cin >> additionalOptions;

        if (additionalOptions == 'n') {
            break;
        }

        selection = menu();
    }

    cout << "Your total cost is $" << totalCost << ". Please enter your email to receive an invoice: ";
    cin >> customerEmail;

    sendInvoice(customerEmail, totalCost);

    cout << "Thank you. An invoice will be sent to " << customerEmail << " within 24 hours. We look forward to seeing you soon!\n";

    return 0;
}

int menu() {
    cout << "Which retreat would you like to purchase?\n";
    cout << "1. The Ron Burgundy People Know Me Retreat\n";
    cout << "2. The Michael Scott World's Best Boss Retreat\n";
    cout << "3. Dr. Cox Presents Man Not Caring Retreat\n";
    cout << "4. Tony Johnson's I Really Don’t Care Retreat\n";
    cout << "0. Exit\n";
    cout << "Enter your choice: ";

    int choice;
    cin >> choice;
    return choice;
}

double Burgundy() {
    cout << "The Ron Burgundy People Know Me Retreat:\n";
    cout << "Base charge = $350 per person\n";
    cout << "Leadership instruction = $100 per person\n";
    cout << "Required equipment = $40 per person\n";

    int tickets;
    cout << "How many tickets would you like to purchase? ";
    cin >> tickets;

    char addInstruction;
    cout << "Would you like to add the Leadership Instruction option? (y/n): ";
    cin >> addInstruction;

    int instructionTickets = 0;
    if (addInstruction == 'y') {
        cout << "How many Leadership Instruction tickets would you like to add? ";
        cin >> instructionTickets;
    }

    return BURGUNDY_BASE * tickets + LEADERSHIP_INSTRUCTION * instructionTickets + REQUIRED_EQUIPMENT * tickets;
}

double Scott() {
    cout << "The Michael Scott World's Best Boss Retreat:\n";
    cout << "Base charge = $1000 per person\n";
    cout << "Leadership instruction = $100 per person\n";

    int tickets;
    cout << "How many tickets would you like to purchase? ";
    cin >> tickets;

    char addInstruction;
    cout << "Would you like to add the Leadership Instruction option? (y/n): ";
    cin >> addInstruction;

    int instructionTickets = 0;
    if (addInstruction == 'y') {
        cout << "How many Leadership Instruction tickets would you like to add? ";
        cin >> instructionTickets;
    }

    return SCOTT_BASE * tickets + LEADERSHIP_INSTRUCTION * instructionTickets;
}

double Cox() {
    cout << "Dr. Cox Presents Man Not Caring Retreat:\n";
    cout << "Base charge = $400 per person\n";
    cout << "Lodging = $65 per day per person\n";
    cout << "Luxury lodging = $120 per day per person\n";

    int tickets;
    cout << "How many tickets would you like to purchase? ";
    cin >> tickets;

    int lodgingDays, luxuryLodgingDays;
    cout << "How many days would you like lodging? ";
    cin >> lodgingDays;
    cout << "How many days would you like luxury lodging? ";
    cin >> luxuryLodgingDays;

    return COX_BASE * tickets + LODGING * lodgingDays + LUXURY_LODGING * luxuryLodgingDays;
}

double Johnson() {
    cout << "Tony Johnson's I Really Don’t Care Retreat:\n";
    cout << "Base charge = $700 per person\n";
    cout << "Equipment = $40 per day per person\n";

    int tickets;
    cout << "How many tickets would you like to purchase? ";
    cin >> tickets;

    int equipmentDays;
    cout << "How many days would you like equipment? ";
    cin >> equipmentDays;

    return JOHNSON_BASE * tickets + EQUIPMENT * equipmentDays;
}

void sendInvoice(const string& email, double totalCost) {
    cout << "Invoice sent to " << email << ". Total cost: $" << totalCost << "\n";
}

