// Avril Cao
// Homework 3
// October 15, 2024


#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;


// I used #include <iostream> in order to use cout
// I used #include <string> so I can put in a string of characters in tge variable
// I used #include <iomanip> to use set precision
// I used #include <fstream> to open and close files
// I used using namespace std; in order to not have to use std:: every time I use cout of endl


int main ()
// I use int main () to start the program


{
    double moneyStart;
    double transactionsTotal;
    double transactionsAmount;
    double accountTotal;
    double totalWithdrawals;
    double totalDeposits;
    char i;
    string transactionsType;
    ifstream inFile;
    ofstream outFile;
   
// I used double to declare a number variable
// I used char to declare a single character varaible
// I used string to declare a multiple characters variable
// I used ifstream to declare an ifstream variable
// I used ofstream to declare an ofstream variable


    inFile.open("inTransactionsData.txt");
    outFile.open("outTransactionsData.txt");


// I used inFile.open and outFile.open to open the files


    inFile >> moneyStart;
    outFile << "STARTING BALANCE: " << moneyStart << endl;


    outFile << "TYPE......AMOUNT....................BALANCE" << endl;


while (!inFile.eof())


// I used a used a while loop because we don't know the total transactions


{
    inFile >> transactionsType;
    outFile << transactionsType << endl;


if (transactionsType == "W")
    inFile >> transactionsAmount >> moneyStart;
    outFile << ".........." << transactionsAmount << "........................" << moneyStart - transactionsAmount << endl;


if (transactionsType == "D")
    inFile >> transactionsAmount >> moneyStart;
    outFile << ".........." << transactionsAmount << "........................" << moneyStart - transactionsAmount << endl;


// I used if statements to provide different statements for transactionsType as either a withdrawal or a deposit


}
    inFile >> accountTotal;
    outFile << "ENDING BALANCE: " << accountTotal << endl;


    inFile >> totalWithdrawals;
    outFile << "TOTAL WITHDRAWALS: " << totalWithdrawals << endl;


    inFile >> totalDeposits;
    outFile << "TOTAL DEPOSITS: " << totalDeposits << endl;


    inFile >> totalWithdrawals >> totalDeposits;
    outFile << "TOTAL WITHDRAWALS AND DEPOSITS: " << totalWithdrawals + totalDeposits << endl;


    inFile.close();
    outFile.close();


    return 0;
}


// PART 1
/* Account total at start of day: 5000
Total transactions: 7
Transaction type: withdrawal
Amount in transaction: 200
Balance after transaction: 4800
Balance after transaction: 4800
Transaction type: withdrawal
Amount in transaction: 800
Balance after transaction: 4000
Balance after transaction: 4000
Transaction type: withdrawal
Amount in transaction: 40
Balance after transaction: 3960
Balance after transaction: 3960
Transaction type: deposit
Amount in transaction: 90
Balance after transaction: 3960
Balance after transaction: 4050
Transaction type: deposit
Amount in transaction: 100
Balance after transaction: 4050
Balance after transaction: 4150
Transaction type: deposit
Amount in transaction: 1000
Balance after transaction: 4150
Balance after transaction: 5150
Transaction type: withdrawal
Amount in transaction: 20
Balance after transaction: 5130
Balance after transaction: 5130
Account total at end of day: 5130 */

