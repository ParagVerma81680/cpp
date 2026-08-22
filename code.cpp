#include <bits/stdc++.h>
using namespace std;

class GPayUser {

    // attributes for the class
    private:
    long sender_account_number;
    string sender_name;

    long receiver_account_number;
    string receiver_name;

    long paidamount;

    public:

        // default constructor
        GPayUser() {
            sender_account_number = 0;
            sender_name = "";

            receiver_account_number = 0;
            receiver_name = "";

            paidamount = 0;
        }


        // getter for sender account number
        long GetSenderAccountNumber() {
            return sender_account_number;
        }

        // getter for sender name
        string GetSenderName() {
            return sender_name;
        }

        // getter for receiver account number
        long GetReceiverAccountNumber() {
            return receiver_account_number;
        }

        // getter for receiver name
        string GetReceiverName() {
            return receiver_name;
        }

        // getter for paid amount
        long getpaidAmount() {
            return paidamount;
        }


        // setter for sender account number
        void SetSenderAccountNumber(long acc) {
            sender_account_number = acc;
        }

        // setter for sender name
        void SetSenderName(string n) {
            sender_name = n;
        }

        // setter for receiver account number
        void SetReceiverAccountNumber(long acc) {
            receiver_account_number = acc;
        }

        // setter for receiver name
        void SetReceiverName(string n) {
            receiver_name = n;
        }

        // setter for paid amount
        void setpaidAmount(long paid) {
            paidamount = paid;
        }


        // function for transaction details
        void details() {

            cout << "\n========== TRANSACTION DETAILS ==========\n";

            cout << "Send By: " << sender_name << endl;
            cout << "Sender Account Number: "<< sender_account_number << endl;
            cout << "Amount Sent " <<"by "<<sender_name<<" is "<<paidamount<<endl;
            cout << "Received By: " << receiver_name << endl;
            cout << "Receiver Account Number: "<< receiver_account_number << endl;
            cout << "Amount received " <<  "by "<<receiver_name<<" is "<<paidamount<<endl;

        }


        // destructor
        ~GPayUser() {
            cout << "Section ended for transaction of: "<< paidamount << endl;
        }
};


int main() {

    GPayUser user[5];


    for(int i = 0; i < 5; i++) {

        long sender_acc;
        string sender_name;

        long receiver_acc;
        string receiver_name;

        long paid;


        // Sender details
        cout << "\nDetails of Sender" << endl;

        cout << "Enter sender account number: ";
        cin >> sender_acc;

        cout << "Enter sender name: ";
        cin >> sender_name;

        cout << "Enter paid amount: ";
        cin >> paid;


        // Receiver details
        cout << "\nDetails of Receiver" << endl;

        cout << "Enter receiver account number: ";
        cin >> receiver_acc;

        cout << "Enter receiver name: ";
        cin >> receiver_name;


        // Store sender details
        user[i].SetSenderAccountNumber(sender_acc);
        user[i].SetSenderName(sender_name);

        // Store receiver details
        user[i].SetReceiverAccountNumber(receiver_acc);
        user[i].SetReceiverName(receiver_name);

        // Store amount
        user[i].setpaidAmount(paid);




        // Display transactio
        user[i].details();

        cout << "\n============== Transaction "<< i + 1<< " ended ==============\n";
    }



    return 0;
}
