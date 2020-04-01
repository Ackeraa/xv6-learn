# xv6-learn
## 环境搭建（MacOS）
### 1. 安装qemu模拟器

#### 1). 从MIT课程提供的源码仓库下载针对课程定制的qemu:
```
git clone https://github.com/mit-pdos/6.828-qemu.git qemu
```
#### 2). 配置源码文件:
```
./configure --disable-kvm --disable-werror --disable-sdl --target-list="i386-softmmu x86_64-softmmu"
```
#### 3). 安装 
```
make && make install
```

### 2. 安装跨平台编译器 i386-jos-elf-gcc

```
brew tap liudangyi/i386-jos-elf-gcc
brew install i386-jos-elf-gcc i386-jos-elf-gdb
```

### 3. 下载xv6源码并编译运行

```
git clone https://pdos.csail.mit.edu/6.828/2018/jos.git lab

make && make qemu
```
