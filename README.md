homerork01:
1. 源码编译UE5.4，新建一个C++工程，进行简单场景编辑和工程设置
2. 编译并构建安装包，确保能够用来将游戏工程安装到手机正常运行
（若无Andorid手机可构建桌面版本）;
PS:源文件本应该有Binaries、Build、Config、Content、DerivedDataCache、Intermediate、Plugins、Saved、Source
但是其中Binaries，Saved，DerivedDataCache和Intermediate目录是可以根据其他部分重新生成。
通常，这两个目录也是非常大的，所以做了删除处理
