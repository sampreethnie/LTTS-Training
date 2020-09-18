#include <iostream>
#include <string>

const double CALL_RATE = 1.0;

class Customer {
  int id;
  std::string name;
  std::string phone;
  double balance;

public:
  static int lastId;
  Customer(std::string nstr, std::string pstr):name(nstr),phone(pstr),balance(y) {
    id = ++lastId;
  }
  Customer(std::string nstr, std::string pstr):name(nstr),phone(pstr),balance(500) { 
    id = ++lastId;
  }
  void makeCall(int nmins) { balance -= nmins * CALL_RATE; }
  void recharge(double amount) { balance += amount; }
  double getBalance() { return balance; }
  void display() {
    // print id,name,phonebalance
  }
};

int Customer::lastId=1000;

int main() {
  Customer a1("Scott", "9845012345", 500.0);
  a1.makeCall(10);
  a1.recharge(100);
  a1.display();

  Customer a2("Meyers", "9845012345");
  a2.display();

  return 0;
};
