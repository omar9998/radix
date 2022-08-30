// radix sort

void radixSort(std::vector<int>& arr)
{
 int radix = 1;
    
    int max = *(std::max_element(arr.begin(), arr.end()));
    while(max / radix)
    {
        std::vector<std::vector<int>> buckets(10, std::vector<int>());
        for(const auto& num : arr)
        {
            int digit = num / radix % 10;
            buckets[digit].push_back(num);
        }
        std::size_t k = 0;
        
        for(std::size_t i = 0; i < 10; i++)
        {
            for(std::size_t j = 0; j < buckets[i].size(); j++)
            {
                arr[k] = buckets[i][j];
                k++;
            }
        }
       
        radix *= 10;	
	
