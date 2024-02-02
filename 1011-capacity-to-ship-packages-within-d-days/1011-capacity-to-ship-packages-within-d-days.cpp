class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int left = minCapacity(weights);
        int right = maxCapacity(weights);
        while(left <= right){
            int mid = (left + right)/2;
            int simDays = simulateShipping(weights, mid);
            if (simDays <= days){
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }

    int simulateShipping(vector<int>& weights, int capacity){
        int load = 0;
        int days = 1;
        for (const int weight: weights){
            if (load + weight > capacity){
                load = 0;
                days++;
            }
            load += weight;
        }
        return days;
    }

    int minCapacity(vector<int>& weights){
        int i = weights[0];
        for(const int num:weights){
            if(num>i){
                i=num;
            }
        }
        return i;
    }

    int maxCapacity(vector<int>& weights){
        int i = 0;
        for(const int num:weights){
            i += num;
        }
        return i;
    }
};