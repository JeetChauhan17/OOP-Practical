#include <iostream>
using namespace std;

class Book {

private:
    int ISBN;
    string bookName;
    string authorName;
    double price;

public:
    Book () : ISBN(0), bookName(""), authorName(""), price(0){
        // Default paramters
    }

    Book(int isbn, string name, string author, double amt){
        ISBN = isbn;
        bookName = name;
        authorName = author;
        price = amt;
    }

    int getISBN(){
        return ISBN;   
    }

    string getBookName(){
        return bookName;
    }
    string getAuthorName(){
        return authorName;
    }
    double getPrice(){
        return price;
    }

    void displayBookInfo(){
    
    cout<<"ISBN Number : "<<ISBN<<endl;    
    cout<<"Book Title : "<<bookName<<endl;    
    cout<<"Author Name : "<<authorName<<endl;    
    cout<<"Price : "<<price<<endl;    
}
};


int main(){

    Book book[5];
    book[0] = Book();
    book[1] = Book(1001, "Think and Grow Rich", "Napolean Hill", 1499);
    book[2] = Book(1002, "As a man Thinketh", "James Allen", 2999);
    book[3] = Book(1003, "Meditations", "Marcus Aurellius", 1999);
    book[4] = Book(1004, "Sherlock Holmes", "Arthur Conan Doyale", 1499);

    for(int i=0; i<=5; i++){
        cout<<"Book no: "<<i<<endl;
        cout<<"ISBN : "<<book[i].getISBN()<<endl;
        cout<<"Title : "<<book[i].getBookName()<<endl;
        cout<<"Author : "<<book[i].getAuthorName()<<endl;
        cout<<"Price : "<<book[i].getPrice()<<endl;
        book[i].displayBookInfo();
        cout<<endl<<endl;
    }
    return 0;
}