# 121Lab-StudentHeap

## UML
```mermaid
classDiagram
    class Student{
        # string studentString
        # string lastName
        # string firstName
        # Date* dob
        # Date* expectedGrad
        # Address* address
        # int creditHours
        + Student()
        + ~Student()
        + void init(studentString)
        + void printStudent()
        + string getLastFirst()
        + string getLast()
        + string getFirst()
        + int getCreditHours()
    }
    class Address{
        # string street
        # string city
        # string state
        # string zip
        Address()
        void init(street, city, state, zip)
        void printAddress()
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
```

## Address::Address()
```
set street to NA
set city to NA
set state to NA
set zip to NA
```

## Address::init(string street, string city, string state, zip)
```
set Address::street to street
set Address::city to city
set Address::state to state
set Address::zip to zip
```

## Address::printAddress()
```
print street, city, state, zip
```

## Date::Date()
```
set month to 0
set day to 0
set year to 0
set dateString to NA
```

## Date::init(dateString)
```
set Date::dateString to dateString
```

## Address::printDate()
```
print Date::dateString
```

## Student::Student()
```
initialize variables w/ placeholders
```

## Student::~Student()
```
delete Date* dob
delete Date* expectedGrad
delete Address* address
```

## Student::init(studentString)
```
set Student::studentString to studentString
set strings through ss
set dob, expectedGrad, and address
convert creditHours to int
```

## Student::printStudent()
```
print all student info (first and last name, dob, etc.)
```

## Student::getLastFirst()
```
return lastName firstName
```

## Student::setCredits(creditHours)
```
set Student::creditHours to creditHours
```

## Student::getLastName
```
return lastName
```

## Student::getFirstName
```
return firstName
```

## Student::getCreditHours
```
return creditHours
```
