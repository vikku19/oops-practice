#include<iostream>
#include"Book.h"
using namespace std;

//void printBookDetails(const Book& book);
int main(){

    Book b1("vivek","My Life","Docu",5);
    
    b1.printBookDetails();  
//    printBookDetails(b1);
    return 0;
}
/*
void printBookDetails(const Book& book){
    cout<<"Author is "<<book.getAuthor()
        <<" and the title of the book is" << book.getTitle()
        <<". It comes under gener" <<book.getGenre() 
        <<" and the total number of pages are "<< book.getNumPages()<<endl;
}
*/
