#include <iostream>
#include <string>
#include <array>

#define taxRateDefine 0.1
using namespace std;

int main(){
    // display an introductory message
    cout << "this will help you calculate your sales and the give you receipt." << endl;
    cout << "C++ is the a compiled language"<<endl;
    const float taxRate = 0.1;
    cout << "product name: ";
    string productName;
    cin >> productName;
    string categories[] = {"Electronics", "Groceries", "Clothing", "Stationary", "Miscellaneous"};
    cout << "1. Electronics"<<endl
         << "2. Groceries"<<endl
         << "3. Clothing"<<endl
         << "4. Stationary"<<endl
         << "5. Miscellaneous"<<endl
         << "please insert the product categories(1-5): ";
    int categoryNum;
    cin >> categoryNum;
    if (categoryNum < 1 || categoryNum > 5) {
        cout << "the number must be in between 1 and 5!!";
        cin >> categoryNum;

    } else {
    switch (categoryNum) {
        case 1:
            cout << "category: " << categories[categoryNum -1] <<endl;
            break;
        case 2:
            cout << "category: " << categories[categoryNum -1] <<endl;
            break;
        case 3:
            cout << "category: " << categories[categoryNum -1] <<endl;
            break;
        case 4:
            cout << "category: " << categories[categoryNum -1] <<endl;
            break;
        case 5:
            cout << "category: " << categories[categoryNum -1] <<endl;
            break;
    }
    }
    int initialInventoryQty ;
    cout << "\n";
    cout << "insert the amount of inventory: " ;
    cin >> initialInventoryQty;
    float unitProductPrice;
    cout << "insert the price per product: ";
    cin >> unitProductPrice;
    int soldItems;
    cout << "Number of sold items: ";
    cin >> soldItems;
    for (int i = 1; i < soldItems; i++){
        cout << "item sold " << productName<< " with a price " << unitProductPrice;
    }
    int newInventoryQty = initialInventoryQty - soldItems;
    string lowOrSufficient=newInventoryQty<10 ? "low inventory":"sufficient inventory";
    cout<<lowOrSufficient<<endl;


    float totalSalesAmt = soldItems * unitProductPrice;

    auto totalSalesCopy = totalSalesAmt;
    decltype (initialInventoryQty) initialInventoryCopy;
    initialInventoryCopy=8067;
    cout << "preprocessor tax rate: " << taxRateDefine<< "."<< endl
         << "constant variable tax rate: " << taxRate << "."<< endl
         << "product name: " << productName<< endl
         << "category: " << categories[categoryNum]<<endl
         << "helper initial inventory variable and total sales helpers: " << initialInventoryCopy << " &" << totalSalesCopy;


}
