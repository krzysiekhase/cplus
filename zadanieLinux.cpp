#include <iostream>
#include <list>
#include <unordered_map>

// example online compiler: https://rextester.com/l/cpp_online_compiler_gcc
// input {5,4,1,5,4,1,2,1}; 
// output {5,4,1,2}; 

int main()
{
    auto plotList = [](const auto& l){ for (auto obj : l){std::cout << obj <<" ";};
                     std::cout<<std::endl;}; 
    
    std::list<int> exampleList = {5,4,1,5,4,1,2,1}; 
    
    exampleList.sort();    
    exampleList.unique();
    plotList(exampleList); //1 2 4 5   !=  {5,4,1,2}
    
    std::unordered_map<int, int> exampleMap;
    for (auto obj:exampleList) exampleMap.emplace(std::make_pair(obj,0)); 
    for (auto obj:exampleMap) std::cout<<obj.first<<" "; std::cout<<std::endl; //5 4 1 2 
}
