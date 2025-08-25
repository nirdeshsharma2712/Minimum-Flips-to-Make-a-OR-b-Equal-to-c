class Solution {
public:
    int minFlips(int a, int b, int c) {
        int count = 0;  
        while(a>0 || b>0 || c>0){
            int d1 = a&1;
            int d2 = b&1;
            int d3 = c&1;
            if(d3==0){
                if(d1==1) count++;
                if(d2==1) count++;
            }
            else if(d1==0 && d2==0) count++;
            if(a!=0) a = a>>1;
            if(b!=0) b = b>>1;
            if(c!=0) c = c>>1;
        }
        return count;
    }
}; 
