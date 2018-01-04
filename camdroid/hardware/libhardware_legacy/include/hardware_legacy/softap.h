/*
 * Copyright (C) 2008 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _SOFTAP_H
#define _SOFTAP_H

#if __cplusplus
extern "C" {
#endif
/*����ֵ��0��ʾ�ɹ���-1��ʾʧ��*/
int enableSoftAp();
int disableSoftAp();
int setSoftap(char * name, char *password);
int getSoftAPIPaddr(char *IPaddr);

/*����1��ʾ�Ѿ�������0 ��ʾ��δ����*/
int isSoftAPenabled();

#if __cplusplus
};  // extern "C"
#endif

#endif  // _WIFI_API_H