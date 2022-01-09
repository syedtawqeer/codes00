#include<iostream>
using namespace std;
int main()
{
    //Suppose we have only 100 product (Quantity of product) in stock
    int stock=100, order;
    char credit,cr;

    cout << "Enter the customer order: "<< endl ;
    cin >> order;
    //check for customer credit
    cout << "Is his credit is ok? (Press y/n)\n"<< endl ;
    cin>>credit;

    //check for rule (i)
    if(order<=stock && credit == 'y' || credit == 'Y') //user may enter capital letter also
        cout << "Sir,\n\t We supplied your requirement\n\t\t Quantity:" <<order<< endl;

    //check for rule (ii)
    else if(order>stock && credit == 'y' || credit == 'Y')
        cout << "Sir,\n\t We supplied" << stock<< "products and balance will be shipped later.";

    //check for rule (iii)
    else
        cout << "Sir,\n\t Please first clear your credit, until we can't supply you any more." << endl;
}
