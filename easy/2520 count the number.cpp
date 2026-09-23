class Solution {
public:
    int countDigits(int num) {
        int count=0;
        int temp=num;

        bool  visited[10]= {false};
        while(temp >0 ){
        int val=temp%10;
        
        if(!visited[val]){
            visited[val]=true;
        }
            if (num%val==0){
            count++;
            }
            temp=temp/10;
            
        }

        return count;
    }
};