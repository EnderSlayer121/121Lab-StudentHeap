# 121Lab-StudentHeap

classDiagram
    class Student{
        # string studentString
        # string lastName
        # string firstName
        # Date* dob
        # Date* expectedGrad
        # Address* Address
        # int creditHours
        + Student()
        + ~Student()
        + void init(studentString)
        + void printStudent()
        + void setFirst(firstName)
        + void setLast(lastName)
        + void getLastFirst()
        + void setCredits(creditHours)
    }
    class Address{
        # string street
        # string city
        # string date
        # string zip
        Address()
        void init(street, city, date, zip)
        void print(Address)
    }
    class Dates{
        # string dateString
        # int month
        # int day
        # int year
        Date()
        void init(dateString)
        void printDate()
    }
