# include <stdio.h>
# include <stdlib.h>
# include <string.h>
String formatNum(int num);
int main(){
    
    int num = 12345;
    printf("%s" , formatNum(num));
    return 0;   
}


String formatNum(int num) {
 
    int total_processed = 0;
    String ret = "";
 
    while (num > 0){
        if (total_processed != 0 && total_processed %3 == 0)
            ret += ",";
        ret += (char) (num %10 + '0');
        total_processed ++;
        num /= 10;
    }
    reverse (ret.begin(), ret.end());
 
    return ret;
}