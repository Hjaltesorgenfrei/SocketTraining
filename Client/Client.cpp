#include <iostream>
#include <asio.hpp>

int main()
{
	asio::io_context io;

	asio::steady_timer t(io, asio::chrono::seconds(5));
}