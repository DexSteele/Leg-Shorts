#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void){
    int f = get_int("1st Number: ");
    int t = get_int("2nd Number: ");
    string p = get_string("Math Type: ");
    int s;
    bool n = true;

    for(int i=0; i<strlen(p); i++){
        if(p[i] == '+'){
            s = (f + t);
        }
        else if(p[i] == '-'){
            s = (f - t);
        }
        else if(p[i] == '/'){
            s = (f / t);
        }
        else if(p[i] == '*'){
            s = (f * t);
        }
        else{
            printf("This is not an allowed symbol. please try again with one of these four symbols: /, +, -, or *.\n");
            n = false;
        }
    }
    if(n == true){
        printf("answer: %i\n", s);
    }
    return s;

}
