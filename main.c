#include"httpd.h"


int main(void)
{
	//定义文件描述符及端口号
    int server_sock = -1;
    u_short port = 80;
    int client_sock = -1;
	//为已连接的套接字定义套接字地址结构
    struct sockaddr_in client_name;
	//获取套接字地址结构长度
    socklen_t  client_name_len = sizeof(client_name);

	//进行server_sock的初始化工作
    server_sock = startup(&port);
    printf("httpd running on port %d\n", port);

	//无限服务器循环
    while (1)
    {
	//阻塞等待连接
        client_sock = accept(server_sock,
                (struct sockaddr *)&client_name,
                &client_name_len);
        if (client_sock == -1)
            error_die("accept");
	//响应请求
         accept_request(client_sock); 
    }

	//关闭监听套接字
    close(server_sock);

    return(0);
}
