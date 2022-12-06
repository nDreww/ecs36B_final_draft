// for Json::value
#include <json/json.h>
#include <json/reader.h>
#include <json/writer.h>
#include <json/value.h>
#include <string>

// for JsonRPCCPP
#include <iostream>
#include "hw5server.h"
#include <jsonrpccpp/server/connectors/httpserver.h>
// #include "hw5client.h"
#include <jsonrpccpp/client/connectors/httpclient.h>
#include <stdio.h>

// ecs36b
#include <time.h>
#include "hw5server.cpp"

using namespace jsonrpc;
using namespace std;

int main() {
    
    HttpServer httpserver(7376);
    Myhw5Server s(httpserver, JSONRPC_SERVER_V1V2, "Grandma's Home");
    s.StartListening();
    std::cout << "Hit enter to stop the server" << endl;
    getchar();

    s.StopListening();
}