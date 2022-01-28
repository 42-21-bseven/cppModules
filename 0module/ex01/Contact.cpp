#ifndef CONTACT_CPP
#define CONTACT_CPP

#include "Contact.hpp"

Contact::Contact(){
}

void Contact::setFirstName(std::string firstName){
    this->first_name = firstName;
}

void Contact::setLastName(std::string lastName){
    this->last_name = lastName;
}

void Contact::setNickName(std::string nickName){
    this->nick_name = nickName;
}

void Contact::setPhoneNumber(std::string phoneNumber){
    this->phone_number = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret){
    this->darkest_secret = darkestSecret;
}

std::string Contact::getFirstName(){
    return first_name;
}

std::string Contact::getLastName(){
    return last_name;
}

std::string Contact::getNickName(){
    return nick_name;
}

std::string Contact::getPhoneNumber(){
    return phone_number;
}

std::string Contact::getDarkestSecret(){
    return darkest_secret;
}

#endif