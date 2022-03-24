class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        int count=0;
        sort(people.begin(),people.end());
        int i=0,j=n-1;
        while(i<j)
        {
            if((people[i]+people[j])<=limit)
            {
              
                i++;
                j--;
            }
            else
            {
               
                j--;
            }
            count++;
        }
        if(i==j)
        { count++;}
        
        return count;
    }
};
