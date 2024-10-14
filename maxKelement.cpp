#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for(auto val: nums){
            pq.push(val);
        }
        long long ans=0;
        int val;
        while(k--){
            val=pq.top();
            pq.pop();
            ans+=val;
            pq.push(ceil(double(val/3.0)));
        }
        return ans;
    }
};

int main(){
    return 0;
}