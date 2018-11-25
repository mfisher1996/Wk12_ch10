#ifndef personType_H
#define personType_H

#include <iostream>

class extPersonType{
public:
    /**
     print()
     outputs name to stdout
     */
    void print() const{std::cout << firstName <<" "<< midName <<" "<< lastName  << "\n";};
    /**
     setName(string,string)
     sets the firstName to first string and lastName to second string
     */
    void setName(std::string first, std::string last){firstName = first; lastName = last;};
    /**
     setFirst(string)
     sets firstName to string passed.
     */
    void setFirst(std::string first){firstName = first;};
    /**
     setMid(string)
     sets midName to string passed.
     */
    void setMid(std::string mid){midName = mid;};
    /**
     setLast(string)
     sets lastName to string passed.
     */
    void setLast(std::string last){lastName = last;};
    /**
     setNumber(int)
     sets phone to int passed.
     */
    void setNumber(int number){phone=number;};
    /**
     setRelate(int)
     sets relate to int passed
     */
    void setRelate(int rel){relate =rel;};
    /**
     checkFirst(string)
     returns true if firstname is string passed.
     */
    bool checkFirst(std::string first){return(firstName == first);};
    /**
     checkLast(string)
     returns true if lastName is string passed.
     */
    bool checkLast(std::string last){return(lastName == last);};
    /**
     getFirstName()
     returns firstName
     */
    std::string getFirstName() const{return firstName;};
    /**
     returns value in lastName
     */
    std::string getLastName() const{return lastName;};
    /**
     extPersonType()
     contructor of personType
     */
    extPersonType();
    /**
     extPersonType(string string)
     constructor for extPersonType. firstName is set to first string passed. lastName is set to second string passed.
     */
    extPersonType(std::string first, std::string last){firstName = first; lastName = last;};
    /**
     getNumber()
     returns value in phone
     */
    int getNumber(){return phone;};
    /**
     getRelate()
     returns value in relation[relate]
     */
    std::string getRelate(){return relation[relate];}
private:
    std::string firstName;
    std::string lastName;
    std::string midName;
    std::string relation[3] = {"Family","Friend", "Business assosciate"};
    int relate;
    int phone;
};

#endif
