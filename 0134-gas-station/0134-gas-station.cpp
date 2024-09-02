class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalGas = 0, totalCost = 0, tank = 0, startIndex = 0;
        int n = gas.size();

        for (int i = 0; i < n; i++) {
            totalGas += gas[i];
            totalCost += cost[i];
            tank += gas[i] - cost[i];

            // If tank is negative, we can't start from the current 'startIndex'
            if (tank < 0) {
                startIndex = i + 1;  // Reset starting point
                tank = 0;  // Reset tank
            }
        }

        // If total gas is less than total cost, we can't complete the circuit
        return totalGas >= totalCost ? startIndex : -1;
    }
};