# syberh-qrcode
syberh扫码模块

## S1手机如果要开发扫码功能，请克隆分支s1

```javascript
# 进入自己的项目根目录，下载代码
git clone -b s1 https://github.com/syberos-team/syberh-qrcode
```

## 如何把扫码模块集成到自己的项目里
> syberh-qrocde位于项目根目录

1、在自己的项目pro文件中，引入`syberh_qrcode.pri`
```C++
include (./syberh-qrcode/syberh_qrcode.pri)
```

2、在自己的项目中`App_Workspace.cpp`中, 注册需要的C++模块，根据`QRCODE`宏来判断是否导入了syberh_qrcode模块

```C++
// 引入需要的头文件
#ifdef QRCODE
#include "../syberh-qrcode/src/qrcoderegister.h"
#endif

// 注册需要的C++模块
#ifdef QRCODE
    QrcodeRegister * qrcode = new QrcodeRegister();
    qrcode->init(m_view);
#endif
```

3、在自己的项目中`syberos.pri`文件，添加`LIB_DIR`变量，`com.syberos.demo`需要替换成自己的sopid

```C++
# 引入lib库(so文件)需要添加这个变量，位于手机上/data/app-libs目录下
LIB_DIR = /data/app-libs/com.syberos.demo
```