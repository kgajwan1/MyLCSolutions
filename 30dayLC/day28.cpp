// new good one
class FirstUnique {
public:
    unordered_map<int, list<int>::iterator> umap;
    list<int> keys;
    FirstUnique(vector<int>& nums) {
       for(auto num:nums){
           add(num);     
           }
     } 
    int showFirstUnique() {
       if(!keys.empty()) return keys.front();
        return -1;
    }
    
    void add(int value) {
        if(umap.find(value)!= umap.end()){
            list<int>::iterator it=  umap[value];
            if(it!=keys.end()){
                keys.erase(it);
                umap[value]= keys.end();
                }
            }
            else{
               keys.push_back(value);
               list<int>::iterator it= keys.end();
               it--;
               umap[value]= it;
           }
       }    
};

/**
 * Your FirstUnique object will be instantiated and called as such:
 * FirstUnique* obj = new FirstUnique(nums);
 * int param_1 = obj->showFirstUnique();
 * obj->add(value);
 */
