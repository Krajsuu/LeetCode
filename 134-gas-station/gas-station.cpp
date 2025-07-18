class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int tank = 0;
        int startIndex = 0;
        int totalCost = 0;
        for(int i = 0; i < gas.size();i++){
            int val = gas[i] - cost[i];
            totalCost += val;
            tank += val;

            if( tank < 0){
                startIndex = i+1;
                tank = 0;
            }
        }
        cout<<startIndex<<" "<<totalCost;
        return (startIndex < gas.size() && totalCost >= 0) ? startIndex : -1;
    }
};