SRC=ev_ftp_server.cpp XThreadPool.cpp XThread.cpp XFtpServerCMD.cpp\
XFtpFactory.cpp XFtpLIST.cpp XFtpPORT.cpp XFtpRETR.cpp XFtpSTOR.cpp\
XFtpTask.cpp XFtpUSER.cpp
ev_ftp_server:$(SRC)
	g++ $^ -o $@ -levent -lpthread -g 
	gdb ./$@
clean:
	rm -rf ev_ftp_server
	rm -rf *.o

