class Solution {
public:
    int calPoints(vector<string>& operations) {
        
        //x --> 12, x -->4 ; + --> = 16, D --> 2*16 = 32, C --> remove 32. finally total sum =12+16+32-32 = 28   
        vector<int> record;
        int sum=0;
        for(int i = 0; i<operations.size(); i++)
        {
            if (operations[i] == "D") record.push_back( 2 * (record.back()));
            
            else if (operations[i] == "C") record.pop_back();

            else if (operations[i] == "+") record.push_back(record.back() + record[record.size()-2]);

            else (record.push_back(stoi(operations[i])));

           
        }
        for (int i = record.size()-1; i>=0; i--)
        {
            sum +=record[i];
        }
        return sum;
        
    }
};