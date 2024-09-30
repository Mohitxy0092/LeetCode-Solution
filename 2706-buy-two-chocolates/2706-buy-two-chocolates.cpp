class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int minx = INT_MAX;
        int secMin = INT_MAX;
        for(int price : prices) {
            if(minx>price) {
                secMin=minx;
                minx=price;
                
            }
            else{
                secMin = min(secMin,price);
            }
        }
        if(minx + secMin > money) return money;
        
        return money - (minx+secMin);
    }
};