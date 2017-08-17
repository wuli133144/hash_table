[![Build Status](https://travis-ci.org/wuli133144/hash_table.svg?branch=master)](https://travis-ci.org/wuli133144/hash_table.svg)

#about
我会持续更新hashtable，本项目在deepin os下可以良好运行，可以实现一般的查找功能

#feature
*链地址解决冲突
*可以实现基本的查找，插入
*跨平台运行

#install
拷贝一份代码到你的项目下，包含头文件```hash.h```

#test
项目下面有测试代码，说明hash表的使用情况
部分代码实例：
```
  
    inithashtable();
    put(3,2134);
    put(5,5643);

    printf("[%d]\n",get(3));
    printf("[%d]\n",get(5));
```

#Contributing

I will always merge *working* bug fixes. However, if you want to add something new to the API, please create an "issue" on github for this first  if i am free i will merge them if it's right
Remember to follow jackwu's code style and write appropriate tests.

## License
[The MIT License (MIT)](http://opensource.org/licenses/mit-license.php)

