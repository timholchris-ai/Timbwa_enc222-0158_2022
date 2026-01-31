#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name;
    int age;
    int serviceYear;
    double salary;
    
public:
    // Parameterized Constructor
    Employee(string empName, int empAge, int empServiceYear, double empSalary) {
        name = empName;
        age = empAge;
        serviceYear = empServiceYear;
        salary = empSalary;
        cout << "Employee object created for: " << name << endl;
    }
    
    // Destructor
    ~Employee() {
        cout << "Employee object destroyed for: " << name << endl;
    }
    
    // Accessor Methods (Getters)
    string getName() const {
        return name;
    }
    
    int getAge() const {
        return age;
    }
    
    int getServiceYear() const {
        return serviceYear;
    }
    
    double getSalary() const {
        return salary;
    }
    
    // Display employee information
    void displayInfo() const {
        cout << "\n=== Employee Information ===" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << " years" << endl;
        cout << "Years of Service: " << serviceYear << " years" << endl;
        cout << "Salary: $" << salary << endl;
        cout << "===========================\n" << endl;
    }
};

// Main function to test the Employee class
int main() {
    // Create Employee objects
    Employee emp1("John Smith", 30, 5, 55000.50);
    Employee emp2("Sarah Johnson", 42, 15, 85000.75);
    
    // Access and display information using getter methods
    cout << "\nUsing Getter Methods:" << endl;
    cout << "Employee 1: " << emp1.getName() 
         << ", Age: " << emp1.getAge()
         << ", Salary: $" << emp1.getSalary() << endl;
    
    cout << "Employee 2: " << emp2.getName()
         << ", Service Years: " << emp2.getServiceYear() << endl;
    
    // Display complete information
    emp1.displayInfo();
    emp2.displayInfo();
    
    return 0;
}
