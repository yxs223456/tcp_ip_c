cmake_minimum_required(VERSION 3.17)
project(untitled C)

set(CMAKE_C_STANDARD 99)

add_executable(untitled main.c hello_server.c hello_client.c low_open.c low_read.c tcp_server.c tcp_client.c endian_conv.c echo_server.c echo_client.c op_client.c op_server.c sendrecv_serv.c recvsend_clnt.c uecho_server.c uecho_client.c bound_host1.c bound_host2.c uecho_con_client.c file_server.c file_client.c gethostbyname.c gethostbyaddr.c sock_type.c get_buf.c set_buf.c reuseadr_eserver.c zombie.c wait.c waitpid.c signal.c sigaction.c remove_zombie.c echo_mpserv.c echo_mpclient.c t_10_5.c pipe1.c pipe2.c pipe3.c echo_storeserv.c tpc_11_5.c select.c echo_selectserv.c oob_send.c oob_recv.c writev.c readv.c news_sender.c news_receiver.c dup.c sep_serv2.c sep_clnt.c echo_epollserv.c echo_EPLTserv.c echo_EPETserv.c)