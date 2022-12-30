#include<iostream>
using namespace std;
struct book
{
    private:
    int bookprice;
    int bookid;
    char bookname[20];
    public:
    void disbook()
    {
         cout<<bookprice<<"  "<<bookid<<"  "<<bookname;
    }

    
    void inputbook()
{
    
    cout<<"enter the price of the book";
    cin>>bookprice;
    cout<<"enter the id of the book";
    cin>>bookid;
    cin.ignore();
    cout<<"enter the name of the book";
    cin.getline(bookname,20);

}
};
int main()
{
    book b1,b2;

    {
        b1.inputbook();
        b1.disbook();
        
    }
}
