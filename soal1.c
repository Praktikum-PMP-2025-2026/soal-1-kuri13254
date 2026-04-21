/*
Soal 1 - Manuskrip Retak
Nama : Thoriq Al Maududi
NIM  : 13224054
*/

#include <stdio.h>
#include <string.h>

int main(){
    /*Deklarasi Variabel*/
    char inpstr[] = "";

    /*User Input*/
    gets(inpstr);

    /*Pemrosesan*/
    for(int i=0 ; i<strlen(inpstr) ; i++){
       if (inpstr[i] == '('){
        if (inpstr[i+2] == ')' && inpstr[i]>='a' && inpstr[i]<= 'z'){
            i+=2;
        }
       }
    }

    /*Output*/
    printf("%s", inpstr);
}
