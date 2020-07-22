class Solution {
public:
    string intToRoman(int num) {
        string r;
        while(num>0){
            if(num>=1000){
                r.append("M");
                num -= 1000;
            }
            else if(num>=900){
                r.append("CM");
                num -= 900;
            }
            else if(num>=500){
                r.append("D");
                num -= 500;
            }
            else if(num>=400){
                r.append("CD");
                num -= 400;
            }
            else if(num>=100){
                r.append("C");
                num -= 100;
            }
            else if(num>=90){
                r.append("XC");
                num -= 90;
            }
            else if(num>=50){
                r.append("L");
                num -= 50;
            }
            else if(num>=40){
                r.append("XL");
                num -= 40;
            }
            else if(num>=10){
                r.append("X");
                num -= 10;
            }
            else if(num>=9){
                r.append("IX");
                num -= 9;
            }
            else if(num>=5){
                r.append("V");
                num -= 5;
            }
            else if(num>=4){
                r.append("IV");
                num -= 4;
            }
            else if(num>=1){
                r.append("I");
                num -= 1;
            }
        }

        return r;
    }
};
