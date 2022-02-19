#include "Contact.hpp"

int ft_isNumber(std::string phoneNumber){
    int i = 0;
    while (phoneNumber[i]){
        if ((phoneNumber[i] >= 65 && phoneNumber[i] <= 90) \
        || (phoneNumber[i] >= 97 && phoneNumber[i] <= 122)){
            return 0;
        }
        i++;
    }
    return 1;
}