/**
Copyright 2018 JasmineGraph Team
Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
 */

#ifndef JASMINEGRAPH_JASMINEGRAPHSERVER_H
#define JASMINEGRAPH_JASMINEGRAPHSERVER_H

#include <map>
#include "../frontend/JasmineGraphFrontEnd.h"
#include "../backend/JasmineGraphBackend.h"
#include "../metadb/SQLiteDBInterface.h"

using std::map;

class JasmineGraphServer {
private:
    map<std::string, long> hostPlaceMap;
    SQLiteDBInterface sqlite;
    JasmineGraphFrontEnd* frontend;
    JasmineGraphBackend* backend;
//    bool IS_DISTRIBUTED;
public:
    ~JasmineGraphServer();
    JasmineGraphServer();
    void init();
    int run();
    bool isRunning();
    bool IS_DISTRIBUTED;
};


#endif //JASMINEGRAPH_JASMINEGRAPHSERVER_H