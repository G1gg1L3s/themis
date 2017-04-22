/*
* Copyright (c) 2017 Cossack Labs Limited
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#include <soter/soter.h>

#include <sodium.h>

#include <stdio.h>
#include <string.h>

#define SOTER_VERSION_TEXT_LENGTH sizeof(SOTER_VERSION_TEXT)

char soter_version_text[256]=SOTER_VERSION_TEXT;

const char* soter_version(){
    memcpy(soter_version_text+SOTER_VERSION_TEXT_LENGTH-1, sodium_ersion_string(), strlen(sodium_version_string)+1);
    return soter_version_text;
}