#include <iostream>
using namespace std;

int main() {
    float costPriceDozen, sellingPriceDozen;
    float costPricePerBanana, sellingPricePerBanana;
    float totalCost, totalSelling, result;

    // Input cost price and selling price per dozen bananas
    cout << "Enter the cost price per dozen bananas: ";
    cin >> costPriceDozen;

    cout << "Enter the selling price per dozen bananas: ";
    cin >> sellingPriceDozen;

    
    costPricePerBanana = costPriceDozen / 12;
    sellingPricePerBanana = sellingPriceDozen / 12;


    totalCost = costPricePerBanana * 25;
    totalSelling = sellingPricePerBanana * 25;

    
    result = totalSelling - totalCost;

    if (result > 0)
        cout << "Profit earned on selling 25 bananas: " << result << endl;
    else if (result < 0)
        cout << "Loss incurred on selling 25 bananas: " << -result << endl;
    else
        cout << "No profit, no loss on selling 25 bananas." << endl;

    return 0;
}
