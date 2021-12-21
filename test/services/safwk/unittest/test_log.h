/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef SAFWK_TEST_SERVICES_SAFWK_UNITTEST_TEST_LOG_H
#define SAFWK_TEST_SERVICES_SAFWK_UNITTEST_TEST_LOG_H
namespace OHOS {
namespace SAFWK {
#define DTEST_LOG std::cout << __FILE__ << ":" << __LINE__ << ":"
} // namespace SAFWK
} // namespace OHOS
#endif /* SAFWK_TEST_SERVICES_SAFWK_UNITTEST_TEST_LOG_H */