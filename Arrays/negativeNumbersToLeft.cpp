    // Move all the negative numbers to the left part of the arrar and positive  numbers to the righ part.
    // Numbers can be in any order, no need to preserve the order of the numbers


    #include <iostream>
    #include <vector>

    using namespace std;

//Dutch National flag algorithm

    vector<int> rearrangeArray(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> result(n);
        int low = 0;
        int high = n-1;
        
        while (low < high)
        {
            if (nums[low] < 0)
            {
                low ++;   
            }
            else if(nums[high] > 0)
            {
                high--;
            }
            else
            {
                swap(nums[low], nums[high]);
            }
           
        }
        return nums;
        
    }


    int main()
    {
        vector<int> array = {-3, 1, -2, -5, 2, -4};

        cout << "Original array: ";
        for (int i = 0; i < array.size(); i++)
        {
            cout << array[i]<<" ";
        }
        cout << endl;

        cout << "Array after rearranging: ";
        array = rearrangeArray(array);
        for (int i = 0; i < array.size(); i++)
        {
            cout << array[i]<<" ";
        }
        cout << endl;
    }