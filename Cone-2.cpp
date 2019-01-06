#include<iostream>

using namespace std;



class Customer;



class BookStore

{

private:

    string bookTitle,writerName;

    int price,quantity,edition;



public:

    BookStore(){}



    BookStore(string a,string b,int c,int d,int e)

    {

        bookTitle = a;

        writerName = b;

        price = c;

        quantity = d;

        edition = e;

    }



    void showBookStore()

    {

        cout<<"Book Title    :  "<<bookTitle<<endl;

        cout<<"Writer Name   :  "<<writerName<<endl;

        cout<<"Price         :  "<<price<<endl;

        cout<<"Edition       :  "<<edition<<endl;

        cout<<"Quantity      :  "<<quantity<<endl;

    }

};



class BookCetegory : public BookStore

{

private:

    string cetegory;



public:

    BookCetegory(){}



    BookCetegory(string ct,string a,string b,int c,int d,int e):BookStore(a,b,c,d,e)

    {

        cetegory = ct;

    }



    void showDetail()

    {

        cout<<"Book Description : "<<endl<<endl;

        cout<<"Book Category :  "<<cetegory<<endl;

        showBookStore();



        cout<<endl;

    }



    friend void buyBooks(BookCetegory a, Customer b);

};



class Customer

{

private:

    string name;



public:

    Customer(){}



    Customer(string a)

    {

        name = a;

    }





    friend void buyBooks(BookCetegory a, Customer b);

};



    void buyBooks(BookCetegory a, Customer b)

    {

        cout<<"Dear customer Mr./Mrs. "<<b.name<<" , you will get discount if you are our regular customer."<<endl;

    }



int main()

{

    BookCetegory A("Fiction","Fiction Book","K.M. Mosiur",500,20,5);

    BookCetegory B("Non-Fiction","A book of Non Fiction","A.Z. Jihad",450,25,7);

    BookCetegory C("Comic","A good book on Comic","A.R. Tanim",400,18,6);



    A.showDetail();

    B.showDetail();

    C.showDetail();



    Customer D("Rahim");

    buyBooks(A,D);



}
