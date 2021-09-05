#include<iostream>
#include<vector>

/**
 * @brief Main loop
 * 
 * @return int 
 */
int main(void)
{
    /**
     * @brief Initialization of vector
     * 
     */
    // 1. 
    std::vector<int> vec_int{1,2,3};
    std::vector<int> vec_int2 = {3,4,5};
    std::vector<int> vec_int3;

    /**
     * @brief search
     * 
     */
    // 1. conventional loop
    std::cout<<"Conventional for loop:"<<std::endl;
    for(int i = 0;i<vec_int.size();i++)
    {
        std::cout<<vec_int[i]<<std::endl;
    }

    // 2. iterator
    for(auto i=vec_int.cbegin();i!=vec_int.cend();++i)
    {
        std::cout<<*i<<std::endl;
    }

    

    /**
     * @brief Avoid termination
     * 
     */
    while(1){}
    return 0;
}
