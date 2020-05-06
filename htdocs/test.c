#include<stdio.h>

int main(void)
{
	printf("HTTP/1.0 200 OK\r\n");
	printf("Conten-Type: text/html\r\n");
	printf("\r\n");
	printf("<!DOCTYPE HTML>\r\n");
	printf("<html><head>welcome to my webSpace!</head>\r\n");
	printf("<body><h1 color=\"yellow\">This is title</h1><br/>\r\n");
	printf("<a href=\"http://www.baidu.com\">try me ^_^</a><br/>\r\n");
	printf("</body></html>\r\n");
	return 0;
}
