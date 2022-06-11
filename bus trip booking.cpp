#include <iostream>
using namespace std;
struct passengers{
    int adult;
    int kids;
};
int price(int, int);
int main() {
    int sum,sold_tickets;
    int available_seats = 90;
    cout << "The Destination is The Hurghada" << endl;
    cout << "The Trip Time is 10:20AM" << endl;
    cout << "The Name of the Bus Driver is Ahmed" << endl;
    cout << "available seats : " << available_seats << endl;
    passengers user[20];
    for (int i = 0; i < 20; i++) {
        cout<<"Enter adults tickets"<<endl;
        cin>> user[i].adult;
        cout<<"Enter kids tickets"<<endl;
        cin>> user[i].kids;
        if((user[i].adult<0) || (user[i].kids<0))
        {
            cout<<"Enter Zero or More"<<endl;
            i--;
        }
        if ((user[i].adult+user[i].kids)>available_seats)
        {
            cout<<"Sorry, not available seats"<<endl;
            user[i].adult = 0;
            user[i].kids = 0;
        }
        else
        {
            available_seats-=(user[i].adult+user[i].kids);
            sum = price(user[i].adult, user[i].kids);
            cout<<"The Price is : "<<sum<<endl;
        }
        cout<<"available seats : "<<available_seats<<endl;
        sold_tickets=50-available_seats;
        cout<<"The Number of Tickets Sold : "<<sold_tickets<<endl;
    }
    return 0;
}
int price(int adults,int kids){
    int adults_price = 100, kids_price = 60, sum;
    sum = (adults * adults_price) + (kids * kids_price);
    return sum;
}