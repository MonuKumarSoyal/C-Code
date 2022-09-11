#include <iostream>
using namespace std;

class shop
{
    int ItemID[100];
    int ItemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void SetPrice(void);
    void DisplayPrice(void);
};

void shop ::SetPrice(void)
{
    cout << "Enter the ID of the item no " << counter + 1 << endl;
    cin >> ItemID[counter];
    cout << "Enter the price ";
    cin >> ItemPrice[counter];
    counter++;
}

void shop ::DisplayPrice(void)
{
    for(int i = 0; i < counter; i++){
            cout<<"The price of the item with ID "<< ItemID[i]<< " is "<< ItemPrice[i]<<endl;
    }
}

int main()
{
    int control = 1;
    shop dukaan;
    dukaan.initCounter();
    while(control == 1){
        dukaan.SetPrice();
        cout<<"1. For setting ID and Price"<<endl<<"2. For Displaying the price of the item with id"<<endl;
        cin>>control;
    }
    dukaan.DisplayPrice();
    return 0;
}