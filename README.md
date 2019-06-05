# ev-ftp-server-project

### 项目目的
实现一个基于libevent和线程池的FTP服务器程序，支持多用户、匿名登录、文件上传、下载、目录显示切换功能

### 项目环境
操作系统：windows 10    
IDE环境：Visual Studio 2017     

### 程序主要功能文件实现如下：
ev_ftp_server.cpp---------------主函数逻辑实现    
XThread.cpp--------------------线程类    
XThreadPool.cpp---------------线程池类    
XFtpFactory.cpp----------------工厂类    
XFtpTask.cpp--------------------ftp任务类    
XFtpServerCMD.cpp------------注册ftp各个命令的类     
XFtpLIST.cpp--------------------列表显示命令类    
XFtpPORT.cpp------------------port命令通道类    
XFtpRETR.cpp------------------文件下载命令类    
XFtpSTOR.cpp------------------文件上传命令类    
XFtpUSER.cpp------------------用户登录命令类
  
### 项目整体流程
![image](https://img2018.cnblogs.com/blog/1334974/201906/1334974-20190605143812989-1164327871.png)
