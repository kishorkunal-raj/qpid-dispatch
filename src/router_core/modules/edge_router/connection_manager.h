/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#ifndef qcm_edge_router_conn_mgr_types
#define qcm_edge_router_conn_mgr_types 1

typedef struct qcm_edge_conn_mgr_t qcm_edge_conn_mgr_t;
#include "router_core_private.h"

#endif


#ifndef qcm_edge_router_conn_mgr
#define qcm_edge_router_conn_mgr 1

qcm_edge_conn_mgr_t *qcm_edge_conn_mgr(qdr_core_t *core);
void qcm_edge_conn_mgr_final(qcm_edge_conn_mgr_t *cm);

#endif
