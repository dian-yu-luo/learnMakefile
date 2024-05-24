# 写一个项目的基本思路

写Makefile 文档


# 加快编译速度

头文件分离,如果这个文件只在某个文件内出现,那么只把对应的hpp 文件放到对应的cpp 文件里面

# clangd
在vscode使用之前需要一些小的配置生成compile_commands.json,来帮助clangd 进行代码快速的索引
``` sh
sudo apt install bear 
bear -- make
```
