#include <iostream>
#include <string>

class Order {
public:
    void processOrder(double amount) {
        std::cout << "Processing order of amount: " << amount << std::endl;

        // Notification logic (email or SMS)
        std::cout << "Sending notification to customer: Your order has been processed." << std::endl;
    }
};

int main() {
    
    Order order;
    order.processOrder(150.0);

    return 0;
}
