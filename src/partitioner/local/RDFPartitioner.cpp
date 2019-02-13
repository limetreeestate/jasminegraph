/**
Copyright 2019 JasmineGraph Team
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

#include "RDFPartitioner.h"
#include "MetisPartitioner.h"


void RDFPartitioner::convert(string graphName, string graphID, string inputFilePath,
                             string outputFilePath,
                             int nParts,
                             bool isDistributedCentralPartitions,
                             int nThreads,
                             int nPlaces
) {
    convertWithoutDistribution(graphName, graphID, inputFilePath, outputFilePath, nParts,
                               isDistributedCentralPartitions, nThreads, nPlaces
    );

    distributeEdges();

}

void RDFPartitioner::convertWithoutDistribution(string graphName, string graphID, string inputFilePath,
                                                  string outputFilePath, int nParts,
                                                  bool isDistributedCentralPartitions, int nThreads, int nPlaces) {
    this->outputFilePath = outputFilePath;
    this->nParts = nParts;
    this->graphName = graphName;
    this->isDistributedCentralPartitions = isDistributedCentralPartitions;
    this->graphID = graphID;
    this->nThreads = nThreads;
    this->nPlaces = nPlaces;
}

void RDFPartitioner::distributeEdges() {
    //method implementation
}

void RDFPartitioner::loadDataSet(string inputFilePath, string outputFilePath) {

}