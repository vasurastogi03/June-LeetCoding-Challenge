class RandomizedSet {
private:
    unordered_map<int,int> positions;    //Index all numbers by position
    vector<int> nums;                    //The set of numbers
    int n;                               //The size of the set
    
public:
    /** Initialize your data structure here. */
    RandomizedSet() {
        this->n = 0;
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if (positions.count(val) == 0){
            positions[val] = n;
            n++;
            nums.push_back(val);
            return true;
        } else
            return false;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if (positions.count(val)){
            this->nums[positions[val]] = this->nums.back();
            this->positions[nums.back()] = positions[val];
            this->nums.pop_back();
            n--;
            this->positions.erase(val);
            return true;
        } else
            return false;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        return nums[rand() % n];             //Index accessed is a random number between 0 and n-1
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
