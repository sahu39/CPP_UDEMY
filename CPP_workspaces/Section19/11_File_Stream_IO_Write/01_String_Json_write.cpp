#include <iostream>
#include <fstream>
#include <string>
int main()
{
    std::string json_content = R"({
  "students": [
    {
      "name": "Alice",
      "age": 20,
      "major": "Computer Science",
      "grades": [90, 85, 88]
    },
    {
      "name": "Bob",
      "age": 22,
      "major": "Mechanical Engineering",
      "grades": [78, 82, 80]
    },
    {
      "name": "Charlie",
      "age": 21,
      "major": "Physics",
      "grades": [85, 87, 89]
    }
  ]
}
)";
    std::cout << "json content:\n" << json_content << std::endl;
    //std::ofstream file("sample-config.json",std::ios::binary);
    std::ofstream file("sample-config.json");
    if(file.is_open())
    {
        //for(const auto &s:json_content)
         //   file << s;
         file << json_content;
    }
    else
    {
        std::cerr << "Json file creation error" << std::endl;
    }

    return 0;
}