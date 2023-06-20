#include<iostream>
#include<string.h>
using namespace std;
class BankAccount{
public:
string name, pin;
private:
int amount;
public: 
BankAccount(){ 
amount = 0;
name = "Tubuo";
pin = "pin";
}
int deposit(string name1, string pin1, int amt1){
amount += amt1;
cout<<amount;
return amount;
}
int withdrawal(string name2, string pin2, int amt2){
amount -= amt2;
cout<<amount;
return amount;
}
int get_balance(string name3, string pin3){
cout<<amount;
return amount;
}
void change_pin(string name4, string oldpin, string 
newpin){
pin = newpin;
}
};
int main(){
BankAccount Ba;
string myname, mypin;
cout<<"Enter pin value:\t";
cin>>mypin;
cout<<"\nEnter your name:\t";
cin>>myname;
if(mypin == Ba.pin){
string newpin;
cout<<"\nEnter new pin:\t"<<endl;
cin>>newpin;
Ba.change_pin(myname, mypin, newpin);
cout<<"\n\nPIN Changed successfully!"<<endl;
int depAmt1, depAmt2, depAmt3;
//Deposit 1:
cout<<"\nEnter deposit amount:\t";
cin>>depAmt1;
cout<<"Current Balance:";
Ba.deposit(myname, Ba.pin, depAmt1);
//Deposit 2:
cout<<"\n\nEnter deposit amount:\t";
cin>>depAmt2;
cout<<"Current Balance:";
Ba.deposit(myname, Ba.pin, depAmt2);
//Deposit 3:
cout<<"\n\nEnter deposit amount:\t";
cin>>depAmt3;
cout<<"Current Balance:";
Ba.deposit(myname, Ba.pin, depAmt3);
int withAmt1, withAmt2, withAmt3;
//Withdrawal 1:
cout<<"\nEnter Withdraw amount:\t";
cin>>withAmt1;
cout<<"Current Balance:";
Ba.withdrawal(myname, Ba.pin, withAmt1);
//Withdrawal 2:
cout<<"\n\n\nEnter withdraw amount:\t";
cin>>withAmt2;
cout<<"Current Balance:";
Ba.withdrawal(myname, Ba.pin, withAmt2);
//Withdrawal 3:
cout<<"\n\nEnter withdraw amount:\t";
cin>>withAmt3;
cout<<"Current Balance:";
Ba.withdrawal(myname, Ba.pin, withAmt3);
} else{
cout<<"\n\nWrong Pin Entered";
}
return 0;
}
//Overall, this program simulates a basic banking system by allowing the user
// to deposit, withdraw, check balance, and change the PIN for a bank account.
