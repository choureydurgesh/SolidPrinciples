#include <iostream>
#include <string>
#include <memory> // For std::unique_ptr

// Abstract base class for notification strategies
class INotifier {
public:
    virtual void sendNotification(std::string_view message) const = 0;
    virtual ~INotifier() = default;
};

// Email notification strategy
class EmailNotifier : public INotifier {
public:
    void sendNotification(std::string_view message) const override {
        std::cout << "Sending email: " << message << std::endl;
    }
};

// SMS notification strategy
class SMSNotifier : public INotifier {
public:
    void sendNotification(std::string_view message) const override {
        std::cout << "Sending SMS: " << message << std::endl;
    }
};

// The 'Order' class is now only responsible for processing the order.
class Order {
    std::unique_ptr<INotifier> notifier;

public:
    explicit Order(std::unique_ptr<INotifier> notifier)
        : notifier(std::move(notifier)) {}

    void processOrder(double amount) const {
        std::cout << std::format("Processing order of amount: {:.2f}\n", amount);
        notifier->sendNotification("Your order has been processed.");
    }
};

int main() {
    auto emailNotifier = std::make_unique<EmailNotifier>();
    auto smsNotifier = std::make_unique<SMSNotifier>();

    Order emailOrder(std::move(emailNotifier));
    emailOrder.processOrder(150.0);

    Order smsOrder(std::move(smsNotifier));
    smsOrder.processOrder(200.0);

    return 0;
}
