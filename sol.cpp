class Solution {
    public:
        string intToRoman(int num) {
        
        //  basically we map the value with string ;
    
        vector<int> val = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        vector<string>sym  = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    
    
        string result = "";
    
    
        for(int i = 0; i<13; i++){
        
        // count the how many time the val[i] can appear in the given numbers
        int times = num/val[i];
    
        while(times--){
           result += sym[i];
        }
    
       num = num%val[i];  // remaining number;
    
    
        }
    
    
    return result;
        }
    };