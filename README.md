
A repository to demonstrate and document SOLID principles in software design.


 SOLID is an acronym for five principles of software design introduced by Robert C Martin (Uncle Bob). 
 These principles guide software developers in designing systems that are easier to understand, extend, and maintain.

1. S - Single Responsibility Principle (SRP)
   - A class should have only one reason to change which means a class should focus on only one functionality or responsibility in the system.
   
   Why ? 
   Having multiple esponsibilities in a single class makes it harder to understand, maintain, and test.
   
2. O - Open/Closed Principle (OCP)
   - A class should be open for extension but closed for modification.
   
   Why ?
   Changing an existing class risks introducing bugs. Instead, add new functionality by extending the existing behavior.

3. L - Liskov Substitution Principle (LSP)
   - A class Subtypes must be substitutable for their base class types.(Ensure derived classes extend behavior without changing the expected functionality)

   Why ?
   Violating LSP leads to fragile code that behaves unpredictably when working with polymorphism.

4. I - Interface Segregation Principle (ISP)
   - A class should not be forced to implement interfaces it does not use.(Split large interfaces into smaller, specific ones)

   Why ? 
   Large interfaces are harder to implement and maintain. Clients should only depend on the functionality they use


5. D - Dependency Inversion Principle (DIP)
   - High-level modules should not depend on low-level modules. Both should depend on abstractions.Decouple dependencies between higher and lower-level layers.

   Why?
   Reduces coupling and makes code more flexible to changes.



How to use the repository : 

 1. Clone the repository
 - git clone https://github.com/choureydurgesh/SolidPrinciples.git
 - cd SolidPrinciples

 2. Explore each principle's folder to understand its explanation and examples.
 
