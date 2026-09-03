#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    // Variable Declarations
    string customerName;
    string itemName;
    int quantity;
    double unitPrice;
    int score1, score2;
    const double TAX_RATE = 0.075; // 7.5% Tax

    // 1. User Input Gathering
    cout << "========================================" << endl;
    cout << "      DATA ENTRY HUB INPUT SYSTEM       " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter customer's full name: ";
    getline(cin, customerName);

    cout << "Enter item name: ";
    getline(cin, itemName);

    cout << "Enter item quantity: ";
    cin >> quantity;

    cout << "Enter item unit price: ";
    cin >> unitPrice;

    cout << "Enter Exam Score 1 (integer): ";
    cin >> score1;

    cout << "Enter Exam Score 2 (integer): ";
    cin >> score2;
    cout << endl;

    // 2. Calculations & Type Casting
    double subtotal = quantity * unitPrice;
    double tax = subtotal * TAX_RATE;
    double totalAmountDue = subtotal + tax;

    // Explicitly casting one integer to double to prevent integer division truncation
    double examAverage = static_cast<double>(score1 + score2) / 2.0;

    // 3. Formatted Terminal Receipt Output
    cout << "========================================" << endl;
    cout << "         CUSTOMER SALES RECEIPT         " << endl;
    cout << "========================================" << endl;
    cout << "Customer: " << customerName << endl;
    cout << "--------------------------------------------------------" << endl;
    
    // Headers setup with explicit widths
    cout << left << setw(20) << "Item" 
         << left << setw(10) << "Qty" 
         << left << setw(12) << "Price" 
         << right << setw(12) << "Total" << endl;
         
    // Item row data
    cout << fixed << setprecision(2);
    cout << left << setw(20) << itemName 
         << left << setw(10) << quantity 
         << left << setw(1) << "$" << setw(11) << unitPrice 
         << right << setw(1) << "$" << setw(11) << subtotal << endl;
         
    cout << "--------------------------------------------------------" << endl;
    
    // Financial Summaries aligned to the right side
    cout << left << setw(42) << "Subtotal:" << right << "$" << setw(11) << subtotal << endl;
    cout << left << setw(42) << "Tax (7.5%):" << right << "$" << setw(11) << tax << endl;
    cout << left << setw(42) << "Total Amount Due:" << right << "$" << setw(11) << totalAmountDue << endl;
    cout << "--------------------------------------------------------" << endl;
    
    // Exam statistics
    cout << left << setw(42) << "Student Exam Average:" << right << examAverage << "%" << endl;
    cout << "========================================" << endl;

    return 0;
}
