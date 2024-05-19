#include <nlohmann/json.hpp>
#include "usenlo.h"
using json = nlohmann::json;

void usenlo(string filepath, string key, string val)
{
    json data;

    // 检查文件是否已存在，如果存在则读取文件内容到 JSON 对象
    if (std::filesystem::exists(filepath))
    {
        std::ifstream file(filepath);
        file >> data;
        file.close();
    }

    // 向 JSON 对象中添加新的键值对
    data[key] = val;

    // 保存 JSON 数据到文件
    std::ofstream file(filepath);
    file << data.dump(4); // 4 表示缩进
    file.close();
}

void usenlo2()
{
}
