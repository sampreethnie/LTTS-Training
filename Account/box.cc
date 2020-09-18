#include<iostream>
#include "box.h"
Box::Box() :
    m_length(0), m_breadth(0), m_height(0) {

}
Box::Box(int a, int b, int c) :
  m_length(a), m_breadth(b), m_height(c) {

}
Box::Box(const Box& ref) :
        m_length(ref.m_length), m_breadth(ref.m_breadth),
                                              m_height(ref.m_height) {

}
double Box::volume() {
  balance += amount;
}
void Account::debit(double amount) {
  //min balance check
  balance -= amount;
}
int Account::getCustomerId() {
  return customerId;
}
std::string Account::getCustomerName() {
  return customerName;
}
double Account::getBalance() const {
    return balance;
}
void Account::display() {
    std::cout << customerId << "," << customerName << ","
                                         << balance << "\n";
}

